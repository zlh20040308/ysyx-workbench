#include <verilated.h>
#include <iostream>
// #include <nvboard.h>

// static TOP_NAME* dut;
// void nvboard_bind_all_pins(TOP_NAME* top);

// int main()
// {
//   dut = new TOP_NAME;
//   std::cout << dut->y << std::endl;
//   nvboard_bind_all_pins(dut);
//   std::cout << dut->y << std::endl;
//   nvboard_init();
//   // reset(10);
//   std::cout << dut->y << std::endl;
//   while (1)
//   {
//     dut->eval();
//     // std::cout << dut->y << std::endl;
//     nvboard_update();
//     // single_cycle();
//   }

//   delete dut;
//   nvboard_quit();
// }

#include "verilated_vcd_c.h"
#include "Vdecode24.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vdecode24* top;

void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}
void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vdecode24;
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

  top->en = 0b0;  top->x = 0b00;  step_and_dump_wave();
                  top->x = 0b01;  step_and_dump_wave();
                  top->x = 0b10;  step_and_dump_wave();
                  top->x = 0b11;  step_and_dump_wave();
  top->en = 0b1;  top->x = 0b00;  step_and_dump_wave();
                  top->x = 0b01;  step_and_dump_wave();
                  top->x = 0b10;  step_and_dump_wave();
                  top->x = 0b11;  step_and_dump_wave();
  sim_exit();
}