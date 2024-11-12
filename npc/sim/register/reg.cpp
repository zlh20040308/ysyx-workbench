/***************************************************************************************
 * Copyright (c) 2023 Yusong Yan, Beijing 101 High School
 * Copyright (c) 2023 Yusong Yan, University of Washington - Seattle
 *
 * YSYX-NPC-SIM is licensed under Mulan PSL v2.
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

#include <verilator-sim.h>

// CSR list: mstatus mtvec mepc macuse

void get_regs() {
  assert(top);

  cpu.pc = top->io_debug_pc;

  if (NR_GPRs == 16 || NR_GPRs == 32) {
    cpu.gpr[0] = top->io_debug_gpr[0];
    cpu.gpr[1] = top->io_debug_gpr[1];
    cpu.gpr[2] = top->io_debug_gpr[2];
    cpu.gpr[3] = top->io_debug_gpr[3];
    cpu.gpr[4] = top->io_debug_gpr[4];
    cpu.gpr[5] = top->io_debug_gpr[5];
    cpu.gpr[6] = top->io_debug_gpr[6];
    cpu.gpr[7] = top->io_debug_gpr[7];
    cpu.gpr[8] = top->io_debug_gpr[8];
    cpu.gpr[9] = top->io_debug_gpr[9];
    cpu.gpr[10] = top->io_debug_gpr[10];
    cpu.gpr[11] = top->io_debug_gpr[11];
    cpu.gpr[12] = top->io_debug_gpr[12];
    cpu.gpr[13] = top->io_debug_gpr[13];
    cpu.gpr[14] = top->io_debug_gpr[14];
    cpu.gpr[15] = top->io_debug_gpr[15];
  } else {
    printf("[register] wrong GPR number\n");
    assert(0);
  }

  return;
}

void display_regs() {
  assert(top);
  assert(&cpu);

  printf("PC = 0x%x\n", cpu.pc);

  for (int i = 0; i < NR_GPRs; i = i + 1) {
    printf("GPR[%2d] = 0x%x\n", i, cpu.gpr[i]);
  }

  printf("\n");

  return;
}