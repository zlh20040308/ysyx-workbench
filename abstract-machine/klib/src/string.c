#include <klib-macros.h>
#include <klib.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  const char *p = s;
  while (*p) ++p;
  return p - s;
}

char *strcpy(char *dst, const char *src) {
  size_t i = 0;
  for (; src[i] != '\0'; i++) {
    dst[i] = src[i];
  }
  dst[i] = '\0';
  return dst;
}

char *strncpy(char *dst, const char *src, size_t n) {
  size_t i = 0;
  for (; i < n && src[i] != '\0'; i++) {
    dst[i] = src[i];
  }
  for (; i < n; i++) {
    dst[i] = '\0';
  }
  return dst;
}


char *strcat(char *dst, const char *src) {
  char *d = dst + strlen(dst);
  while ((*d++ = *src++));
  return dst;
}

int strcmp(const char *s1, const char *s2) {
  while (*s1 && (*s1 == *s2)) {
    ++s1;
    ++s2;
  }
  return *(unsigned char *)s1 - *(unsigned char *)s2;
}

int strncmp(const char *s1, const char *s2, size_t n) {
  while (n && *s1 && (*s1 == *s2)) {
    ++s1;
    ++s2;
    --n;
  }
  return n == 0 ? 0 : (*(unsigned char *)s1 - *(unsigned char *)s2);
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
    while (n--) {
      *d++ = *s++;
    }
  } else {
    d += n;
    s += n;
    while (n--) {
      *--d = *--s;
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
