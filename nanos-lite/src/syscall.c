#include "syscall.h"
#include <stdint.h>
#include <stdio.h>

const char *_syscall_names[] = {
    "SYS_exit",  "SYS_yield",  "SYS_open",   "SYS_read",   "SYS_write",
    "SYS_kill",  "SYS_getpid", "SYS_close",  "SYS_lseek",  "SYS_brk",
    "SYS_fstat", "SYS_time",   "SYS_signal", "SYS_execve", "SYS_fork",
    "SYS_link",  "SYS_unlink", "SYS_wait",   "SYS_times",  "SYS_gettimeofday"};

#ifdef STRACE

void print_syscall_info(Context *c) {
  uintptr_t syscall_num = c->GPR1; // 系统调用号
  uintptr_t arg1 = c->GPR2;        // 参数1
  uintptr_t arg2 = c->GPR3;        // 参数2
  uintptr_t arg3 = c->GPR4;        // 参数3

  // 打印系统调用名称
  if (syscall_num >= 0 &&
      syscall_num < sizeof(_syscall_names) / sizeof(_syscall_names[0])) {
    printf("System call: %s\n", _syscall_names[syscall_num]);
  } else {
    printf("System call: Unknown (ID: %d)\n", syscall_num);
  }

  // 打印系统调用参数
  printf("Arguments: ");
  switch (syscall_num) {
  case SYS_exit:
    printf("exit(%d)\n", arg1);
    break;
  case SYS_yield:
    printf("yield()\n");
    break;
  case SYS_write:
    printf("write(fd=%d, buf=%p, count=%d)\n", arg1, (void *)arg2, arg3);
    break;
  case SYS_open:
    printf("open(path=%p, flags=%d, mode=%d)\n", (void *)arg1, arg2, arg3);
    break;
  case SYS_read:
    printf("read(fd=%d, buf=%p, count=%d)\n", arg1, (void *)arg2, arg3);
    break;
  case SYS_kill:
    printf("kill(pid=%d, sig=%d)\n", arg1, arg2);
    break;
  case SYS_getpid:
    printf("getpid()\n");
    break;
  case SYS_close:
    printf("close(fd=%d)\n", arg1);
    break;
  case SYS_lseek:
    printf("lseek(fd=%d, offset=%ld, whence=%d)\n", arg1, (long)arg2, arg3);
    break;
  case SYS_brk:
    printf("brk(addr=%p)\n", (void *)arg1);
    break;
  case SYS_fstat:
    printf("fstat(fd=%d, stat=%p)\n", arg1, (void *)arg2);
    break;
  case SYS_time:
    printf("time(tloc=%p)\n", (void *)arg1);
    break;
  case SYS_signal:
    printf("signal(signum=%d, handler=%p)\n", arg1, (void *)arg2);
    break;
  case SYS_execve:
    printf("execve(path=%p, argv=%p, envp=%p)\n", (void *)arg1, (void *)arg2,
           (void *)arg3);
    break;
  case SYS_fork:
    printf("fork()\n");
    break;
  case SYS_link:
    printf("link(oldpath=%p, newpath=%p)\n", (void *)arg1, (void *)arg2);
    break;
  case SYS_unlink:
    printf("unlink(path=%p)\n", (void *)arg1);
    break;
  case SYS_wait:
    printf("wait(status=%p)\n", (void *)arg1);
    break;
  case SYS_times:
    printf("times(buf=%p)\n", (void *)arg1);
    break;
  case SYS_gettimeofday:
    printf("gettimeofday(tv=%p, tz=%p)\n", (void *)arg1, (void *)arg2);
    break;
  default:
    printf("Unknown system call (ID: %d) with parameters: %d, %d, %d\n",
           syscall_num, arg1, arg2, arg3);
    break;
  }
}
#endif

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1; // 系统调用号
  a[1] = c->GPR2; // 第一个参数
  a[2] = c->GPR3; // 第二个参数
  a[3] = c->GPR4; // 第三个参数

// 如果启用了STRACE，打印系统调用信息和参数
#ifdef STRACE
  print_syscall_info(c);
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
    c->GPR2 = 0;
    break;
  default:
    panic("Unhandled syscall ID = %d", a[0]);
  }
}