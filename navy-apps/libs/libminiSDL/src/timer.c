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
  return NDL_GetTicks();
}

void SDL_Delay(uint32_t ms) {
  if (ms == 0) {
    return;
  }
  uint32_t start_ticks = SDL_GetTicks();
  while (SDL_GetTicks() - start_ticks <= ms);
}
