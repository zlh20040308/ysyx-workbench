#include <nvboard.h>
#include <Vtop.h>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <iostream>

vluint64_t sim_time = 0;
VerilatedVcdC *m_trace = nullptr;
VerilatedContext *contextp = nullptr;
static TOP_NAME *dut = nullptr;
const bool is_trace = false;

void nvboard_bind_all_pins(TOP_NAME *top);

static void single_cycle()
{
  dut->clk = 0;
  dut->eval();
  if (is_trace)
    m_trace->dump(sim_time);
  sim_time++;
  dut->clk = 1;
  dut->eval();
  if (is_trace)
    m_trace->dump(sim_time);
  sim_time++;
}

static void reset(int n)
{
  dut->rst = 1;
  while (n-- > 0)
    single_cycle();
  dut->rst = 0;
}

void sim_init()
{
  // verilate init
  dut = new TOP_NAME;
  contextp = new VerilatedContext;
  
}

int main(int argc, char **argv, char **env)
{
  // Verilated::traceEverOn(true);
  Verilated::commandArgs(argc, argv);
  // nvboard init
  nvboard_bind_all_pins(dut);
  nvboard_init();
  sim_init();

  // m_trace = new VerilatedVcdC;
  // dut->trace(m_trace, 5);
  // m_trace->open("waveform.vcd");

  reset(10);

  int i = 0;

  while (i--)
  {
    nvboard_update();
    std::cout<< 1 << std::endl;
    single_cycle();
  }

  if (is_trace)
    m_trace->close();
  delete dut;
  nvboard_quit();
}
