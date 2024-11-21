#include "syscall.h"
#include <stdio.h>

#define STRACE

const char *_syscall_names[] = {
    "SYS_exit",  "SYS_yield",  "SYS_open",   "SYS_read",   "SYS_write",
    "SYS_kill",  "SYS_getpid", "SYS_close",  "SYS_lseek",  "SYS_brk",
    "SYS_fstat", "SYS_time",   "SYS_signal", "SYS_execve", "SYS_fork",
    "SYS_link",  "SYS_unlink", "SYS_wait",   "SYS_times",  "SYS_gettimeofday"};

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

  // 打印系统调用参数
  printf("Arguments: ");
  switch (a[0]) {
  case SYS_exit:
    printf("exit(%d)\n", c->GPR2);
    break;
  case SYS_yield:
    printf("yield()\n");
    break;
  case SYS_write:
    printf("write(fd=%d, buf=%p, count=%d)\n", c->GPR1, (void *)c->GPR3,
           c->GPR4);
    break;
  case SYS_open:
    printf("open(path=%p, flags=%d, mode=%d)\n", (void *)c->GPR1, c->GPR2,
           c->GPR3);
    break;
  case SYS_read:
    printf("read(fd=%d, buf=%p, count=%d)\n", c->GPR1, (void *)c->GPR2,
           c->GPR3);
    break;
  case SYS_kill:
    printf("kill(pid=%d, sig=%d)\n", c->GPR1, c->GPR2);
    break;
  case SYS_getpid:
    printf("getpid()\n");
    break;
  case SYS_close:
    printf("close(fd=%d)\n", c->GPR1);
    break;
  case SYS_lseek:
    printf("lseek(fd=%d, offset=%d, whence=%d)\n", c->GPR1, c->GPR2, c->GPR3);
    break;
  case SYS_brk:
    printf("brk(addr=%p)\n", (void *)c->GPR1);
    break;
  case SYS_fstat:
    printf("fstat(fd=%d, stat=%p)\n", c->GPR1, (void *)c->GPR2);
    break;
  case SYS_time:
    printf("time(tloc=%p)\n", (void *)c->GPR1);
    break;
  case SYS_signal:
    printf("signal(signum=%d, handler=%p)\n", c->GPR1, (void *)c->GPR2);
    break;
  case SYS_execve:
    printf("execve(path=%p, argv=%p, envp=%p)\n", (void *)c->GPR1,
           (void *)c->GPR2, (void *)c->GPR3);
    break;
  case SYS_fork:
    printf("fork()\n");
    break;
  case SYS_link:
    printf("link(oldpath=%p, newpath=%p)\n", (void *)c->GPR1, (void *)c->GPR2);
    break;
  case SYS_unlink:
    printf("unlink(path=%p)\n", (void *)c->GPR1);
    break;
  case SYS_wait:
    printf("wait(status=%p)\n", (void *)c->GPR1);
    break;
  case SYS_times:
    printf("times(buf=%p)\n", (void *)c->GPR1);
    break;
  case SYS_gettimeofday:
    printf("gettimeofday(tv=%p, tz=%p)\n", (void *)c->GPR1, (void *)c->GPR2);
    break;
  default:
    printf("Unknown system call (ID: %d) with parameters: %d, %d, %d, %d\n",
           a[0], c->GPR1, c->GPR2, c->GPR3, c->GPR4);
    break;
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
