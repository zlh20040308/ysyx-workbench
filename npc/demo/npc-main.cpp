#include "VTop.h"
#include <cassert>
#include <iostream>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <verilated.h>
#include <verilated_vcd_c.h>

VerilatedContext *contextp = nullptr;
VerilatedVcdC *tfp = nullptr;
VTop *dut = nullptr;
// #define CONFIG_VCD_OUTPUT 1
int sim_time = 0;
int prev_imm_sel = 0;
int prev_alu_out = 0;
int prev_csr_id = 0;
int prev_CSRCmd = 0;
int prev_CSRWdata = 0;

#define CONFIG_MSIZE 0x8000000
#define CONFIG_MBASE 0x80000000
#define CONFIG_PC_RESET_OFFSET 0
#define PMEM_LEFT ((uint32_t)CONFIG_MBASE)
#define PMEM_RIGHT ((uint32_t)CONFIG_MBASE + CONFIG_MSIZE - 1)
#define RESET_VECTOR (PMEM_LEFT + CONFIG_PC_RESET_OFFSET)
#define gpr(x) (dut->io_debug_gpr[x])
void print_gpr();

static char *img_file = nullptr;
static uint8_t pmem[CONFIG_MSIZE] = {};

uint8_t *guest_to_host(uint32_t paddr) { return pmem + paddr - CONFIG_MBASE; }
uint32_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }

extern "C" void ram_write_helper(uint32_t addr, uint32_t wdata,
                                 uint32_t wmask) {
  if (addr < CONFIG_MBASE || addr > PMEM_RIGHT) {
    printf("Write pmem out of bound!\n");
    exit(1);
  }
  uint32_t *waddr = (uint32_t *)guest_to_host(addr);
  *waddr = (wdata & wmask) | (*waddr & ~wmask);
}

extern "C" uint32_t ram_read_helper(uint32_t addr) {
  if (dut->reset == 1) {
    return *((uint32_t *)guest_to_host(CONFIG_MBASE));
  }
  if (addr >= CONFIG_MBASE && addr <= PMEM_RIGHT) {
    uint32_t *waddr = (uint32_t *)guest_to_host(addr);
    return *waddr;
  } else {
    printf("Something go wrong\n");
    print_gpr();
    exit(1);
  }
}

static long load_img() {
  if (img_file == nullptr) {
    printf("No image is given. Use the default build-in image.\n");
    exit(1);
  }

  FILE *fp = fopen(img_file, "rb");
  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);
  printf("The image is %s, size = %ld\n", img_file, size);
  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
  assert(ret == 1);
  fclose(fp);
  return size;
}

void reset() {
  dut->reset = 1;
  dut->clock = 0;
  dut->eval();
#ifdef CONFIG_VCD_OUTPUT
  printf("ajajaa\n");
  contextp->timeInc(1);
  tfp->dump(contextp->time());
#endif
  int loop = 20;
  while (loop) {
    dut->clock ^= 1;
    dut->eval();
    loop--;
  }
  dut->reset = 0;
}

void print_gpr() {
  printf("PC = 0x%x\n", dut->io_debug_pc);
  for (int i = 0; i < 16; ++i) {
    printf("gpr[%d] = 0x%x\n", i, gpr(i));
  }
  printf("mstatus = 0x%x\n", dut->io_debug_mstatus);
  printf("mtvec = 0x%x\n", dut->io_debug_mtvec);
  printf("mepc = 0x%x\n", dut->io_debug_mepc);
  printf("mcause = 0x%x\n", dut->io_debug_mcause);
}

int main(int argc, char *argv[]) {
  if (argc < 2) {
    printf("Usage: %s <image_file>\n", argv[0]);
    exit(1);
  }

  img_file = argv[1];
  load_img();

#ifdef CONFIG_VCD_OUTPUT
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
#endif

  dut = new VTop;

#ifdef CONFIG_VCD_OUTPUT
  contextp->traceEverOn(true);
  dut->trace(tfp, 1);
  tfp->open("dump.vcd");
#endif

  reset();
  dut->eval();

  int max_loop = 80;
  uint32_t pc = dut->io_debug_alu_op;
  while (1) {
    sim_time++;
    if (dut->io_ebreak == 1) {
      break;
    }

    dut->clock ^= 1;
    dut->eval();
#ifdef CONFIG_VCD_OUTPUT
    printf("ajajaa\n");
    contextp->timeInc(1);
    tfp->dump(contextp->time());
#endif
    if (dut->io_debug_mtvec == 0x5) {
      print_gpr();
      printf("prev_imm_sel  = %x\n", prev_imm_sel   );
      printf("prev_alu_out  = %x\n", prev_alu_out   );
      printf("prev_csr_id   = %x\n", prev_csr_id   );
      printf("prev_CSRCmd   = %x\n", prev_CSRCmd   );
      printf("prev_CSRWdata = %x\n", prev_CSRWdata );
      exit(1);
    } else {
      prev_imm_sel   = dut->io_debug_imm_sel;
      prev_alu_out   = dut->io_debug_alu_out ;
      prev_csr_id   = dut->io_debug_csr_id ;
      prev_CSRCmd   = dut->io_debug_CSRCmd ;
      prev_CSRWdata = dut->io_debug_CSRWdata ;
    }
    if (dut->clock == 1) {
      // printf("After processing pc = 0x%x\n", pc);
      // print_gpr();
      // printf("\n");
    } else {
      pc = dut->io_debug_pc;
      printf("Now, processing pc = 0x%x\n", dut->io_debug_pc);
      // printf("io_debug_alu_op = 0x%x\n", dut->io_debug_alu_op);
      // print_gpr();
      // printf("\n");
    }

    printf("\n");
  }

  if (dut->io_debug_gpr[3] == 1) {
    printf("Well done!!!!\n");
  } else {
    printf("Something wrong!!!!\n");
    print_gpr();
  }

#ifdef CONFIG_VCD_OUTPUT
  tfp->close();
#endif

  delete dut;
  delete tfp;
  delete contextp;
  exit(EXIT_SUCCESS);
}