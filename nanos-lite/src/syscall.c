#include "syscall.h"
#include <stdio.h>

#define STRACE

const char *_syscall_names[] = {
  "SYS_exit",
  "SYS_yield",
  "SYS_open",
  "SYS_read",
  "SYS_write",
  "SYS_kill",
  "SYS_getpid",
  "SYS_close",
  "SYS_lseek",
  "SYS_brk",
  "SYS_fstat",
  "SYS_time",
  "SYS_signal",
  "SYS_execve",
  "SYS_fork",
  "SYS_link",
  "SYS_unlink",
  "SYS_wait",
  "SYS_times",
  "SYS_gettimeofday"
};

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1; // 系统调用编号
  a[1] = c->GPR2; // 参数 1
  a[2] = c->GPR3; // 参数 2
  a[3] = c->GPR4; // 参数 3

#ifdef STRACE
  // 打印系统调用信息
  if (a[0] >= 0 && a[0] < sizeof(_syscall_names) / sizeof(_syscall_names[0])) {
    printf("System call: %s\n", _syscall_names[a[0]]);
  } else {
    printf("System call: Unknown (ID: %d)\n", a[0]);
  }
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
