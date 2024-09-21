// #include <verilated.h>
// #include "Vtop.h"
// #include <nvboard.h>

// static TOP_NAME* dut;
// void nvboard_bind_all_pins(TOP_NAME* top);

// int main()
// {
//   dut = new TOP_NAME;
//   nvboard_bind_all_pins(dut);
//   nvboard_init();
//   while (1)
//   {
//     dut->clock = 0;
//     dut->eval();
//     nvboard_update();
//     dut->clock = 1;
//     dut->eval();
//     nvboard_update();
//   }

//   delete dut;
//   nvboard_quit();
// }

#include "verilated_vcd_c.h"
#include "Vtop.h"

VerilatedContext *contextp = NULL;
VerilatedVcdC *tfp = NULL;

static Vtop *top;

void step_and_dump_wave()
{
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}

void tick()
{
  top->clock = 1;
  step_and_dump_wave();
  top->clock = 0;
  step_and_dump_wave();
}

void sim_init()
{
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vtop;
  contextp->traceEverOn(true);
  top->trace(tfp, 0);
  tfp->open("waveform.vcd");
}

void sim_exit()
{
  step_and_dump_wave();
  tfp->close();
}

int main()
{
  sim_init();

  int x = 0;
  while (x < 10)
  {
    tick();
  }

  sim_exit();
}