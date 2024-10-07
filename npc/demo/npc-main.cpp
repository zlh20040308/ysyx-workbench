#include "VTop.h"
// #include "Valu___024unit.h"
#include <cassert>
#include <iostream>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <verilated.h>
#include <verilated_vcd_c.h>

VTop *dut = NULL;

#define CONFIG_MSIZE 0x8000000
#define CONFIG_MBASE 0x80000000
#define CONFIG_PC_RESET_OFFSET 0
#define PMEM_LEFT ((uint32_t)CONFIG_MBASE)
#define PMEM_RIGHT ((uint32_t)CONFIG_MBASE + CONFIG_MSIZE - 1)
#define RESET_VECTOR (PMEM_LEFT + CONFIG_PC_RESET_OFFSET)
#define gpr(x) (dut->io_debug_gpr[x])

static char *img_file = NULL;
static uint8_t pmem[CONFIG_MSIZE] = {};

uint8_t *guest_to_host(uint32_t paddr) { return pmem + paddr - CONFIG_MBASE; }
uint32_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }

extern "C" void ram_write_helper(uint32_t addr, uint32_t wdata, uint32_t wmask,
                                 bool wen) {
  if (!wen) {
    return;
  }
  if (addr < CONFIG_MBASE || addr > PMEM_RIGHT) {
    printf("Write pmem out of bound!\n");
    exit(1);
  }
  // printf("Write pmem\n");
  // printf("Addr = 0x%x\n", addr);
  // printf("Data = 0x%x\n", wdata);
  // printf("wmask = 0x%x\n", wmask);

  uint32_t *waddr = (uint32_t *)guest_to_host(addr);
  // printf("Before write, Data = 0x%x\n", *waddr);

  *waddr = (wdata & wmask) | (*waddr & ~wmask);
  // printf("After write, Data = 0x%x\n", *waddr);
}

extern "C" uint32_t ram_read_helper(uint32_t addr) {
  if (dut->reset == 1) {
    return *((uint32_t *)guest_to_host(CONFIG_MBASE));
  }
  if (addr < CONFIG_MBASE || addr > PMEM_RIGHT) {
    return *((uint32_t *)guest_to_host(CONFIG_MBASE));
  }
  uint32_t *waddr = (uint32_t *)guest_to_host(addr);
  // printf("Read pmem\n");
  // printf("Addr = 0x%x\n", addr);
  // printf("Data = 0x%x\n", *waddr);
  return *waddr;
}

static long load_img() {
  if (img_file == NULL) {
    printf("No image is given. Use the default build-in image.");
    exit(1);
  }

  FILE *fp = fopen(img_file, "rb");

  // 将文件指针移动到文件末尾
  fseek(fp, 0, SEEK_END);

  // 获取文件指针当前位置（即文件大小）并存储在 size 变量中
  long size = ftell(fp);

  printf("The image is %s, size = %ld\n", img_file, size);

  // 将文件指针重置到文件开头
  fseek(fp, 0, SEEK_SET);

  // 将 镜像文件 读入内存（pmem）
  int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  // 返回镜像大小
  return size;
}

void reset() {
  dut->reset = 1;
  dut->eval();
  int loop = 20;
  while (loop) {
    dut->clock ^= 1;
    dut->eval();
    loop--;
  }
  dut->reset = 0;
}

void print_gpr() {
  for (int i = 0; i < 16; ++i) {
    printf("gpr[%d] = 0x%x\n", i, gpr(i));
  }
}

int main(int argc, char *argv[]) {

  /* 读入镜像文件 */
  img_file = argv[1];

  /* 将镜像文件加载到数组中 */
  load_img();

  /* 初始化仿真环境 */
  dut = new VTop;
  reset();

  dut->eval();

  //   Verilated::traceEverOn(true);
  //   VerilatedVcdC *m_trace = new VerilatedVcdC;
  //   dut->trace(m_trace, 5);
  //   m_trace->open("waveform.vcd");

  int max_loop = 80;

  uint32_t pc = dut->io_debug_alu_op;
  while (1) {
    if (dut->io_ebreak == 1) {
      break;
    }

    dut->clock ^= 1;
    dut->eval();
    if (dut->clock == 1) {
      // printf("After processing pc = 0x%x\n", pc);
      // print_gpr();
      // printf("\n");
    } else {
      pc = dut->io_debug_pc;

      // printf("Now, processing pc = 0x%x\n", dut->io_debug_pc);
      // printf("io_debug_alu_op = 0x%x\n", dut->io_debug_alu_op);
      // print_gpr();
      // printf("\n");
    }
    // m_trace->dump(sim_time);
  }
  if (dut->io_debug_gpr[10] == 0) {
    printf("Well done!!!!\n");
  } else {
    printf("Something wrong!!!!\n");
    print_gpr();
  }
  //   m_trace->close();
  delete dut;
  exit(EXIT_SUCCESS);
}
