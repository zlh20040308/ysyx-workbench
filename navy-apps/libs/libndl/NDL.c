#include <fcntl.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#include <unistd.h>

static int evtdev = -1;
static int fbdev = -1;
static int screen_w = 0, screen_h = 0;
static int fd_events = -1;

uint32_t NDL_GetTicks() {
  struct timeval tv;
  gettimeofday(&tv, NULL);
  uint32_t milliseconds = (uint32_t)(tv.tv_sec * 1000 + tv.tv_usec / 1000);
  return milliseconds;
}

int NDL_PollEvent(char *buf, int len) {
  if (fd_events == -1) {
    fd_events = open("/dev/events", 0);
  }
  return read(fd_events, buf, len);
}

void NDL_OpenCanvas(int *w, int *h) {
  if (getenv("NWM_APP")) {
    printf("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa\n");
    int fbctl = 4;
    fbdev = 5;
    screen_w = *w;
    screen_h = *h;
    char buf[64];
    int len = sprintf(buf, "%d %d", screen_w, screen_h);
    // let NWM resize the window and create the frame buffer
    write(fbctl, buf, len);
    while (1) {
      // 3 = evtdev
      int nread = read(3, buf, sizeof(buf) - 1);
      if (nread <= 0)
        continue;
      buf[nread] = '\0';
      if (strcmp(buf, "mmap ok") == 0)
        break;
    }
    close(fbctl);
  } else {
    if (!*w && !*h) {
      // 定义缓冲区
      char dispinfo_buf[50] = {0};

      // 打开 /proc/dispinfo 文件
      int dispinfo_fd = open("/proc/dispinfo", O_RDONLY);
      printf("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa\n");

      // 读取文件内容
      size_t bytes_read = read(dispinfo_fd, dispinfo_buf, sizeof(dispinfo_buf));

      // 关闭文件描述符
      close(dispinfo_fd);

      // 解析字符串
      if (sscanf(dispinfo_buf, "WIDTH :%d\nHEIGHT:%d\n", w, h) != 2) {
        fprintf(stderr, "Failed to parse dispinfo buffer: %s\n", dispinfo_buf);
        return;
      }
    }
  }
}

void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {}

void NDL_OpenAudio(int freq, int channels, int samples) {}

void NDL_CloseAudio() {}

int NDL_PlayAudio(void *buf, int len) { return 0; }

int NDL_QueryAudio() { return 0; }

int NDL_Init(uint32_t flags) {
  if (getenv("NWM_APP")) {
    evtdev = 3;
  }
  return 0;
}

void NDL_Quit() {
  if (fd_events != -1) {
    close(fd_events);
  }
}
