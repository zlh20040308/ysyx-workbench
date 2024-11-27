#include <common.h>

#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
#define MULTIPROGRAM_YIELD() yield()
#else
#define MULTIPROGRAM_YIELD()
#endif

#define NAME(key) [AM_KEY_##key] = #key,

static const char *keyname[256]
    __attribute__((used)) = {[AM_KEY_NONE] = "NONE", AM_KEYS(NAME)};

extern size_t screen_w;
extern size_t screen_h;

size_t serial_write(const void *buf, size_t offset, size_t len) {
  const char *str_ptr = (const char *)buf;
  while (len--) {
    putch(*str_ptr++);
  }
  return len;
}

size_t events_read(void *buf, size_t offset, size_t len) {
  AM_INPUT_KEYBRD_T ev = io_read(AM_INPUT_KEYBRD);

  if (ev.keycode == AM_KEY_NONE) {
    return 0;
  }

  // 确保 buf 有足够的空间
  if (len < 4) {
    return 0; // 缓冲区太小
  }

  // 构建事件字符串
  ((char *)buf)[0] = 'k';
  ((char *)buf)[1] = ev.keydown ? 'd' : 'u';
  ((char *)buf)[2] = ' ';

  const char *key_str = keyname[ev.keycode];
  size_t key_len = strlen(key_str);

  // 检查 buf 是否有足够的空间
  if (len < 3 + key_len) {
    return 0; // 缓冲区太小
  }

  // 复制按键名称
  memcpy((char *)buf + 3, key_str, key_len);

  // 添加换行符
  ((char *)buf)[3 + key_len] = '\n';

  // 返回事件字符串的长度
  return 3 + key_len;
}

size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  return sprintf(buf, "WIDTH :%d\nHEIGHT:%d\n", screen_w, screen_h);
}

size_t fb_write(const void *buf, size_t offset, size_t len) {
  // Calculate the starting point (x1, y1) and ending point (x2, y2)
  Log("offset = 0x%8x, len = %d", offset, len);
  size_t x1 = offset % screen_w;
  size_t y1 = offset / screen_w;

  size_t x2 = (offset + len) % screen_w;
  size_t y2 = (offset + len) / screen_w;

  // Calculate the number of middle rows
  size_t mid_rows_num = y2 - y1 - 1;

  // First segment: from (x1, y1) to (screen_w - 1, y1)
  size_t first_row_len = screen_w - x1;
  if (len <= first_row_len) {
    // If len is less than or equal to screen_w - x1, only write the first
    // segment
    io_write(AM_GPU_FBDRAW, x1, y1, buf, len, 1, true);
  } else {
    // Write the first segment
    io_write(AM_GPU_FBDRAW, x1, y1, buf, first_row_len, 1, false);

    // Middle segment: from (0, y1 + 1) to (screen_w - 1, y2 - 1)
    if (mid_rows_num > 0) {
      io_write(AM_GPU_FBDRAW, 0, y1 + 1, (const char *)buf + first_row_len,
               screen_w, mid_rows_num, false);
    }

    // Last segment: from (0, y2) to (x2, y2)
    size_t last_row_len = x2 + 1; // Length including x2
    io_write(AM_GPU_FBDRAW, 0, y2,
             (const char *)buf + first_row_len + screen_w * mid_rows_num,
             last_row_len, 1, true);
  }

  return len;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
