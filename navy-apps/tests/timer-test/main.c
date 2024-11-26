#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <unistd.h>
#include <NDL.h>


void print_time_interval() {
  uint32_t start = NDL_GetTicks(); // 获取初始时间

  while (1) {
    uint32_t now = NDL_GetTicks(); // 获取当前时间
    // 计算时间间隔（毫秒）
    uint32_t elapsed_time = now - start;

    // 如果时间间隔大于等于 500 毫秒（即 0.5 秒）
    if (elapsed_time >= 500) {
      printf("0.5 seconds passed...\n");
      start = now; // 更新开始时间，重新计时
    }
  }
}

int main() {
  NDL_Init(1);
  printf("Starting timer test...\n");
  print_time_interval();
  NDL_Quit();
  return 0;
}