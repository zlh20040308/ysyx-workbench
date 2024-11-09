#include "syscall.h"
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
    Log("fd = %d", c->GPR2);
    Log("en = %d", c->GPR4);

    break;
  default:
    panic("Unhandled syscall ID = %d", a[0]);
  }
}
