#include "fixedptc.h"
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

// 辅助函数：检查两个固定点数是否相等
static int check_fixedpt_equal(fixedpt a, fixedpt b) { return a == b; }

// 测试 fixedpt_muli 函数
void test_fixedpt_muli(void) {
  printf("Testing fixedpt_muli...\n");

  fixedpt a = fixedpt_fromint(5);
  int b = 3;
  fixedpt result = fixedpt_muli(a, b);
  fixedpt expected = fixedpt_fromint(15);

  if (check_fixedpt_equal(result, expected)) {
    printf("PASS: fixedpt_muli(5, 3) == 15\n");
  } else {
    printf("FAIL: fixedpt_muli(5, 3) != 15, got %ld\n", (long)result);
  }
}

// 测试 fixedpt_divi 函数
void test_fixedpt_divi(void) {
  printf("Testing fixedpt_divi...\n");

  fixedpt a = fixedpt_fromint(10);
  int b = 2;
  fixedpt result = fixedpt_divi(a, b);
  fixedpt expected = fixedpt_fromint(5);

  if (check_fixedpt_equal(result, expected)) {
    printf("PASS: fixedpt_divi(10, 2) == 5\n");
  } else {
    printf("FAIL: fixedpt_divi(10, 2) != 5, got %ld\n", (long)result);
  }
}

// 测试 fixedpt_mul 函数
void test_fixedpt_mul(void) {
  printf("Testing fixedpt_mul...\n");

  fixedpt a = fixedpt_rconst(2.5);
  fixedpt b = fixedpt_rconst(4.0);
  fixedpt result = fixedpt_mul(a, b);
  fixedpt expected = fixedpt_rconst(10.0);

  if (check_fixedpt_equal(result, expected)) {
    printf("PASS: fixedpt_mul(2.5, 4.0) == 10.0\n");
  } else {
    printf("FAIL: fixedpt_mul(2.5, 4.0) != 10.0, got %ld\n", (long)result);
  }
}

// 测试 fixedpt_div 函数
void test_fixedpt_div(void) {
  printf("Testing fixedpt_div...\n");

  fixedpt a = fixedpt_rconst(10.0);
  fixedpt b = fixedpt_rconst(2.0);
  fixedpt result = fixedpt_div(a, b);
  fixedpt expected = fixedpt_rconst(5.0);

  if (check_fixedpt_equal(result, expected)) {
    printf("PASS: fixedpt_div(10.0, 2.0) == 5.0\n");
  } else {
    printf("FAIL: fixedpt_div(10.0, 2.0) != 5.0, got %ld\n", (long)result);
  }
}

// 测试 fixedpt_abs 函数
void test_fixedpt_abs(void) {
  printf("Testing fixedpt_abs...\n");

  fixedpt a = fixedpt_rconst(-3.5);
  fixedpt result = fixedpt_abs(a);
  fixedpt expected = fixedpt_rconst(3.5);

  if (check_fixedpt_equal(result, expected)) {
    printf("PASS: fixedpt_abs(-3.5) == 3.5\n");
  } else {
    printf("FAIL: fixedpt_abs(-3.5) != 3.5, got %ld\n", (long)result);
  }
}

// 测试 fixedpt_floor 函数
void test_fixedpt_floor(void) {
  printf("Testing fixedpt_floor...\n");

  fixedpt a = fixedpt_rconst(3.8);
  fixedpt result = fixedpt_floor(a);
  fixedpt expected = fixedpt_fromint(3);

  if (check_fixedpt_equal(result, expected)) {
    printf("PASS: fixedpt_floor(3.8) == 3\n");
  } else {
    printf("FAIL: fixedpt_floor(3.8) != 3, got %ld\n", (long)result);
  }
}

// 测试 fixedpt_ceil 函数
void test_fixedpt_ceil(void) {
  printf("Testing fixedpt_ceil...\n");

  fixedpt a = fixedpt_rconst(3.2);
  fixedpt result = fixedpt_ceil(a);
  fixedpt expected = fixedpt_fromint(4);

  if (check_fixedpt_equal(result, expected)) {
    printf("PASS: fixedpt_ceil(3.2) == 4\n");
  } else {
    printf("FAIL: fixedpt_ceil(3.2) != 4, got %ld\n", (long)result);
  }
}

// 主测试函数
int main() {
  test_fixedpt_muli();
  test_fixedpt_divi();
  test_fixedpt_mul();
  test_fixedpt_div();
  test_fixedpt_abs();
  test_fixedpt_floor();
  test_fixedpt_ceil();

  return 0;
}