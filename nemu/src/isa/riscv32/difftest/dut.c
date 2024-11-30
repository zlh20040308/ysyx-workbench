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

#include "../local-include/reg.h"
#include "debug.h"
#include "isa-def.h"
#include <cpu/difftest.h>
#include <isa.h>
#include <stdbool.h>
#include <stddef.h>

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  bool success = true;
  if (ref_r->pc != pc) {
    Log("pc is different, right = " FMT_WORD ", wrong = " FMT_WORD
        ", diff = " FMT_WORD,
        ref_r->pc, pc, ref_r->pc ^ pc);
    success = false;
  }
  for (size_t i = 0; i < MUXDEF(CONFIG_RVE, 16, 32); i++) {
    if (!difftest_check_reg(reg_name(i), pc, ref_r->gpr[i], gpr(i))) {
      success = false;
    }
  }
  if (!difftest_check_csr(csr_name(MEPC), pc, ref_r->sr[MEPC], sr(MEPC))) {
    success = false;
  }
  if (!difftest_check_csr(csr_name(MSTATUS), pc, ref_r->sr[MSTATUS],
                          sr(MSTATUS))) {
    success = false;
  }
  if (!difftest_check_csr(csr_name(MTVEC), pc, ref_r->sr[MTVEC], sr(MTVEC))) {
    success = false;
  }

  if (!difftest_check_csr(csr_name(MCAUSE), pc, ref_r->sr[MCAUSE],
                          sr(MCAUSE))) {
    success = false;
  }

  return success;
}

void isa_difftest_attach() {}
