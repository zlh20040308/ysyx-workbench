// #include <nvboard.h>
// #include <verilated.h>
// #include "Vmux41.h"
// #include <iostream>

// static TOP_NAME* dut;
// void nvboard_bind_all_pins(TOP_NAME* top);

// int main()
// {
//   dut = new TOP_NAME;
//   nvboard_bind_all_pins(dut);
//   nvboard_init();
//   // reset(10);

//   while (1)
//   {
//     dut->eval();
//     nvboard_update();
//     // single_cycle();
//   }

//   delete dut;
//   nvboard_quit();
// }

#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vmux41.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vmux41* top;

void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}
void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vmux41;
  contextp->traceEverOn(true);
  top->trace(tfp, 0);
  tfp->open("waveform.vcd");
}

void sim_exit(){
  step_and_dump_wave();
  tfp->close();
}

int main() {
  sim_init();
  top->y=0b00;  top->x0=0b11;  top->x1=0b10;  top->x2=0b01;  top->x3=0b00;  step_and_dump_wave();
  top->y=0b01;  step_and_dump_wave();
  top->y=0b10;  step_and_dump_wave();
  top->y=0b11;  step_and_dump_wave();
  sim_exit();
}