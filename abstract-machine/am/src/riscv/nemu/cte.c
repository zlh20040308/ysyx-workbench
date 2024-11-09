#include <am.h>
#include <klib.h>
#include <riscv/riscv.h>
#include <stdio.h>

static Context *(*user_handler)(Event, Context *) = NULL;

Context *__am_irq_handle(Context *c) {
  if (user_handler) {
    Event ev = {0};
    if (c->gpr[17] == -1) {
      c->mepc += 4;
      ev.event = EVENT_YIELD;
    } else if (c->gpr[17] >= 0 && c->gpr[17] <= 19) {
      c->mepc += 4;
      ev.event = EVENT_SYSCALL;
    } else {
      printf("Invalid event type = %d\n", c->gpr[17]);
      ev.event = EVENT_ERROR;
    }

    c = user_handler(ev, c);
    assert(c != NULL);
  }

  return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context *(*handler)(Event, Context *)) {
  // initialize exception entry
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

  // register event handler
  user_handler = handler;

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  Context *ctx = (Context *)(kstack.end - sizeof(Context));
  ctx->gpr[10] = (uintptr_t)arg;
  ctx->mepc = (uintptr_t)entry;
  return ctx;
}

void yield() {
#ifdef __riscv_e
  asm volatile("li a5, -1; ecall");
#else
  asm volatile("li a7, -1; ecall");
#endif
}

bool ienabled() { return false; }

void iset(bool enable) {}
