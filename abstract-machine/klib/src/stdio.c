#include <am.h>
#include <klib-macros.h>
#include <klib.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

#define BUFFER_SIZE 4096
static char buf[BUFFER_SIZE];

// Helper function to convert an integer to hexadecimal string
void itohex(uintptr_t value, char *buffer, size_t buffer_size) {
  const char *hex_digits = "0123456789abcdef";
  int index = buffer_size - 1;
  buffer[index--] = '\0';

  // Convert the value to hex and store it in reverse order
  do {
    buffer[index--] = hex_digits[value & 0xf];
    value >>= 4;
  } while (value != 0 && index > 0);

  // If there's room, prepend "0x"
  if (index >= 1) {
    buffer[index--] = 'x';
    buffer[index] = '0';
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

// int vsprintf(char *out, const char *fmt, va_list ap) {
//   int format = 0;
//   int longarg = 0;
//   size_t pos = 0;
//   for (; *fmt; fmt++) {
//     if (format) {
//       switch (*fmt) {
//       case '%': {
//         out[pos++] = '%';
//         longarg = 0;
//         format = 0;
//         break;
//       }
//       case 'l': {
//         ++longarg;
//         break;
//       }
//       case 'p': {
//         ++longarg;
//         out[pos++] = '0';
//         out[pos++] = 'x';
//       }
//       case 'x': {
//         long num = longarg ? va_arg(ap, long) : va_arg(ap, int);
//         int hex_digits = 2 * (longarg ? sizeof(long) : sizeof(int)) - 1;
//         for (int i = hex_digits; i >= 0; i--) {
//           int d = (num >> (4 * i)) & 0xF;
//           out[pos] = (d < 10 ? '0' + d : 'a' + d - 10);
//           pos++;
//         }
//         longarg = 0;
//         format = 0;
//         break;
//       }
//       case 'd': {
//         long num = longarg ? va_arg(ap, long) : va_arg(ap, int);
//         if (num < 0) {
//           num = -num;
//           out[pos] = '-';
//           pos++;
//         }
//         long digits = 1;
//         for (long nn = num; nn /= 10; digits++)
//           ;
//         for (int i = digits - 1; i >= 0; i--) {
//           out[pos + i] = '0' + (num % 10);
//           num /= 10;
//         }
//         pos += digits;
//         longarg = 0;
//         format = 0;
//         break;
//       }
//       case 's': {
//         const char *s2 = va_arg(ap, const char *);
//         while (*s2) {
//           out[pos++] = *s2;
//           s2++;
//         }
//         longarg = 0;
//         format = 0;
//         break;
//       }
//       case 'c': {
//         out[pos++] = (char)va_arg(ap, int);
//         longarg = 0;
//         format = 0;
//         break;
//       }
//       default:
//         break;
//       }
//     } else if (*fmt == '%') {
//       format = 1;
//     } else {
//       out[pos++] = *fmt;
//     }
//   }
//   out[pos++] = '\0';
//   return pos;
// }

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
      case 'p': { // New case for pointer
        void *ptr = va_arg(ap, void *);
        char ptr_str[2 * sizeof(void *) * 2 +
                    3]; // Enough space for "0x" + hex + null
        itohex((uintptr_t)ptr, ptr_str, sizeof(ptr_str));
        size_t len = strlen(ptr_str);
        for (size_t i = 0; i < len && pos < n; i++) {
          out[pos++] = ptr_str[i];
        }
        count += len;
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
