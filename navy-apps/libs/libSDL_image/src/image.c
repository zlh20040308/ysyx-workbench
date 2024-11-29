#define SDL_malloc malloc
#define SDL_free free
#define SDL_realloc realloc

#define SDL_STBIMAGE_IMPLEMENTATION
#include "SDL_stbimage.h"
#include <fcntl.h>  // 包含 open 和 close 函数的声明
#include <unistd.h> // 包含 lseek 和 read 函数的声明

SDL_Surface *IMG_Load_RW(SDL_RWops *src, int freesrc) {
  assert(src->type == RW_TYPE_MEM);
  assert(freesrc == 0);
  return NULL;
}

SDL_Surface *IMG_Load(const char *filename) {
  // 打开文件
  int fd = open(filename, O_RDONLY);

  // 获取文件大小
  off_t size = lseek(fd, 0, SEEK_END); // 将文件指针移动到文件末尾

  // 重新定位文件指针到文件开头
  lseek(fd, 0, SEEK_SET);

  // 申请内存
  unsigned char *buf = (unsigned char *)malloc(size);
  if (buf == NULL) {
    perror("Failed to allocate memory");
    close(fd);
    return NULL;
  }

  // 读取文件内容到内存
  ssize_t bytesRead = read(fd, buf, size);
  if (bytesRead != size) {
    perror("Failed to read file");
    free(buf);
    close(fd);
    return NULL;
  }

  // 关闭文件
  close(fd);

  // 使用 stb_image 解码图像
  SDL_Surface *surface = STBIMG_LoadFromMemory(buf, size);

  // 释放申请的内存
  free(buf);

  return surface;
}

int IMG_isPNG(SDL_RWops *src) { return 0; }

SDL_Surface *IMG_LoadJPG_RW(SDL_RWops *src) { return IMG_Load_RW(src, 0); }

char *IMG_GetError() { return "Navy does not support IMG_GetError()"; }
