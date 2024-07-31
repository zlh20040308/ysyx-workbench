#include <am.h>
#include <klib-macros.h>
#include <klib.h>
#include <stdarg.h>
#define BUFFER_SIZE 1024
static char buf[BUFFER_SIZE];

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  int ret = vsnprintf(buf, BUFFER_SIZE, fmt, ap);
  va_end(ap);
  putstr(buf);
  return ret;
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  int format = 0;
  int longarg = 0;
  size_t pos = 0;
  for (; *fmt; fmt++) {
    if (format) {
      switch (*fmt) {
      case '%': {
        out[pos++] = '%';
        longarg = 0;
        format = 0;
        break;
      }
      case 'l': {
        ++longarg;
        break;
      }
      case 'p': {
        ++longarg;
        out[pos++] = '0';
        out[pos++] = 'x';
      }
      case 'x': {
        long num = longarg ? va_arg(ap, long) : va_arg(ap, int);
        int hexdigits = 2 * (longarg ? sizeof(long) : sizeof(int)) - 1;
        for (int i = hexdigits; i >= 0; i--) {
          int d = (num >> (4 * i)) & 0xF;
          out[pos] = (d < 10 ? '0' + d : 'a' + d - 10);
          pos++;
        }
        longarg = 0;
        format = 0;
        break;
      }
      case 'd': {
        long num = longarg ? va_arg(ap, long) : va_arg(ap, int);
        if (num < 0) {
          num = -num;
          out[pos] = '-';
          pos++;
        }
        long digits = 1;
        for (long nn = num; nn /= 10; digits++)
          ;
        for (int i = digits - 1; i >= 0; i--) {
          out[pos + i] = '0' + (num % 10);
          num /= 10;
        }
        pos += digits;
        longarg = 0;
        format = 0;
        break;
      }
      case 's': {
        const char *s2 = va_arg(ap, const char *);
        while (*s2) {
          out[pos++] = *s2;
          s2++;
        }
        longarg = 0;
        format = 0;
        break;
      }
      case 'c': {
        out[pos++] = (char)va_arg(ap, int);
        longarg = 0;
        format = 0;
        break;
      }
      default:
        break;
      }
    } else if (*fmt == '%') {
      format = 1;
    } else {
      out[pos++] = *fmt;
    }
  }
  out[pos++] = '\0';
  return pos;
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

/*
  %d
  %s
  %c
 */

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  int format = 0;
  size_t pos = 0;
  size_t count = 0;
  for (; *fmt; ++fmt) {
    if (format) {
      switch (*fmt) {
      case 'c': {
        if (pos < n) {
          out[pos++] = (char)va_arg(ap, int);
        }
        ++count;
        format = 0;
        break;
      }
      case 's': {
        const char *s2 = va_arg(ap, const char *);
        while (*s2) {
          if (pos < n) {
            out[pos++] = *s2;
            s2++;
          }
          ++count;
        }
        format = 0;
        break;
      }
      case 'd': {
        int num = va_arg(ap, int);
        if (num < 0) {
          num = -num;
          if (pos < n) {
            out[pos++] = '-';
          }
          ++count;
        }
        long digits = 1;
        for (long nn = num; nn /= 10; digits++)
          ;
        for (int i = digits - 1; i >= 0; i--) {
          if (pos + i < n) {
            out[pos + i] = '0' + (num % 10);
          }
          num /= 10;
        }
        pos += digits;
        count += digits;
        format = 0;
        break;
      }
      default:
        break;
      }
    } else if (*fmt == '%') {
      format = 1;
    } else {
      if (pos < n) {
        out[pos++] = *fmt;
      }
      ++count;
    }
  }

  if (pos < n) {
    out[pos] = '\0';
  }
  out[n - 1] = '\0';
  return count;
}

#endif
