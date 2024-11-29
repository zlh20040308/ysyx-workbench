#include <assert.h>
#include <fcntl.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#include <unistd.h>

int screen_w = 0, screen_h = 0;
uint32_t init_time = 0;
static int evtdev = -1;
static int fbdev = -1;
int canvas_w = 0, canvas_h = 0;
static int canvas_x, canvas_y;
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
  printf("%s\n", getenv("NWM_APP"));
  if (getenv("NWM_APP")) {
    int fbctl = 4;
    fbdev = 5;
    screen_w = *w;
    screen_h = *h;
    char buf[64];
    while (1) {
    
    }
    int len = sprintf(buf, "%d %d", screen_w, screen_h);
    while (1) {
    
    }
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
    // 定义缓冲区
    char dispinfo_buf[50] = {0};

    // 打开 /proc/dispinfo 文件
    int dispinfo_fd = open("/proc/dispinfo", O_RDONLY);

    // 读取文件内容
    size_t bytes_read = read(dispinfo_fd, dispinfo_buf, sizeof(dispinfo_buf));

    // 关闭文件描述符
    close(dispinfo_fd);

    // 解析字符串
    if (sscanf(dispinfo_buf, "WIDTH :%d\nHEIGHT:%d\n", &screen_w, &screen_h) !=
        2) {
      fprintf(stderr, "Failed to parse dispinfo buffer: %s\n", dispinfo_buf);
      return;
    }
    if (*w == 0 && *h == 0) {
      *w = screen_w;
      *h = screen_h;
    }
    canvas_w = *w;
    canvas_h = *h;
    canvas_x = (screen_w - canvas_w) / 2;
    canvas_y = (screen_h - canvas_h) / 2;
  }
}

void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {
  // 打开 /dev/fb 文件
  int fbdev = open("/dev/fb", O_WRONLY);
  // printf("screen_w = %d, screen_h = %d\n", screen_w, screen_h);
  // printf("canvas_x = %d, canvas_y = %d\n", canvas_x, canvas_y);
  // printf("x = %d, y = %d, w = %d, h = %d\n", x, y, w, h);
  for (int i = 0; i < h; ++i) {
    size_t offset =
        ((x + canvas_x) + (y + canvas_y + i) * screen_w) * sizeof(uint32_t);

    lseek(fbdev, offset, SEEK_SET);

    // printf("offset = %d, n = %d\n", offset, w * sizeof(uint32_t));
    
    write(fbdev, pixels + i * w, w * sizeof(uint32_t));
  }

  // 关闭文件描述符
  close(fbdev);
}

void NDL_OpenAudio(int freq, int channels, int samples) { assert(0); }

void NDL_CloseAudio() { assert(0); }

int NDL_PlayAudio(void *buf, int len) {
  assert(0);
  return 0;
}

int NDL_QueryAudio() {
  assert(0);
  return 0;
}

int NDL_Init(uint32_t flags) {
  if (getenv("NWM_APP")) {
    evtdev = 3;
  }
  init_time = NDL_GetTicks();
  return 0;
}

void NDL_Quit() {
  if (fd_events != -1) {
    close(fd_events);
  }
}
