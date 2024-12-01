#include <klib-macros.h>
#include <klib.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  size_t i = 0;
  while (s[i] != '\0')
    ++i;
  return i;
}

char *strcpy(char *dst, const char *src) {
  size_t i = 0;
  for (; (dst[i] = src[i]) != '\0'; i++)
    ;
  return dst;
}

char *strncpy(char *dst, const char *src, size_t n) {
  size_t i = 0;
  for (; src[i] != '\0' && i < n; i++) {
    dst[i] = src[i];
  }
  dst[i++] = '\0';
  for (; i < n; i++) {
    dst[i] = '\0';
  }
  return dst;
}

char *strcat(char *dst, const char *src) {
  size_t dst_len = strlen(dst);
  size_t src_len = strlen(src);
  size_t i = 0;
  for (; i < src_len; i++) {
    dst[dst_len + i] = src[i];
  }
  dst[dst_len + i] = '\0';
  return dst;
}

int strcmp(const char *s1, const char *s2) {
  for (size_t i = 0; s1[i] != '\0' && s2[i] != '\0'; i++) {
    if (s1[i] < s2[i]) {
      return -1;
    }
    if (s1[i] > s2[i]) {
      return 1;
    }
  }
  size_t s1_len = strlen(s1);
  size_t s2_len = strlen(s2);
  if (s1_len < s2_len) {
    return -1;
  }
  if (s1_len > s2_len) {
    return 1;
  }

  return 0;
}

int strncmp(const char *s1, const char *s2, size_t n) {
  for (size_t i = 0; i < n; i++) {
    if (s1[i] < s2[i]) {
      return -1;
    }
    if (s1[i] > s2[i]) {
      return 1;
    }
  }
  return 0;
}

void *memset(void *s, int c, size_t n) {
  unsigned char *p = s;
  while (n--) {
    *p++ = (unsigned char)c;
  }
  return s;
}

void *memmove(void *dst, const void *src, size_t n) {
  unsigned char *d = dst;
  const unsigned char *s = src;

  if (d < s) {
    // 如果 dst 在 src 之前，直接从前往后复制
    for (size_t i = 0; i < n; i++) {
      d[i] = s[i];
    }
  } else {
    // 如果 dst 在 src 之后，反向复制以避免重叠
    for (size_t i = n; i > 0; i--) {
      d[i - 1] = s[i - 1];
    }
  }

  return dst;
}

void *memcpy(void *out, const void *in, size_t n) {
  unsigned char *out_ptr = out;
  const unsigned char *in_ptr = in;

  for (size_t i = 0; i < n; i++) {
    out_ptr[i] = in_ptr[i];
  }
  return out;
}

int memcmp(const void *s1, const void *s2, size_t n) {

  const unsigned char *s1_ptr = s1;
  const unsigned char *s2_ptr = s2;
  for (size_t i = 0; i < n; i++) {
    if (s1_ptr[i] < s2_ptr[i]) {
      return -1;
    }
    if (s1_ptr[i] > s2_ptr[i]) {
      return 1;
    }
  }
  return 0;
}

#endif
