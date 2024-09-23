#include <am.h>
#include <nemu.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)

void __am_gpu_init() {
  // int i;
  // uint32_t screen_size = inl(VGACTL_ADDR);
  // int w = (int)(screen_size >> 16);    // TODO: get the correct width
  // int h = (int)(0x00FF & screen_size); // TODO: get the correct height
  // // volatile uint32_t *fb = (volatile uint32_t *)(uintptr_t)FB_ADDR;
  // volatile uint32_t *fb = (volatile uint32_t *)FB_ADDR;

  // for (i = 0; i < w * h; i++)
  //   fb[i] = i;
  // outl(SYNC_ADDR, 1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  uint32_t screen_size = inl(VGACTL_ADDR);
  *cfg = (AM_GPU_CONFIG_T){.present = true,
                           .has_accel = false,
                           .width = (int)(screen_size >> 16),
                           .height = (int)(0x00FF & screen_size),
                           .vmemsz = (int)(screen_size >> 16) *
                                     (int)(0x00FF & screen_size)};
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
  }
  uint32_t width = inl(VGACTL_ADDR) >> 16;
  volatile uint32_t *fb = (volatile uint32_t *)(uintptr_t)FB_ADDR;
  uint32_t *from = (uint32_t *)(uintptr_t)(ctl->pixels);

  for (int i = 0; i < ctl->h; i++) {
    for (int j = 0; j < ctl->w; j++) {
      fb[width * (i + ctl->y) + ctl->x + j] = from[i * ctl->w + j];
    }
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) { status->ready = true; }
