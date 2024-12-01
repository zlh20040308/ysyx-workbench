#include <fcntl.h>
#include <unistd.h>
#define SDL_malloc malloc
#define SDL_free free
#define SDL_realloc realloc

#define SDL_STBIMAGE_IMPLEMENTATION
#include "SDL_stbimage.h"

SDL_Surface *IMG_Load_RW(SDL_RWops *src, int freesrc) {
  assert(src->type == RW_TYPE_MEM);
  assert(freesrc == 0);
  return NULL;
}
SDL_Surface *IMG_Load(const char *filename) {
  int fd = open(filename, O_RDONLY);
  off_t file_size = lseek(fd, 0, SEEK_END);
  int pos = lseek(fd, 0, SEEK_SET);
  assert(pos == 0);

  char *buf = (char *)malloc(file_size + 1);
  ssize_t bytes_read = read(fd, buf, file_size);

  if (bytes_read != file_size) {
    perror("Error reading from file or incomplete read");
    free(buf);
    close(fd);
    assert(0);
  }
  buf[bytes_read] = '\0';

  SDL_Surface *surface = STBIMG_LoadFromMemory(buf, file_size);
  
  free(buf);
  close(fd);
  return surface;
}

int IMG_isPNG(SDL_RWops *src) { return 0; }

SDL_Surface *IMG_LoadJPG_RW(SDL_RWops *src) { return IMG_Load_RW(src, 0); }

char *IMG_GetError() { return "Navy does not support IMG_GetError()"; }
