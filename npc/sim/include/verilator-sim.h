#pragma once
#include <common.h>

#include "../../obj_dir/VTop.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

#define NR_GPRs 16
#define NR_CSRs 4096

typedef struct {
  word_t gpr[NR_GPRs];
  word_t pc;
  word_t csr[NR_CSRs];
} rtl_CPU_State;

extern rtl_CPU_State cpu;

typedef struct {
  int state;
  word_t halt_pc;
  uint32_t halt_ret;
} NPCState;

extern NPCState npc_state;

// #define CONFIG_VCD_OUTPUT

void sim_init();
void sim_exit();
void sim_one_cycle();
void step_and_dump_wave();

void get_regs();

extern VerilatedContext *contextp;
extern VerilatedVcdC *tfp;
extern VTop *top;

extern uint64_t cycle;
extern word_t instruction;
extern word_t time_of_exec;

double compute_ipc();

void sim_mem(int delay_cycle);

void display_regs();