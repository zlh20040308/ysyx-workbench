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
//     dut->eval();
//     nvboard_update();
//   }

//   delete dut;
//   nvboard_quit();
// }

uint32_t M[] = {
  
}


#include <stdint.h>
#include "verilated_vcd_c.h"
#include "Vysyx_23060337_top.h"

VerilatedContext *contextp = NULL;
VerilatedVcdC *tfp = NULL;

static Vysyx_23060337_top *top;

void step_and_dump_wave()
{
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}
void sim_init()
{
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vysyx_23060337_top;
  contextp->traceEverOn(true);
  top->trace(tfp, 0);
  tfp->open("waveform.vcd");
}

void sim_exit()
{
  step_and_dump_wave();
  tfp->close();
}


uint32_t pmem_read(uint32_t pc){

}

int main()
{
  sim_init();

  while (???)
  {

    top->inst = pmem_read(top->pc);
    top->eval();
  }

  sim_exit();
}