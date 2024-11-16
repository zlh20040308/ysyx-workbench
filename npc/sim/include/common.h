#pragma once
#include <assert.h>
#include <inttypes.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

typedef int32_t sword_t;
typedef uint32_t word_t;

#define BITMASK(bits) ((1ull << (bits)) - 1)
#define BITS(x, hi, lo)                                                        \
  (((x) >> (lo)) & BITMASK((hi) - (lo) + 1)) // similar to x[hi:lo] in verilog

#define STRLEN(CONST_STR) (sizeof(CONST_STR) - 1)
#define ARRLEN(arr) (int)(sizeof(arr) / sizeof(arr[0]))

// static enum { NPC_RUNNING, NPC_STOP, NPC_END, NPC_ABORT, NPC_QUIT };

#define FMT_WORD "0x%08x"
#define FMT_PADDR "0x%08x"

#define NPC_RUNNING 0
#define NPC_STOP 1
#define NPC_END 2
#define NPC_ABORT 3
#define NPC_QUIT 4

#define CONFIG_FTRACE

uint64_t get_time();


#define Log(format, ...) \
  printf("\33[38;5;214m[%s,%d,%s] " format "\33[0m\n", \
      __FILE__, __LINE__, __func__, ## __VA_ARGS__)

#define TODO() panic("please implement me")