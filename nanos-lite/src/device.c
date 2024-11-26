#include <common.h>

#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
#define MULTIPROGRAM_YIELD() yield()
#else
#define MULTIPROGRAM_YIELD()
#endif

#define NAME(key) [AM_KEY_##key] = #key,

static const char *keyname[256]
    __attribute__((used)) = {[AM_KEY_NONE] = "NONE", AM_KEYS(NAME)};

size_t serial_write(const void *buf, size_t offset, size_t len) {
  const char *str_ptr = (const char *)buf;
  while (len--) {
    putch(*str_ptr++);
  }
  return len;
}

// size_t events_read(void *buf, size_t offset, size_t len) {
//   AM_INPUT_KEYBRD_T ev = io_read(AM_INPUT_KEYBRD);
//   if (ev.keycode == AM_KEY_NONE)
//     return 0;
//   buf[0] = 'k';
//   if (ev.keydown) {
//     buf[1] = 'd';
//   } else {
//     buf[1] = 'u';
//   }
//   buf[2] = ' ';
//   *(buf + 3) = keyname[ev.keycode];
//   // printf("Got  (kbd): %s (%d) %s\n", names[ev.keycode], ev.keycode,
//   //        ev.keydown ? "DOWN" : "UP");
//   return strlen(keyname[ev.keycode]) + 3;
// }

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

size_t dispinfo_read(void *buf, size_t offset, size_t len) { return 0; }

size_t fb_write(const void *buf, size_t offset, size_t len) { return 0; }

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
