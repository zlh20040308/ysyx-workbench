/***************************************************************************************
 * Copyright (c) 2014-2022 Zihao Yu, Nanjing University
 *
 * NEMU is licensed under Mulan PSL v2.
 * You can use this software according to the terms and conditions of the Mulan PSL v2.
 * You may obtain a copy of Mulan PSL v2 at:
 *          http://license.coscl.org.cn/MulanPSL2
 *
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
 * EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
 * MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
 *
 * See the Mulan PSL v2 for more details.
 ***************************************************************************************/

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>

// this should be enough
static char buf[65536] = {};
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
    "#include <stdio.h>\n"
    "int main() { "
    "  unsigned result = %s; "
    "  printf(\"%%u\", result); "
    "  return 0; "
    "}";

static int buf_index = 0;

typedef enum
{
  OP_ADD,      // 加法 "+"
  OP_SUBTRACT, // 减法 "-"
  OP_MULTIPLY, // 乘法 "*"
  OP_DIVIDE,   // 除法 "/"
  OP_EQ,       // 相等 "=="
  OP_NOTEQ,    // 不等 "!="
  OP_LAND,     // 逻辑与 "&&"
  OP_COUNT     // 操作符计数（用于限制范围）
} Op;

// 返回操作符对应的字符
const char *op_to_string(Op op)
{
  switch (op)
  {
  case OP_ADD:
    return "+";
  case OP_SUBTRACT:
    return "-";
  case OP_MULTIPLY:
    return "*";
  case OP_DIVIDE:
    return "/";
  case OP_EQ:
    return "==";
  case OP_NOTEQ:
    return "!=";
  case OP_LAND:
    return "&&";
  default:
    assert(0);
    return "";
  }
}

uint32_t choose(uint32_t n)
{
  return rand() % n;
}

static void gen_rand_op()
{
  uint32_t op_idx = choose(OP_COUNT);
  const char *op = op_to_string((Op)op_idx);
  for (int i = 0; op[i] != '\0'; i++)
  {
    buf[buf_index++] = op[i];
  }
}

static void gen_rand_expr()
{
  switch (choose(3))
  {
  case 0:
  {
    int num = choose(100);
    buf_index += sprintf(buf + buf_index, "%d", num);
    break;
  }
  case 1:
    buf[buf_index++] = '(';
    gen_rand_expr();
    buf[buf_index++] = ')';
    break;
  default:
    gen_rand_expr();
    gen_rand_op();
    gen_rand_expr();
    break;
  }
  buf[buf_index] = '\0';
}

int main(int argc, char *argv[])
{
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1)
  {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  for (i = 0; i < loop; i++)
  {
    buf_index = 0; // 在每次生成表达式前重置 buf_index
    gen_rand_expr();

    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc /tmp/.code.c -o /tmp/.expr");
    if (ret != 0)
      continue;

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    int result;
    ret = fscanf(fp, "%d", &result);
    pclose(fp);

    printf("%u %s\n", result, buf);
  }
  return 0;
}
