#include <stdio.h>
#include <nvboard.h>
#include <stdlib.h>
#include <iostream>
#include <cstdlib>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vtop.h"


#define MAX_SIM_TIME 300
#define VERIF_START_TIME 7
vluint64_t sim_time = 0;
vluint64_t posedge_cnt = 0;

static TOP_NAME dut;
static VerilatedVcdC *m_trace;


void nvboard_bind_all_pins(TOP_NAME *top);

static void single_cycle()
{
  dut.clk = 0;
  dut.eval();
  m_trace->dump(sim_time);
  sim_time++;
  dut.clk = 1;
  dut.eval();
  m_trace->dump(sim_time);
  sim_time++;
}

static void reset(int n)
{
  dut.rst = 1;
  while (n-- > 0)
    single_cycle();
  dut.rst = 0;
}

int main(int argc, char **argv, char **env)
{
  nvboard_bind_all_pins(&dut);
  nvboard_init();

  srand(time(NULL));
  Verilated::commandArgs(argc, argv);
  Vtop *dut = new Vtop;

  Verilated::traceEverOn(true);
  m_trace = new VerilatedVcdC;
  dut->trace(m_trace, 5);
  m_trace->open("waveform.vcd");

  reset(10);

  while (sim_time < 5000000)
  {
    nvboard_update();
    single_cycle();
  }

  m_trace->close();
  delete dut;
  return 0;
}