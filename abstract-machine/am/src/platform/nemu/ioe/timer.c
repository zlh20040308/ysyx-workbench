#include <am.h>
#include <nemu.h>
#include <stdint.h>

#include <klib.h>

void __am_timer_init() {}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uint32_t high1, high2, low;
  do {
    high1 = inl(RTC_ADDR);         // 先读高位
    low = inl(RTC_ADDR + 0x0000004);  // 再读低位
    high2 = inl(RTC_ADDR);         // 再次读高位
  } while (high1 != high2);  // 检查高位是否发生变化

  uptime->us = ((uint64_t)high1 << 32) | (uint64_t)low;
  printf("haha %llu\n", (unsigned long long)uptime->us);
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour = 0;
  rtc->day = 0;
  rtc->month = 0;
  rtc->year = 1900;
}
