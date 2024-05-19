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

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

enum
{
  TK_NOTYPE = 256,
  TK_EQ,
  TK_NUMBER,

  /* TODO: Add more token types */

};

static struct rule
{
  const char *regex;
  int token_type;
} rules[] = {

    /* TODO: Add more rules.
     * Pay attention to the precedence level of different rules.
     */

    {" +", TK_NOTYPE},     // spaces
    {"\\+", '+'},          // plus
    {"==", TK_EQ},         // equal
    {"\\-", '-'},          // minus
    {"\\*", '*'},          // multiply
    {"\\/", '/'},          // divide
    {"[0-9]+", TK_NUMBER}, // numbers
    {"\\(", '('},          // left parenthesis
    {"\\)", ')'},          // right parenthesis
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex()
{
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i++)
  {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0)
    {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token
{
  int type;
  char str[32];
} Token;

static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used)) = 0;

static bool make_token(char *e)
{
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;
  Log("error4");
  while (e[position] != '\0')
  {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i++)
    {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0)
      {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */
        if (rules[i].token_type == TK_NOTYPE)
          break;

        if (nr_token == 32)
        {
          printf("Your expersion is too long!\n");
          return false;
        }

        switch (rules[i].token_type)
        {
        case TK_NUMBER:
          tokens[nr_token].type = TK_NUMBER;
          break;
        case TK_EQ:
          tokens[nr_token].type = TK_EQ;
          break;
        case '+':
          tokens[nr_token].type = '+';
          break;
        case '-':
          tokens[nr_token].type = '-';
          break;
        case '*':
          tokens[nr_token].type = '*';
          break;
        case '/':
          tokens[nr_token].type = '/';
          break;
        case '(':
          tokens[nr_token].type = '(';
          break;
        case ')':
          tokens[nr_token].type = ')';
          break;
        }
        memcpy(tokens[nr_token].str, substr_start, substr_len);
        tokens[nr_token].str[substr_len] = '\0';
        nr_token++;
        break;
      }
    }

    if (i == NR_REGEX)
    {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }
  Log("error3");

  return true;
}



static bool check_parentheses(int p, int q)
{
  if (p < 0 || q >= nr_token)
    return false;
  if (tokens[p].type != '(' || tokens[q].type != ')')
    return false;

  int top = 0;
  for (size_t i = p; i <= q; i++)
  {
    if (tokens[i].type == '(')
    {
      top++;
    }
    else if (tokens[i].type == ')')
    {
      if (top > 0)
      {
        top--;
      }
      else
      {
        return false;
      }
    }
  }
  if (top == 0)
    return true;
  else
    return false;
}


static word_t eval(int p, int q, bool *success)
{

  if (p > q)
  {
    /* Bad expression */
    *success = false;
    return 1;
  }
  else if (p == q)
  {
    /* Single token.
     * For now this token should be a number.
     * Return the value of the number.
     */
    if (tokens[p].type == TK_NUMBER)
    {
      char *endptr;

      word_t num = strtol(tokens[p].str, &endptr, 10);

      if (*endptr == '\0')
      {
        *success = true;
        return num;
      }
      else
      {
        Log("Conversion error, non-convertible part: %s", endptr);
        *success = false;
        return 1;
      }
    }
    else
    {
      *success = false;
      return 1;
    }
  }
  else if (check_parentheses(p, q) == true)
  {
    /* The expression is surrounded by a matched pair of parentheses.
     * If that is the case, just throw away the parentheses.
     */
    return eval(p + 1, q - 1, success);
  }
  else
  {
    /* We should do more things here. */
    int select_op = -1;
    int select_op_idx = -1;
    for (int i = q; i >= p; i--)
    {
      switch (rules[i].token_type)
      {
      case '+':
        if (select_op < 0 || select_op == '*' || select_op == '/')
        {
          select_op = '+';
          select_op_idx = i;
        }
        break;
      case '-':
        if (select_op < 0 || select_op == '*' || select_op == '/')
        {
          select_op = '-';
          select_op_idx = i;
        }
        break;
      case '*':
        if (select_op < 0)
        {
          select_op = '*';
          select_op_idx = i;
        }
        break;
      case '/':
        if (select_op < 0)
        {
          select_op = '/';
          select_op_idx = i;
        }
        break;
      }
    }
    word_t v1 = eval(p, select_op_idx - 1, success);
    if (!success)
    {
      return 1;
    }
    word_t v2 = eval(select_op_idx + 1, q, success);
    if (!success)
    {
      return 1;
    }
    switch (select_op)
    {
    case '+':
      return v1 + v2;
    case '-':
      return v1 - v2;
    case '*':
      return v1 * v2;
    case '/':
      return v1 / v2;
    }
  }
  return 0;
}

word_t expr(char *e, bool *success)
{
  if (!make_token(e))
  {
    *success = false;
    return 0;
  }
  Log("error3");
  int p = 0, q = nr_token;

  /* TODO: Insert codes to evaluate the expression. */
  return eval(p, q, success);
}

