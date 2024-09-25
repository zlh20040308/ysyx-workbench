#include <am.h>
#include <nemu.h>
#include <stdint.h>

#include <klib.h>

void __am_timer_init() {}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uint64_t high = (uint64_t)inl(RTC_ADDR + 0x0000004);
  uint64_t low = (uint64_t)inl(RTC_ADDR);

  uptime->us = low | (high << 32);
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour = 0;
  rtc->day = 0;
  rtc->month = 0;
  rtc->year = 1900;
}
