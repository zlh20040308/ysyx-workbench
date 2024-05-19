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

#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"

#define INFO_NOTFOUND 0
#define INFO_X 1
#define INFO_R 2

static int is_batch_mode = false;

void init_regex();
void init_wp_pool();
word_t paddr_read(paddr_t addr, int len);


/* We use the `readline' library to provide more flexibility to read from stdin. */
static char *rl_gets()
{
  static char *line_read = NULL;

  if (line_read)
  {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read)
  {
    add_history(line_read);
  }

  return line_read;
}

int get_command_code(const char *args)
{
  if (strcmp(args, "r") == 0)
  {
    Log("%d", INFO_R);
    return INFO_R;
  }
  else if (strcmp(args, "x") == 0)
  {
    return INFO_X;
  }
  else
  {
    return INFO_NOTFOUND;
  }
}

static int cmd_c(char *args)
{
  cpu_exec(-1);
  return 0;
}

static int cmd_q(char *args)
{
  nemu_state.state = NEMU_QUIT;
  return -1;
}

static int cmd_help(char *args);

static int cmd_si(char *args)
{
  char *endptr;
  if (args == NULL || args[0] == '\0')
  {
    cpu_exec(1);
    return 0;
  }
  uint64_t num = strtol(args, &endptr, 10);

  if (*endptr == '\0')
    cpu_exec(num);
  else
    Log("Conversion error, non-convertible part: %s", endptr);
  return 0;
}

static int cmd_info(char *args)
{
  if (args == NULL || args[0] == '\0')
  {
    Log("Usage: info <required_argument>");
    return 0;
  }
  switch (get_command_code(args))
  {
  case INFO_R:
    isa_reg_display();
    break;
  case INFO_X:
    break;
  case INFO_NOTFOUND:
    printf("Usage: info <vaild_argument>\n");
    break;
  default:
    printf("Usage: info <vaild_argument>\n");
    break;
  }
  return 0;
}

static int cmd_x(char *args)
{
  char *N;
  char *EXPR;
  const char delim[] = " "; // 分隔符为逗号
  // 使用 strtok 分割字符串
  char *token = strtok(args, delim);

  // 循环遍历分割后的每个单词
  for (size_t i = 0; i < 3; i++)
  {
    switch (i)
    {
    case 0:
      N = token;
      break;
    case 1:
      EXPR = token;
      break;
    case 2:
      char *temp = token;
      if (temp != NULL)
      {
        printf("Wrong!!!\n");
        return 0;
      }
      break;
    default:
      break;
    }
    token = strtok(NULL, delim); // 继续分割字符串
  }

  if (N == NULL || EXPR == NULL)
  {
    printf("Wrong!!!\n");
    return 0;
  }

  char *endptr;
  uint64_t num = strtol(N, &endptr, 10);
  paddr_t hex_value = strtol(EXPR, &endptr, 16);

  if (*endptr != '\0')
  {
    Log("Conversion error");
    return 0;
  }

  for (int i = 0; i < num; i++)
  {
    printf("0x%08x 0x%08x\n", hex_value + i * 4, paddr_read(hex_value + i * 4, 4));
  }

  return 0;
}

static struct
{
  const char *name;
  const char *description;
  int (*handler)(char *);
} cmd_table[] = {
    {"help", "Display information about all supported commands", cmd_help},
    {"c", "Continue the execution of the program", cmd_c},
    {"q", "Exit NEMU", cmd_q},

    /* TODO: Add more commands */
    {"si", "Single-step execution", cmd_si},
    {"info", "Print program status", cmd_info},
    {"x", "Scan memory", cmd_x},

};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args)
{
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL)
  {
    /* no argument given */
    for (i = 0; i < NR_CMD; i++)
    {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else
  {
    for (i = 0; i < NR_CMD; i++)
    {
      if (strcmp(arg, cmd_table[i].name) == 0)
      {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode()
{
  is_batch_mode = true;
}

void sdb_mainloop()
{
  if (is_batch_mode)
  {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL;)
  {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL)
    {
      continue;
    }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end)
    {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i++)
    {
      if (strcmp(cmd, cmd_table[i].name) == 0)
      {
        if (cmd_table[i].handler(args) < 0)
        {
          return;
        }
        break;
      }
    }

    if (i == NR_CMD)
    {
      printf("Unknown command '%s'\n", cmd);
    }
  }
}

void init_sdb()
{
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
