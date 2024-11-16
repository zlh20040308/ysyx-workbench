#pragma once
#include <common.h>
#include <stdio.h>
#include <verilator-sim.h>


#define MEM_START 0x80000000
#define MEM_END 0x8fffffff

void init_mem();

bool in_pmem(word_t addr);

word_t pmem_read(word_t addr, int len);
void pmem_write(word_t addr, int len, word_t data);

void out_of_bound();

uint8_t *guest_to_host(word_t paddr);
word_t host_to_guest(uint8_t *haddr);

extern VTop *top;

static inline word_t host_read(void *addr, int len) {
  return *(uint32_t *)addr;
  // switch (len) {
  // case 1:
  //   return *(uint8_t *)addr;
  // case 2:
  //   return *(uint16_t *)addr;
  // case 4:
  //   return *(uint32_t *)addr;
  // default:
  //   Log("[memory] Do not support this read length = %d\n", len);
  //   assert(0);
  // }
}

static inline void host_write(void *addr, int len, word_t data) {
  switch (len) {
  case 1:
    *(uint8_t *)addr = data;
    return;
  case 2:
    *(uint16_t *)addr = data;
    return;
  case 4:
    *(uint32_t *)addr = data;
    return;
  default:
    Log("[memory] Do not support this write length = %d", len);
    assert(0);
  }
}