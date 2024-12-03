#include <am.h>
#include <klib-macros.h>
#include <klib.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

#define BUFFER_SIZE 4096
static char buf[BUFFER_SIZE];

static void write_char(char *out, size_t *pos, size_t n, char c, size_t *count);
static void write_string(char *out, size_t *pos, size_t n, const char *str, size_t *count);
static void write_signed_decimal(char *out, size_t *pos, size_t n, int val, size_t *count);
static void write_hexadecimal(char *out, size_t *pos, size_t n, unsigned int val, size_t *count);


int printf(const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  int ret = vsnprintf(buf, BUFFER_SIZE, fmt, ap);
  va_end(ap);
  putstr(buf);
  return ret;
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  int res = 0;
  res = vsnprintf(out, -1, fmt, ap);
  return res;
}

int sprintf(char *out, const char *fmt, ...) {
  int res = 0;
  va_list ap;
  va_start(ap, fmt);
  res = vsprintf(out, fmt, ap);
  va_end(ap);
  return res;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  int res = 0;
  va_list ap;
  va_start(ap, fmt);
  res = vsnprintf(out, n, fmt, ap);
  va_end(ap);
  return res;
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  size_t pos = 0, count = 0;
  int format = 0;

  while (*fmt) {
    if (format) {
      switch (*fmt) {
        case 'c': { // %c
          write_char(out, &pos, n, (char)va_arg(ap, int), &count);
          break;
        }
        case 's': { // %s
          write_string(out, &pos, n, va_arg(ap, const char *), &count);
          break;
        }
        case 'd': { // %d
          write_signed_decimal(out, &pos, n, va_arg(ap, int), &count);
          break;
        }
        case 'x': { // %x
          write_hexadecimal(out, &pos, n, va_arg(ap, unsigned int), &count);
          break;
        }
        case 'p': { // %p
          write_string(out, &pos, n, "0x", &count);
          write_hexadecimal(out, &pos, n, (uintptr_t)va_arg(ap, void *), &count);
          break;
        }
        default: { // unknown
          write_char(out, &pos, n, *fmt, &count);
          break;
        }
      }
      format = 0;
    } else if (*fmt == '%') {
      format = 1;
    } else {
      write_char(out, &pos, n, *fmt, &count);
    }
    fmt++;
  }

  if (pos < n) {
    out[pos] = '\0'; 
  } else if (n > 0) {
    out[n - 1] = '\0'; 
  }
  return count;
}

static void write_char(char *out, size_t *pos, size_t n, char c, size_t *count) {
  if (*pos < n) {
    out[(*pos)++] = c;
  }
  (*count)++;
}

static void write_string(char *out, size_t *pos, size_t n, const char *str, size_t *count) {
  while (*str) {
    write_char(out, pos, n, *str++, count);
  }
}

static void write_signed_decimal(char *out, size_t *pos, size_t n, int val, size_t *count) {
  if (val < 0) {
    write_char(out, pos, n, '-', count);
    val = -val;
  }
  char buffer[16];
  int i = 0;
  do {
    buffer[i++] = '0' + val % 10;
    val /= 10;
  } while (val > 0);

  while (i--) {
    write_char(out, pos, n, buffer[i], count);
  }
}

static void write_hexadecimal(char *out, size_t *pos, size_t n, unsigned int val, size_t *count) {
  const char *hex_digits = "0123456789abcdef";
  char buffer[16];
  int i = 0;

  if (val == 0) {
    write_char(out, pos, n, '0', count);
    return;
  }

  while (val > 0) {
    buffer[i++] = hex_digits[val % 16];
    val /= 16;
  }

  while (i--) {
    write_char(out, pos, n, buffer[i], count);
  }
}


#endif
