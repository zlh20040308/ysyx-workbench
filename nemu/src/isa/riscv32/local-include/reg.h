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

#ifndef __RISCV_REG_H__
#define __RISCV_REG_H__

#include <common.h>

typedef union {
  struct {
    word_t uie : 1;
    word_t sie : 1;
    word_t resv_0 : 1;
    word_t mie : 1;
    word_t upie : 1;
    word_t spie : 1;
    word_t resv_1 : 1;
    word_t mpie : 1;
    word_t spp : 1;
    word_t resv_2 : 2;
    word_t mpp : 2;
    word_t fs : 2;
    word_t xs : 2;
    word_t mprv : 1;
    word_t sum : 1;
    word_t mxr : 1;
    word_t tvm : 1;
    word_t tw : 1;
    word_t tsr : 1;
    word_t resv_3 : 8;
    word_t sd : 1;
  };
  word_t packed;
} csr_mstatus_t;

typedef union {
  struct {
    word_t code : 31;
    word_t intr : 1;
  };
  word_t packed;
} csr_mcause_t;

typedef union {
  struct {
    word_t ppn : 22;
    word_t asid : 9;
    word_t mode : 1;
  };
  word_t packed;
} csr_satp_t;

static inline int check_reg_idx(int idx) {
  IFDEF(CONFIG_RT_CHECK, assert(idx >= 0 && idx < MUXDEF(CONFIG_RVE, 16, 32)));
  return idx;
}

static inline int check_sr_idx(int idx) {
  IFDEF(CONFIG_RT_CHECK, assert(idx >= 0 && idx < 4096));
  return idx;
}

#define gpr(idx) (cpu.gpr[check_reg_idx(idx)])
#define sr(idx) (cpu.sr[check_sr_idx(idx)])

static inline const char *reg_name(int idx) {
  extern const char *regs[];
  return regs[check_reg_idx(idx)];
}

static inline const char *csr_name(int idx) {
  extern const char *csrs[];
  return csrs[check_sr_idx(idx)];
}

#endif
