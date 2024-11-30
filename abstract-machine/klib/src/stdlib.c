#include <am.h>
#include <stddef.h>

#include <klib-macros.h>
#include <klib.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
static unsigned long int next = 1;

int rand(void) {
  // RAND_MAX assumed to be 32767
  next = next * 1103515245 + 12345;
  return (unsigned int)(next / 65536) % 32768;
}

void srand(unsigned int seed) { next = seed; }

int abs(int x) { return (x < 0 ? -x : x); }

int atoi(const char *nptr) {
  int x = 0;
  while (*nptr == ' ') {
    nptr++;
  }
  while (*nptr >= '0' && *nptr <= '9') {
    x = x * 10 + *nptr - '0';
    nptr++;
  }
  return x;
}

void *malloc(size_t size) {
  // On native, malloc() will be called during initializaion of C runtime.
  // Therefore do not call panic() here, else it will yield a dead recursion:
  //   panic() -> putchar() -> (glibc) -> malloc() -> panic()

#if !(defined(__ISA_NATIVE__) && defined(__NATIVE_USE_KLIB__))
  if (!size) {
    return NULL;
  }
  static void *p_addr = NULL;
  if (p_addr == NULL) {
    p_addr = heap.start;
  }
  if (p_addr + size < heap.end) {
    void *temp = p_addr;
    p_addr = (void *)ROUNDUP(p_addr + size, 4);
    return temp;
  } else {
    return NULL;
  }
#endif
}

void free(void *ptr) {}

#endif
