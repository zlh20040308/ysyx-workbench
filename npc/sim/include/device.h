#pragma once
#include <common.h>
#include <difftest.h>
#include <verilator-sim.h>

#define COFIG_DEVICES

#ifdef COFIG_DEVICES
#define CONFIG_I8042_DATA_MMIO 0xa0000060

#define CONFIG_SERIAL_MMIO 0xa00003f8

#define CONFIG_RTC_MMIO 0xa0000048

#define CONFIG_VGA_CTL_MMIO 0xa0000100
#define CONFIG_FB_ADDR 0xa1000000
#endif

typedef void (*io_callback_t)(uint32_t, int, bool);
uint8_t *new_space(int size);
extern uint64_t cycle;

typedef struct {
  const char *name;
  // we treat ioaddr_t as word_t here
  word_t low;
  word_t high;
  void *space;
  io_callback_t callback;
} IOMap;

static bool map_inside(IOMap *map, word_t addr) {
  // printf("At pc = 0x%8lx, addr: 0x%8x, Map \"%s\" [0x%8x,0x%8x]\n", cpu.pc,
  // addr, map -> name, map -> low, map -> high);
  return (addr >= map->low && addr <= map->high);
}

static inline int find_mapid_by_addr(IOMap *maps, int size, word_t addr) {
  int i;
  // Log("paddr is 0x%8x, cpu.pc = %x, top->pc = %x", addr, cpu.pc,
  //     top->io_debug_pc);
  for (i = 0; i < size; i++) {
    if (map_inside(maps + i, addr)) {
      Log("paddr is 0x%8x, cpu.pc = %x, next_pc = %x, clock = %d, cycle = %d",
          addr, cpu.pc, top->io_debug_next_pc, top->clock, cycle);
      difftest_skip_ref();
      return i;
    }
  }
  return -1;
}

void add_mmio_map(const char *name, word_t addr, void *space, uint32_t len,
                  io_callback_t callback);

word_t map_read(word_t addr, int len, IOMap *map);
void map_write(word_t addr, int len, word_t data, IOMap *map);

word_t mmio_read(word_t addr, int len);
void mmio_write(word_t addr, int len, word_t data);

void sdl_clear_event_queue();
void device_update();

void init_device();