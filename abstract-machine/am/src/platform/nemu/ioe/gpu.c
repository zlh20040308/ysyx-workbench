#include <am.h>
#include <nemu.h>
#include <stdio.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)
uint32_t screen_size;

void __am_gpu_init() { screen_size = inl(VGACTL_ADDR); }

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  *cfg = (AM_GPU_CONFIG_T){.present = true,
                           .has_accel = false,
                           .width = (int)(screen_size >> 16),
                           .height = (int)(0xFFFF & screen_size),
                           .vmemsz = (int)(screen_size >> 16) *
                                     (int)(0xFFFF & screen_size)};
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
  }
  uint32_t width = screen_size >> 16;
  volatile uint32_t *fb = (volatile uint32_t *)(uintptr_t)FB_ADDR;
  uint32_t *from = (uint32_t *)(uintptr_t)(ctl->pixels);
  printf("x = %d, y = %d, h = %d, w = %d\n", ctl->x, ctl->y, ctl->h, ctl->w);

  for (int i = 0; i < ctl->h; i++) {
    for (int j = 0; j < ctl->w; j++) {
      fb[width * (i + ctl->y) + ctl->x + j] = from[i * ctl->w + j];
    }
    while (1) {
    }
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) { status->ready = true; }
