#pragma once
#include <common.h>
#include <dlfcn.h>

#define CONFIG_DIFFTEST 1

enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };

void init_difftest(char *ref_so_file, word_t img_size);
void difftest_one_exec();
bool difftest_check_reg();
void difftest_skip_ref();

extern void (*ref_difftest_memcpy)(word_t addr, void *buf, word_t n,
                                   bool direction);
extern void (*ref_difftest_regcpy)(void *dut, bool direction);
extern void (*ref_difftest_exec)(word_t n);
extern void (*ref_difftest_raise_intr)(word_t NO);