/***************************************************************************************
 * Copyright (c) 2014-2022 Zihao Yu, Nanjing University
 *
 * NEMU is licensed under Mulan PSL v2.
 * You can use this software according to the terms and conditions of the Mulan
 *PSL v2. You may obtain a copy of Mulan PSL v2 at:
 *          http://license.coscl.org.cn/MulanPSL2
 *
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY
 *KIND, EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO
 *NON-INFRINGEMENT, MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
 *
 * See the Mulan PSL v2 for more details.
 ***************************************************************************************/

#include "local-include/reg.h"
#include "isa-def.h"
#include <isa.h>

const char *regs[] = {"$0", "ra", "sp",  "gp",  "tp", "t0", "t1", "t2",
                      "s0", "s1", "a0",  "a1",  "a2", "a3", "a4", "a5",
                      "a6", "a7", "s2",  "s3",  "s4", "s5", "s6", "s7",
                      "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"};

const char *csrs[] = {[MSTATUS] = "mstatus",
                      [MTVEC] = "mtvec",
                      [MEPC] = "mepc",
                      [MCAUSE] = "mcause"};

void isa_reg_display() {
  for (size_t i = 0; i < ARRLEN(regs); i++) {
    printf("%s = 0x%08x\n", reg_name(i), gpr(i));
  }
  printf("%s = 0x%08x\n", csr_name(MSTATUS), sr(MSTATUS));
  printf("%s = 0x%08x\n", csr_name(MTVEC), sr(MTVEC));
  printf("%s = 0x%08x\n", csr_name(MEPC), sr(MEPC));
  printf("%s = 0x%08x\n", csr_name(MCAUSE), sr(MCAUSE));
}

word_t isa_reg_str2val(const char *s, bool *success) {
  Log("input_reg = %s", s);
  for (size_t i = 0; i < ARRLEN(regs); i++) {
    Log("cur_reg = %s", reg_name(i));
    if (strcmp(reg_name(i), s + 1) == 0) {
      *success = true;
      return gpr(i);
    }
  }
  *success = false;
  Log("success = %d", *success);
  return 0;
}


word_t isa_csr_str2val(const char *s, bool *success) {
  Log("input_csr = %s", s);
  if (strcmp(csr_name(MSTATUS), s + 1) == 0) {
    *success = true;
    return sr(MSTATUS);
  }
  if (strcmp(csr_name(MTVEC), s + 1) == 0) {
    *success = true;
    return sr(MTVEC);
  }
  if (strcmp(csr_name(MEPC), s + 1) == 0) {
    *success = true;
    return sr(MEPC);
  }
  if (strcmp(csr_name(MCAUSE), s + 1) == 0) {
    *success = true;
    return sr(MCAUSE);
  }
  *success = false;
  Log("success = %d", *success);
  return 0;
}
