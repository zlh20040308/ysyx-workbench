#include "syscall.h"
#include <stdio.h>
void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;

  switch (a[0]) {
  case SYS_exit:
    halt(c->GPR2);
    break;
  case SYS_yield:
    yield();
    c->GPR2 = 0;
    break;
  case SYS_write:
    if (c->GPR2 == 1) {
      char *str_ptr = (char *)(c->GPR3);
      int len = c->GPR4;
      while (len--) {
        putch(*str_ptr++);
      }
    }
    break;
  case SYS_brk:
    break;
  default:
    panic("Unhandled syscall ID = %d", a[0]);
  }
}