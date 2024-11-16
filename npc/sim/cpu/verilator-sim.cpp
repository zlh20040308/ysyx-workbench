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

#include <cassert>
#include <common.h>
#include <cstdio>
#include <device.h>
#include <difftest.h>
#include <math.h>
#include <mem.h>
#include <verilator-sim.h>

#ifdef CONFIG_DIFFTEST
word_t last_diff_pc = 0;
#endif

#define NPC_RUNNING 0
#define NPC_STOPPED 1

//#define CONFIG_RUNTIME_MESSAGE

int memory_delay = 0;

void pmem_write(word_t, int, word_t);
word_t pmem_read(word_t, int);

VerilatedContext *contextp;
VerilatedVcdC *tfp;
VTop *top;

uint64_t cycle;
word_t instruction;
word_t time_of_exec;

void reset() {
  top->reset = 1;
  top->eval();
  int loop = 20;
  while (loop) {
    top->clock ^= 1;
    top->eval();
    loop--;
  }
  top->reset = 0;
  top->eval();
}

void sim_init() {
  printf("[simulation] initializing simulation\n");

#ifdef CONFIG_VCD_OUTPUT
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
#endif

  top = new VTop;

#ifdef CONFIG_VCD_OUTPUT
  contextp->traceEverOn(true);
  top->trace(tfp, 0);
  tfp->open("dump.vcd");
#endif

  cycle = 0;
  instruction = 0;
  time_of_exec = 0;

  printf("[simulation] simulation initialized, now reset NPC\n");

  reset();
  assert(top->io_debug_gpr[0] == 0);
  assert(top->io_debug_mstatus == 0x1800);
  

  printf("[simulation] NPC has been resetted\n");
  return;
}

void sim_exit() {
  assert(top);

  printf("[simulation] simulation exitted, total cycles = %ld\n", cycle);
  step_and_dump_wave();

#ifdef CONFIG_VCD_OUTPUT
  tfp->close();
#endif

  return;
}

void sim_one_cycle() {
  assert(top);

  cycle = cycle + 1;

  top->clock ^= 1;
  top->eval();
  step_and_dump_wave();

  top->clock ^= 1;
  top->eval();
  step_and_dump_wave();


  get_regs(); // used as print registers or difftest
  // display_regs();

#ifdef CONFIG_DIFFTEST
    difftest_one_exec();
    printf("HAHA\n");
#endif

  if (top->io_ebreak == 1) {
    printf("NPC simulation finished at cycle = %ld, a0 = %d, ", cycle - 1,
           top->io_debug_gpr[10]);
    if (top->io_debug_gpr[10] == 0) {
      printf("HIT GOOD TRAP\n");
    } else {
      printf("HIT BAD  TRAP\n");
    }
    npc_state.state = NPC_END;
  }

  return;
}

void step_and_dump_wave() {
#ifdef CONFIG_VCD_OUTPUT
  assert(contextp);
  assert(tfp);
#endif

  top->eval();

#ifdef CONFIG_VCD_OUTPUT
  contextp->timeInc(1);
  tfp->dump(contextp->time());
#endif

  return;
}

double compute_ipc() {
  assert(cycle > 0);
  assert(instruction > 0);

  double ans = (double)instruction / (double)cycle;
  printf("[simulation] IPC is %lf\n", ans);

  return ans;
}