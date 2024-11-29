#include <NDL.h>
#include <assert.h>
#include <sdl-video.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern int screen_w;
extern int screen_h;
extern int canvas_w;
extern int canvas_h;

void SDL_BlitSurface(SDL_Surface *src, SDL_Rect *srcrect, SDL_Surface *dst,
                     SDL_Rect *dstrect) {
  assert(src && dst);
  assert(src->format->BitsPerPixel == dst->format->BitsPerPixel);

  // 计算源和目标区域
  int src_x = srcrect ? srcrect->x : 0;
  int src_y = srcrect ? srcrect->y : 0;
  int dst_x = dstrect ? dstrect->x : 0;
  int dst_y = dstrect ? dstrect->y : 0;
  int width = srcrect ? srcrect->w : src->w;
  int height = srcrect ? srcrect->h : src->h;

  // 确保源和目标区域都在有效范围内
  if (src_x + width > src->w || src_y + height > src->h ||
      dst_x + width > dst->w || dst_y + height > dst->h) {
    fprintf(stderr, "Blit out of bounds\n");
    return;
  }

  // 复制像素数据
  for (int y = 0; y < height; ++y) {
    switch (src->format->BytesPerPixel) {
    case 1: // 8-bit paletted mode
      memcpy((uint8_t *)dst->pixels + (dst_y + y) * dst->pitch + dst_x,
             (uint8_t *)src->pixels + (src_y + y) * src->pitch + src_x,
             width * sizeof(uint8_t));
      break;
    case 2: // 16-bit mode
      memcpy((uint16_t *)dst->pixels + (dst_y + y) * (dst->pitch / 2) + dst_x,
             (uint16_t *)src->pixels + (src_y + y) * (src->pitch / 2) + src_x,
             width * sizeof(uint16_t));
      break;
    case 3: // 24-bit mode
      // 24-bit mode is not directly supported by SDL, but we can handle it
      // manually
      uint8_t *src_pixel =
          (uint8_t *)src->pixels + (src_y + y) * src->pitch + src_x * 3;
      uint8_t *dst_pixel =
          (uint8_t *)dst->pixels + (dst_y + y) * dst->pitch + dst_x * 3;
      for (int x = 0; x < width; ++x) {
        dst_pixel[0] = src_pixel[0]; // Blue
        dst_pixel[1] = src_pixel[1]; // Green
        dst_pixel[2] = src_pixel[2]; // Red
        src_pixel += 3;
        dst_pixel += 3;
      }
      break;
    case 4: // 32-bit mode
      memcpy((uint32_t *)dst->pixels + (dst_y + y) * (dst->pitch / 4) + dst_x,
             (uint32_t *)src->pixels + (src_y + y) * (src->pitch / 4) + src_x,
             width * sizeof(uint32_t));
      break;
    default:
      fprintf(stderr, "Unsupported pixel format: %d bytes per pixel\n",
              src->format->BytesPerPixel);
    }
  }
}

// SDL_FillRect 函数
void SDL_FillRect(SDL_Surface *dst, SDL_Rect *dstrect, uint32_t color) {
  assert(dst);
  printf("SDL_FillRect\n");

  // 计算目标区域
  int x = dstrect ? dstrect->x : 0;
  int y = dstrect ? dstrect->y : 0;
  int width = dstrect ? dstrect->w : dst->w;
  int height = dstrect ? dstrect->h : dst->h;

  // 确保目标区域在有效范围内
  if (x + width > dst->w || y + height > dst->h) {
    fprintf(stderr, "Fill out of bounds\n");
    return;
  }

  // 填充矩形区域
  for (int i = 0; i < height; ++i) {
    for (int j = 0; j < width; ++j) {
      switch (dst->format->BytesPerPixel) {
      case 1: // 8-bit paletted mode
        ((uint8_t *)dst->pixels)[(y + i) * dst->pitch + (x + j)] =
            (uint8_t)color;
        break;
      case 2: // 16-bit mode
        ((uint16_t *)dst->pixels)[(y + i) * (dst->pitch / 2) + (x + j)] =
            (uint16_t)color;
        break;
      case 3: // 24-bit mode
        // 24-bit mode is not directly supported by SDL, but we can handle it
        // manually
        uint8_t *pixel =
            (uint8_t *)dst->pixels + (y + i) * dst->pitch + (x + j) * 3;
        pixel[0] = (color & 0x0000FF);       // Blue
        pixel[1] = (color & 0x00FF00) >> 8;  // Green
        pixel[2] = (color & 0xFF0000) >> 16; // Red
        break;
      case 4: // 32-bit mode
        ((uint32_t *)dst->pixels)[(y + i) * (dst->pitch / 4) + (x + j)] = color;
        break;
      default:
        fprintf(stderr, "Unsupported pixel format: %d bytes per pixel\n",
                dst->format->BytesPerPixel);
      }
    }
  }
}

