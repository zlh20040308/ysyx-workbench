
#include <common.h>
#include <cstdint>
#include <device.h>
#include <mem.h>
static uint8_t *pmem = NULL;

void init_mem() {
  Log("Initializing Memory");
  pmem = (uint8_t *)malloc(MEM_END - MEM_START + 1);
  assert(pmem);
  Log("Memory [0x%x, 0x%x]", MEM_START, MEM_END);
  return;
}

bool in_pmem(word_t addr) { return (addr >= MEM_START) && (addr <= MEM_END); }

uint8_t *guest_to_host(word_t paddr) { return pmem + paddr - MEM_START; }
word_t host_to_guest(uint8_t *haddr) { return haddr - pmem + MEM_START; }

void out_of_bound(word_t addr) {
  printf("[memory] address = 0x%x is out of bound of pmem@[0x%x,0x%x]\n", addr,
         MEM_START, MEM_END);
  assert(0);
}

word_t pmem_read(word_t addr, int len) {
  if (in_pmem(addr)) {
    // this is inside pmem, just call guest_to_host and host_read
    // Log("addr = %d\n", addr);
    word_t pmem_ret = host_read(guest_to_host(addr), len);
    return pmem_ret;
  } else {
    // Log("addr = %x\n", addr);
    // this is outside pmem, call device mmio read
    word_t mmio_ret = mmio_read(addr, len);
    return mmio_ret;
  }

  // should not reach here
  printf("[memory] should not reach here, check implementation!\n");
  assert(0);
  return -1;
}

void pmem_write(word_t addr, int len, word_t data) {
  if (in_pmem(addr)) {
    // this is inside pmem, just call guest_to_host and host_write
    host_write(guest_to_host(addr), len, data);
    return;
  } else {
    // Log("addr = %x\n", addr);
    // this is outside pmem, call device mmio read
    mmio_write(addr, len, data);
    return;
  }

  // should not reach here
  printf("[memory] should not reach here, check implementation!\n");
  assert(0);
  return;
}

extern "C" void ram_write_helper(uint32_t addr, uint32_t wdata,
                                 uint32_t wmask) {
  if (top->reset == 1) {
    return;
  }
  int len = 1;
  switch (wmask) {
  case 0x000000FF:
    len = 1;
    break;
  case 0x0000FFFF:
    len = 2;
    break;
  case 0xFFFFFFFF:
    len = 4;
    break;
  default:
    printf("[memory] invalid wmask = 0x%x\n", wmask);
  }
  pmem_write(addr, len, wdata & wmask);
}

extern "C" uint32_t ram_read_helper(uint32_t addr) {
  if (top->reset == 1) {
    return 0;
  }
  return pmem_read(addr, 4);
}