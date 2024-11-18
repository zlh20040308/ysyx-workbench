
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

bool top_prev_clock = 1;
int prev_t1 = 0;
int prev_a5 = 0;
// #define CONFIG_RUNTIME_MESSAGE

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
  top->clock ^= 1;
  top->eval();
  top->clock ^= 1;
  top->eval();
  top->reset = 0;
  top->eval();
}

void sim_init() {
  Log("[simulation] initializing simulation");

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

  Log("[simulation] simulation initialized, now reset NPC");

  reset();
  assert(top->io_debug_gpr[0] == 0);
  assert(top->io_debug_mstatus == 0x1800);
  assert(top->io_debug_pc == 0x80000000);

  Log("[simulation] NPC has been resetted");
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

  // cycle = cycle + 1;
  // Log("before top->io_debug_pc = %x", top->io_debug_pc);
  // Log("cpu.pc = %x", cpu.pc);
  // Log("top->clock = %x", top->clock);
  // exit(0);
  Log("HAHA1");

  top->clock ^= 1;
  step_and_dump_wave();
  Log("HAHA2");
  if (top->io_debug_gpr[6] != 0x2f4110) {
    prev_t1 = top->io_debug_gpr[6];
  }
  prev_a5 = top->io_debug_gpr[15];

  top->clock ^= 1;
  step_and_dump_wave();
  Log("HAHA3");

  get_regs(); // used as print registers or difftest
  cycle = cycle + 1;

  // Log("top->io_debug_pc = %x", top->io_debug_pc);
  // Log("cpu.pc = %x", cpu.pc);
  // display_regs();

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