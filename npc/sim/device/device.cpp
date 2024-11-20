
#include <SDL2/SDL.h>
#include <device.h>
#include <verilator-sim.h>

void init_i8042();
void init_serial();
void init_timer();
void init_vga();

void init_map();

void send_key(uint8_t scancode, bool is_keydown);
void vga_update_screen();

void sdl_clear_event_queue() {
  SDL_Event event;
  while (SDL_PollEvent(&event))
    ;
  return;
}

void device_update() {
  static uint64_t last = 0;
  word_t now = get_time();
  if (now - last < (1000000 / 60)) {
    return;
  }
  last = now;

#ifdef CONFIG_VGA_CTL_MMIO
  vga_update_screen();
#endif

  SDL_Event event;
  while (SDL_PollEvent(&event)) {
    switch (event.type) {
    case SDL_QUIT:
      npc_state.state = NPC_QUIT;
      break;
    // If a key was pressed
    case SDL_KEYDOWN:
    case SDL_KEYUP: {
      uint8_t k = event.key.keysym.scancode;
      bool is_keydown = (event.key.type == SDL_KEYDOWN);
      send_key(k, is_keydown);
      break;
    }
    default:
      break;
    }
  }
}

void init_device() {
  Log("[device] initializing devices");

  init_map();

#ifdef CONFIG_I8042_DATA_MMIO
  init_i8042();
#endif

#ifdef CONFIG_SERIAL_MMIO
  init_serial();
#endif

#ifdef CONFIG_RTC_MMIO
  init_timer();
#endif

#ifdef CONFIG_VGA_CTL_MMIO
  init_vga();
#endif

  Log("[device] device initialize finished");

  return;
}