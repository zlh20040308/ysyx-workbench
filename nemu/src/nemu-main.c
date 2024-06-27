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

#include <common.h>

void init_monitor(int, char *[]);
void am_init_monitor();
void engine_start();
int is_exit_status_bad();
word_t expr(char *e, bool *success);

#define BUF_SIZE 65536

// 读取文件内容并处理每一行
void process_file(const char *filename)
{
  FILE *file = fopen(filename, "r");
  if (!file)
  {
    perror("Failed to open file");
    exit(EXIT_FAILURE);
  }

  char line[BUF_SIZE];
  while (fgets(line, sizeof(line), file))
  {
    unsigned expected_result;
    char expression[BUF_SIZE];

    // 解析行格式 "结果 表达式"
    if (sscanf(line, "%u %[^\n]", &expected_result, expression) != 2)
    {
      fprintf(stderr, "Failed to parse line: %s", line);
      continue;
    }

    bool success = false;
    word_t actual_result = expr(expression, &success);

    if (success)
    {
      printf("Expected: %u, Actual: %u, Expression: %s\n", expected_result, actual_result, expression);
      if (expected_result != actual_result)
      {
        printf("Mismatch detected!\n");
      }
    }
    else
    {
      printf("Expression parsing failed: %s\n", expression);
    }
  }

  fclose(file);
}

int main(int argc, char *argv[])
{
  /* Initialize the monitor. */
#ifdef CONFIG_TARGET_AM
  am_init_monitor();
#else
  init_monitor(argc, argv);
#endif

  /* Start engine. */
  // engine_start();
  const char *filename = "/home/feng/OS/ysyx-workbench/nemu/tools/gen-expr/input";
  process_file(filename);

  return is_exit_status_bad();
}
