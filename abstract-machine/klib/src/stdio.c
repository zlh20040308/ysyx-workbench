#include <am.h>
#include <klib-macros.h>
#include <klib.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

#define BUFFER_SIZE 4096
static char buf[BUFFER_SIZE];

static void write_hex(char *out, size_t *pos, size_t n, uintptr_t val) {
  const char *hex_digits = "0123456789abcdef";
  if (val == 0) {
    if (*pos < n)
      out[(*pos)++] = '0';
    return;
  }

  while (val) {
    if (*pos < n)
      out[(*pos)++] = hex_digits[val % 16];
    val /= 16;
  }
}

int printf(const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  int ret = vsnprintf(buf, BUFFER_SIZE, fmt, ap);
  va_end(ap);
  putstr(buf);
  return ret;
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  return vsnprintf(out, -1, fmt, ap);
}

int sprintf(char *out, const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  int res = vsprintf(out, fmt, ap);
  va_end(ap);
  return res;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  int res = vsnprintf(out, n, fmt, ap);
  va_end(ap);
  return res;
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  int format = 0;
  size_t pos = 0;

  for (; *fmt; ++fmt) {
    if (format) {
      switch (*fmt) {
      case 'c': {
        if (pos < n) {
          out[pos++] = (char)va_arg(ap, int);
        }
        format = 0;
        break;
      }
      case 's': {
        const char *s2 = va_arg(ap, const char *);
        while (*s2 && pos < n) {
          out[pos++] = *s2++;
        }
        format = 0;
        break;
      }
      case 'd': {
        int num = va_arg(ap, int);
        if (num < 0) {
          if (pos < n) {
            out[pos++] = '-';
          }
          num = -num;
        }
        long digits = 1;
        for (long nn = num; nn /= 10; digits++) {
        }
        for (int i = digits - 1; i >= 0; i--) {
          if (pos + i < n) {
            out[pos + i] = '0' + (num % 10);
          }
          num /= 10;
        }
        pos += digits;
        format = 0;
        break;
      }
      case 'x': { // Handle %x
        unsigned int num = va_arg(ap, unsigned int);
        write_hex(out, &pos, n, num);
        format = 0;
        break;
      }
      case 'p': { // Handle %p
        uintptr_t ptr_val = (uintptr_t)va_arg(ap, void *);
        if (pos < n) {
          out[pos++] = '0';
        }
        if (pos < n) {
          out[pos++] = 'x';
        }
        write_hex(out, &pos, n, ptr_val);
        format = 0;
        break;
      }
      default:
        if (pos < n) {
          out[pos++] = *fmt;
        }
        format = 0;
        break;
      }
    } else if (*fmt == '%') {
      format = 1;
    } else {
      if (pos < n) {
        out[pos++] = *fmt;
      }
    }
  }

  if (pos < n) {
    out[pos] = '\0';
  } else {
    out[n - 1] = '\0';
  }
  return pos;
}

#endif