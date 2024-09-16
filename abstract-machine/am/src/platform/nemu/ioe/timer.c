#include <am.h>
#include <nemu.h>
#include <stdint.h>

#include <klib.h>

void __am_timer_init() {}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uint32_t rtc_reg1 = inl(RTC_ADDR);
  uint32_t rtc_reg2 = inl(RTC_ADDR + 0x0000004);

  uptime->us = ((uint64_t)rtc_reg2 << 32) | (uint64_t)rtc_reg1;
  printf("haha %d\n", uptime->us);
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour = 0;
  rtc->day = 0;
  rtc->month = 0;
  rtc->year = 1900;
}
