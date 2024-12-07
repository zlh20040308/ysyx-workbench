
#include <common.h>
#include <device.h>
#include <mem.h>
#include <verilator-sim.h>

#define PAGE_SHIFT 12
#define PAGE_SIZE (1ul << PAGE_SHIFT)
#define PAGE_MASK (PAGE_SIZE - 1)

#define IO_SPACE_MAX (2 * 1024 * 1024)

// #define CONFIG_DTRACE_COND

static uint8_t *io_space = NULL;
static uint8_t *p_space = NULL;

uint8_t *new_space(int size) {
  // printf("[device-map] adding new space with size %d\n", size);
  assert(p_space);
  uint8_t *p = p_space;
  assert(p);
  // page aligned;
  size = (size + (PAGE_SIZE - 1)) & ~PAGE_MASK;
  p_space += size;
  assert(p_space - io_space < IO_SPACE_MAX);
  return p;
}

static void invoke_callback(io_callback_t c, word_t offset, int len,
                            bool is_write) {
  if (c != NULL) {
    c(offset, len, is_write);
  }
}

void init_map() {
  io_space = (uint8_t *)malloc(IO_SPACE_MAX);
  assert(io_space);
  p_space = io_space;
  assert(p_space);
}

static bool check_bound(IOMap *map, word_t addr) {
  if (map == NULL) {
    Log("[device] address = 0x%x is out of bound, pc = %x", addr,
        top->io_debug_pc);
    Log("valid = %d", top->io_debug_Valid);
    npc_state.state = NPC_ABORT;
    return false;
  } else {
    if (addr <= map->high && addr >= map->low) {
      return true;
    } else {
      Log("[device] address = 0x%x is out of bound %s@[0x%x, 0x%x]\n", addr,
             map->name, map->low, map->high);
      npc_state.state = NPC_ABORT;
      return false;
    }
  }
}

word_t map_read(word_t addr, int len, IOMap *map) {
  assert(len >= 1 && len <= 8);

  if (!check_bound(map, addr)) {
    return -1;
    // return 0;
  }

  check_bound(map, addr);
  word_t offset = addr - map->low;
  invoke_callback(map->callback, offset, len, false); // prepare data to read
  word_t ret = host_read(map->space + offset, len);
#ifdef CONFIG_DTRACE_COND

  Log("Device: %s (Address Space: " FMT_PADDR " - " FMT_PADDR ")", map->name,
      map->low, map->high);
  Log("Action: READ");
  Log("Accessed Address: " FMT_PADDR, addr);
  Log("Read Data: " FMT_WORD "\n", ret);
#endif
  return ret;
}

void map_write(word_t addr, int len, word_t data, IOMap *map) {
  assert(len >= 1 && len <= 8);

  if (!check_bound(map, addr)) {
    return;
  }

  check_bound(map, addr);
  word_t offset = addr - map->low;
  host_write(map->space + offset, len, data);
  invoke_callback(map->callback, offset, len, true);
#ifdef CONFIG_DTRACE_COND
  Log("Device: %s (Address Space: " FMT_PADDR " - " FMT_PADDR ")", map->name,
      map->low, map->high);
  Log("Action: WRITE");
  Log("Accessed Address: " FMT_PADDR, addr);
  Log("Write Data: " FMT_WORD "\n", data);
#endif
}
