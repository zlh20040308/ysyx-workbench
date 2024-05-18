#include <nvboard.h>
#include <Vtop.h>
#include <verilated.h>
#include <verilated_vcd_c.h>

vluint64_t sim_time = 0;
VerilatedVcdC *m_trace;
static TOP_NAME *dut;
bool is_trace = true;

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

int main(int argc, char **argv, char **env)
{

  Verilated::commandArgs(argc, argv);
  dut = new TOP_NAME;
  nvboard_bind_all_pins(dut);
  nvboard_init();
  /* 不要修改以上的代码 */

  if (is_trace)
  {
    Verilated::traceEverOn(true);
    m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");
  }

  reset(10);

  while (sim_time < 650)
  {
    nvboard_update();
    single_cycle();
  }
  if (is_trace)
    m_trace->close();
  delete dut;
  nvboard_quit();
}
