#include <NDL.h>
#include <SDL.h>
#include <assert.h>
#include <stdio.h>
#include <string.h>
#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))
#define keyname(k) #k,

static const char *keyname[] = {"NONE", _KEYS(keyname)};

int SDL_PushEvent(SDL_Event *event) {
  printf("SDL_PushEvent Unimplement!\n");
  assert(0);
  return 0;
}

int SDL_PollEvent(SDL_Event *event) {
    char buf[30] = {0};

  if (NDL_PollEvent(buf, sizeof(buf)) == 0) {
    return 0;
  }
  printf("%s\n", buf);
  for (size_t i = 0; i < 30; ++i) {
    if (buf[i] == '\n') {
      buf[i] = '\0';
      break;
    }
  }

  event->type = buf[1] == 'd' ? SDL_KEYDOWN : SDL_KEYUP;
  char *key = buf + 3;
  printf("key = %s\n", key);
  bool success = false;
  size_t index;
  for (index = 0; index < ARRAY_SIZE(keyname); ++index) {
    if (strcmp(key, keyname[index]) == 0) {
      success = true;
      break;
    }
  }
  if (!success) {
    printf("SDL_WaitEvent receive wrong event!\n");
    assert(0);
  }
  event->key.keysym.sym = index;

  return 1;
}

int SDL_WaitEvent(SDL_Event *event) {
  char buf[30] = {0};

  while (NDL_PollEvent(buf, sizeof(buf)) == 0) {
  }
  printf("%s\n", buf);
  for (size_t i = 0; i < 30; ++i) {
    if (buf[i] == '\n') {
      buf[i] = '\0';
      break;
    }
  }

  event->type = buf[1] == 'd' ? SDL_KEYDOWN : SDL_KEYUP;
  char *key = buf + 3;
  printf("key = %s\n", key);
  bool success = false;
  size_t index;
  for (index = 0; index < ARRAY_SIZE(keyname); ++index) {
    if (strcmp(key, keyname[index]) == 0) {
      success = true;
      break;
    }
  }
  if (!success) {
    printf("SDL_WaitEvent receive wrong event!\n");
    assert(0);
  }
  event->key.keysym.sym = index;

  return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  printf("SDL_PeepEvents Unimplement!\n");
  assert(0);
  return 0;
}

uint8_t *SDL_GetKeyState(int *numkeys) {
  printf("SDL_GetKeyState Unimplement!\n");
  assert(0);
  return NULL;
}
