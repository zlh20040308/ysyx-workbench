#include <NDL.h>
#include <assert.h>
#include <sdl-timer.h>
#include <stdio.h>

extern uint32_t init_time;

SDL_TimerID SDL_AddTimer(uint32_t interval, SDL_NewTimerCallback callback,
                         void *param) {
  printf("SDL_AddTimer Unimplement!\n");
  assert(0);
  return NULL;
}

int SDL_RemoveTimer(SDL_TimerID id) {
  printf("SDL_RemoveTimer Unimplement!\n");
  assert(0);
  return 1;
}

uint32_t SDL_GetTicks() {
  // 确保 SDL 已经初始化
  assert(init_time != 0);

  // 获取当前时间
  uint32_t current_time = NDL_GetTicks();

  // 计算自 SDL 初始化以来的毫秒数
  uint32_t elapsed_time = current_time - init_time;

  // 处理可能的溢出情况
  if (current_time < init_time) {
    // 如果当前时间小于初始化时间，说明发生了回绕
    // 这里假设回绕发生在 49.7 天（约 2^32 毫秒）之后
    elapsed_time = (UINT32_MAX - init_time) + current_time + 1;
  }

  return elapsed_time;
}

void SDL_Delay(uint32_t ms) {
  printf("SDL_Delay Unimplement!\n");
  assert(0);
}
