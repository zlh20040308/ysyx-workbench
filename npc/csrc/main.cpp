#include <nvboard.h>
#include <Vtop.h>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <iostream>

static TOP_NAME* dut;
void nvboard_bind_all_pins(TOP_NAME *top);

int main(int argc, char **argv, char **env)
{
  dut = new TOP_NAME;
  nvboard_bind_all_pins(dut);
  nvboard_init();


  while(1) {
    nvboard_update();
    dut->clk = 0;
    dut->eval();
    dut->clk = 1;
    dut->eval();
  }

  delete dut;
  nvboard_quit();
}
