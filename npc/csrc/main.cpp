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

#include <stdio.h>
#include <stdint.h>
#include "verilated_vcd_c.h"
#include "Vysyx_23060337_top.h"

#define MEM_BASE 0x80000000

uint8_t pmem[] = {
    0xfd,
    0x01,
    0x01,
    0x13,
    0xfd,
    0x01,
    0x01,
    0x13,
    0xfd,
    0x01,
    0x01,
    0x13,
    0xfd,
    0x01,
    0x01,
    0x13,
    0xfd,
    0x01,
    0x01,
    0x13,
    0xfd,
    0x01,
    0x01,
    0x13,
    0xfd,
    0x01,
    0x01,
    0x13,
    0xfd,
    0x01,
    0x01,
    0x13,
    0xfd,
    0x01,
    0x01,
    0x13,
};

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

extern "C" uint32_t pmem_read(uint32_t raddr)
{
  printf("%u\n",raddr - MEM_BASE);
  printf("%u\n",raddr - MEM_BASE >=0);
  printf("%u\n",raddr - MEM_BASE <= 36);

  if (raddr - MEM_BASE >=0 && raddr - MEM_BASE <= 36)
  {
    printf("%u\n",raddr - MEM_BASE);
    printf("haha\n");
    return *(uint32_t*)(pmem + (raddr - MEM_BASE));
  }
}

int main()
{
  sim_init();
  top->rst = 1;
  top->eval();
  top->rst = 0;
  top->eval();
  
  top->clk = 0;
  top->eval();
  top->clk = 1;
  top->eval();
  top->clk = 0;
  top->eval();
  top->clk = 1;
  top->eval();
  top->clk = 0;
  top->eval();
  top->clk = 1;
  top->eval();
  top->clk = 0;
  top->eval();


  sim_exit();
}