// SDL_UpdateRect 函数
void SDL_UpdateRect(SDL_Surface *s, int x, int y, int w, int h) {
  // 更新屏幕上的矩形区域
  // printf("x = %d, y = %d, w = %d, h = %d\n", x, y, w, h);

  if ((x | y | w | h) == 0) {
    w = canvas_w;
    h = canvas_h;
  }
  // printf("x = %d, y = %d, w = %d, h = %d\n", x, y, w, h);
  // printf("BytesPerPixel = %d\n", s->format->BytesPerPixel);
  NDL_DrawRect((uint32_t *)(s->pixels + y * s->w + x), x, y, w, h);
}

// APIs below are already implemented.

static inline int maskToShift(uint32_t mask) {
  switch (mask) {
  case 0x000000ff:
    return 0;
  case 0x0000ff00:
    return 8;
  case 0x00ff0000:
    return 16;
  case 0xff000000:
    return 24;
  case 0x00000000:
    return 24; // hack
  default:
    assert(0);
  }
}

SDL_Surface *SDL_CreateRGBSurface(uint32_t flags, int width, int height,
                                  int depth, uint32_t Rmask, uint32_t Gmask,
                                  uint32_t Bmask, uint32_t Amask) {
  assert(depth == 8 || depth == 32);
  SDL_Surface *s = malloc(sizeof(SDL_Surface));
  assert(s);
  s->flags = flags;
  s->format = malloc(sizeof(SDL_PixelFormat));
  assert(s->format);
  if (depth == 8) {
    s->format->palette = malloc(sizeof(SDL_Palette));
    assert(s->format->palette);
    s->format->palette->colors = malloc(sizeof(SDL_Color) * 256);
    assert(s->format->palette->colors);
    memset(s->format->palette->colors, 0, sizeof(SDL_Color) * 256);
    s->format->palette->ncolors = 256;
  } else {
    s->format->palette = NULL;
    s->format->Rmask = Rmask;
    s->format->Rshift = maskToShift(Rmask);
    s->format->Rloss = 0;
    s->format->Gmask = Gmask;
    s->format->Gshift = maskToShift(Gmask);
    s->format->Gloss = 0;
    s->format->Bmask = Bmask;
    s->format->Bshift = maskToShift(Bmask);
    s->format->Bloss = 0;
    s->format->Amask = Amask;
    s->format->Ashift = maskToShift(Amask);
    s->format->Aloss = 0;
  }

  s->format->BitsPerPixel = depth;
  s->format->BytesPerPixel = depth / 8;

  s->w = width;
  s->h = height;
  s->pitch = width * depth / 8;
  assert(s->pitch == width * s->format->BytesPerPixel);

  if (!(flags & SDL_PREALLOC)) {
    s->pixels = malloc(s->pitch * height);
    assert(s->pixels);
  }

  return s;
}

SDL_Surface *SDL_CreateRGBSurfaceFrom(void *pixels, int width, int height,
                                      int depth, int pitch, uint32_t Rmask,
                                      uint32_t Gmask, uint32_t Bmask,
                                      uint32_t Amask) {
  SDL_Surface *s = SDL_CreateRGBSurface(SDL_PREALLOC, width, height, depth,
                                        Rmask, Gmask, Bmask, Amask);
  assert(pitch == s->pitch);
  s->pixels = pixels;
  return s;
}

void SDL_FreeSurface(SDL_Surface *s) {
  if (s != NULL) {
    if (s->format != NULL) {
      if (s->format->palette != NULL) {
        if (s->format->palette->colors != NULL)
          free(s->format->palette->colors);
        free(s->format->palette);
      }
      free(s->format);
    }
    if (s->pixels != NULL && !(s->flags & SDL_PREALLOC))
      free(s->pixels);
    free(s);
  }
}

SDL_Surface *SDL_SetVideoMode(int width, int height, int bpp, uint32_t flags) {
  if (flags & SDL_HWSURFACE)
    NDL_OpenCanvas(&width, &height);
  while (1) {
  
  }
  // return SDL_CreateRGBSurface(flags, width, height, bpp, DEFAULT_RMASK,
  //                             DEFAULT_GMASK, DEFAULT_BMASK, DEFAULT_AMASK);
  SDL_CreateRGBSurface(flags, width, height, bpp, DEFAULT_RMASK, DEFAULT_GMASK,
                       DEFAULT_BMASK, DEFAULT_AMASK);

  return NULL;
}

