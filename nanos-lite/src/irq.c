#include <common.h>
#include "syscall.h"
void do_syscall(Context *c);

static Context *do_event(Event e, Context *c) {
  switch (e.event) {
  case EVENT_YIELD:
    printf("You son of bitch\n");
    break;
  case EVENT_SYSCALL:
    do_syscall(c);
    break;
  case EVENT_ERROR:
    panic("Ops, something go wrong!");
    break;
  default:
  Log("haha = %d",EVENT_YIELD);
    panic("Unhandled event ID = %d", e.event);
  }

  return c;
}

void init_irq(void) {
  Log("Initializing interrupt/exception handler...");
  cte_init(do_event);
}
