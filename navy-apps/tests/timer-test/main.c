#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <unistd.h>

void print_time_interval() {
  struct timeval start, now;
  gettimeofday(&start, NULL); // 获取初始时间

  while (1) {
    gettimeofday(&now, NULL); // 获取当前时间
    // 计算时间间隔（微秒）
    long elapsed_time =
        (now.tv_sec - start.tv_sec) * 1000000 + (now.tv_usec - start.tv_usec);

    // 如果时间间隔大于等于 500,000 微秒（即 0.5 秒）
    if (elapsed_time >= 500000) {
      printf("0.5 seconds passed...\n");
      start = now; // 更新开始时间，重新计时
    }

    usleep(10000); // 稍微休眠一下，避免过于频繁的 CPU 占用
  }
}

int main() {
  printf("Starting timer test...\n");
  print_time_interval();
  return 0;
}