void SDL_SoftStretch(SDL_Surface *src, SDL_Rect *srcrect, SDL_Surface *dst,
                     SDL_Rect *dstrect) {
  assert(src && dst);
  assert(dst->format->BitsPerPixel == src->format->BitsPerPixel);
  assert(dst->format->BitsPerPixel == 8);

  int x = (srcrect == NULL ? 0 : srcrect->x);
  int y = (srcrect == NULL ? 0 : srcrect->y);
  int w = (srcrect == NULL ? src->w : srcrect->w);
  int h = (srcrect == NULL ? src->h : srcrect->h);

  assert(dstrect);
  if (w == dstrect->w && h == dstrect->h) {
    /* The source rectangle and the destination rectangle
     * are of the same size. If that is the case, there
     * is no need to stretch, just copy. */
    SDL_Rect rect;
    rect.x = x;
    rect.y = y;
    rect.w = w;
    rect.h = h;
    SDL_BlitSurface(src, &rect, dst, dstrect);
  } else {
    assert(0);
  }
}

void SDL_SetPalette(SDL_Surface *s, int flags, SDL_Color *colors,
                    int firstcolor, int ncolors) {
  assert(s);
  assert(s->format);
  assert(s->format->palette);
  assert(firstcolor == 0);

  s->format->palette->ncolors = ncolors;
  memcpy(s->format->palette->colors, colors, sizeof(SDL_Color) * ncolors);

  if (s->flags & SDL_HWSURFACE) {
    assert(ncolors == 256);
    for (int i = 0; i < ncolors; i++) {
      uint8_t r = colors[i].r;
      uint8_t g = colors[i].g;
      uint8_t b = colors[i].b;
    }
    SDL_UpdateRect(s, 0, 0, 0, 0);
  }
}

static void ConvertPixelsARGB_ABGR(void *dst, void *src, int len) {
  int i;
  uint8_t(*pdst)[4] = dst;
  uint8_t(*psrc)[4] = src;
  union {
    uint8_t val8[4];
    uint32_t val32;
  } tmp;
  int first = len & ~0xf;
  for (i = 0; i < first; i += 16) {
#define macro(i)                                                               \
  tmp.val32 = *((uint32_t *)psrc[i]);                                          \
  *((uint32_t *)pdst[i]) = tmp.val32;                                          \
  pdst[i][0] = tmp.val8[2];                                                    \
  pdst[i][2] = tmp.val8[0];

    macro(i + 0);
    macro(i + 1);
    macro(i + 2);
    macro(i + 3);
    macro(i + 4);
    macro(i + 5);
    macro(i + 6);
    macro(i + 7);
    macro(i + 8);
    macro(i + 9);
    macro(i + 10);
    macro(i + 11);
    macro(i + 12);
    macro(i + 13);
    macro(i + 14);
    macro(i + 15);
  }

  for (; i < len; i++) {
    macro(i);
  }
}

SDL_Surface *SDL_ConvertSurface(SDL_Surface *src, SDL_PixelFormat *fmt,
                                uint32_t flags) {
  assert(src->format->BitsPerPixel == 32);
  assert(src->w * src->format->BytesPerPixel == src->pitch);
  assert(src->format->BitsPerPixel == fmt->BitsPerPixel);

  SDL_Surface *ret =
      SDL_CreateRGBSurface(flags, src->w, src->h, fmt->BitsPerPixel, fmt->Rmask,
                           fmt->Gmask, fmt->Bmask, fmt->Amask);

  assert(fmt->Gmask == src->format->Gmask);
  assert(fmt->Amask == 0 || src->format->Amask == 0 ||
         (fmt->Amask == src->format->Amask));
  ConvertPixelsARGB_ABGR(ret->pixels, src->pixels, src->w * src->h);

  return ret;
}

uint32_t SDL_MapRGBA(SDL_PixelFormat *fmt, uint8_t r, uint8_t g, uint8_t b,
                     uint8_t a) {
  assert(fmt->BytesPerPixel == 4);
  uint32_t p = (r << fmt->Rshift) | (g << fmt->Gshift) | (b << fmt->Bshift);
  if (fmt->Amask)
    p |= (a << fmt->Ashift);
  return p;
}

int SDL_LockSurface(SDL_Surface *s) { return 0; }

void SDL_UnlockSurface(SDL_Surface *s) {}
