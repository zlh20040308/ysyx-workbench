#include <stdio.h>
#include <sys/time.h>
#include <unistd.h>

int main() {
  struct timeval start, current;
  const double interval = 0.5; // 定时间隔（秒）

  // 获取起始时间
  gettimeofday(&start, NULL);
  printf("Timer started!\n");

  while (1) {
    // 获取当前时间
    gettimeofday(&current, NULL);

    // 计算时间差（以秒为单位）
    double elapsed = (current.tv_sec - start.tv_sec) +
                     (current.tv_usec - start.tv_usec) / 1000000.0;

    // 如果超过指定的间隔
    if (elapsed >= interval) {
      printf("0.5 seconds passed! Current time: %ld.%06ld seconds\n",
             current.tv_sec, current.tv_usec);

      // 更新起始时间为当前时间
      gettimeofday(&start, NULL);
    }
  }

  return 0;
}
