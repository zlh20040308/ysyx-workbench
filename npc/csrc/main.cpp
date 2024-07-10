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

uint8_t pmem[10000000] = {};

// 4 + 5 + 1 + 9 = 19
static uint32_t img[] = {
    0x00400293, // li t0, 4      (addi t0, x0, 4)
    0x00530313, // addi t0, t0, 5
    0x00130313, // addi t0, t0, 1
    0x00930313, // addi t0, t0, 9
    0x05D003B7, // li a7, 93     (addi a7, x0, 93)
    0x00000293, // li a0, 0      (addi a0, x0, 0)
    0x00000073, // ecall
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
  memcpy(pmem, img, sizeof(img));
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
  printf("raddr %u\n", raddr);
  if ((raddr - MEM_BASE) <= 36)
  { // 这里没有必要比较 `>=0`，因为是无符号整数
    printf("inst %u\n", *(uint32_t *)(pmem + (raddr - MEM_BASE)));
    return *(uint32_t *)(pmem + (raddr - MEM_BASE));
  }

  // 如果不满足条件，返回一个默认值或错误代码
  return 0; // 根据你的需求，可以修改这个默认返回值
}

int main()
{
  sim_init();
  top->rst = 1;


  top->clk = 0;
  step_and_dump_wave();

  top->clk = 1;
  step_and_dump_wave();

  top->clk = 0;
  step_and_dump_wave();

  top->rst = 0;
  step_and_dump_wave();

  top->clk = 1;
  step_and_dump_wave();

  top->clk = 0;
  step_and_dump_wave();

  top->clk = 1;
  step_and_dump_wave();

  top->clk = 0;
  step_and_dump_wave();

  top->clk = 1;
  step_and_dump_wave();

  top->clk = 0;
  step_and_dump_wave();

  top->clk = 1;
  step_and_dump_wave();

  top->clk = 0;
  step_and_dump_wave();

  top->clk = 1;
  step_and_dump_wave();

  top->clk = 0;
  step_and_dump_wave();

  top->clk = 1;
  step_and_dump_wave();

  top->clk = 0;
  step_and_dump_wave();

  sim_exit();
}