#include "syscall.h"
#include <stdio.h>

#define STRACE

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1; // 系统调用编号
  a[1] = c->GPR2; // 参数 1
  a[2] = c->GPR3; // 参数 2
  a[3] = c->GPR4; // 参数 3

#ifdef STRACE
  // 打印系统调用信息
  Log("[STRACE] Syscall ID: %x, Arg1: %x, Arg2: %x, Arg3: %x", a[0], a[1],
      a[2], a[3]);
#endif

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
