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

#define EXPR_LENGTH 200

enum
{
  TK_NOTYPE = 256,
  TK_EQ,
  TK_DEC,
  TK_HEX,
  DEREF,
  TK_NOTEQ,
  TK_LAND,
  TK_REG,
  TK_GT,
  TK_G,
  TK_LT,
  TK_L,
  // TK_NEG,

  /* TODO: Add more token types */

};

enum
{
  P1 = 1, //
  P2,     // DEREF
  P3,     // '*' 、 '/'
  P4,     // '+' 、 '-'
  P5,
  P6,
  P7, // TK_EQ、 TK_NOTEQ
  P8,
  P9,
  P10,
  P11, // TK_LAND

  /* Operators priorities */

};

static struct rule
{
  const char *regex;
  int token_type;
} rules[] = {

    /* TODO: Add more rules.
     * Pay attention to the precedence level of different rules.
     */

    {" +", TK_NOTYPE}, // spaces
    {"\\+", '+'},      // plus
    {"==", TK_EQ},     // equal
    // {"-[ ]*[0-9]+", TK_NEG},       // negative numbers with optional spaces (负数)
    {"\\-", '-'},                  // minus
    {"\\*", '*'},                  // multiply or dereference
    {"\\/", '/'},                  // divide
    {"0[xX][0-9a-fA-F]+", TK_HEX}, // hexadecimal numbers
    {"[0-9]+", TK_DEC},            // decimal numbers
    {"\\(", '('},                  // left parenthesis
    {"\\)", ')'},                  // right parenthesis
    {">=", TK_GT},                 // greater than
    {">", TK_G},                   // greater
    {"<=", TK_LT},                 // less than
    {"<", TK_L},                   // less
    {"!=", TK_NOTEQ},              // not equal
    {"&&", TK_LAND},               // logical and
    {"\\$[a-zA-Z][0-9]", TK_REG},  // register
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};
word_t isa_reg_str2val(const char *s, bool *success);
word_t paddr_read(paddr_t addr, int len);

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
  char str[EXPR_LENGTH];
} Token;

static Token tokens[EXPR_LENGTH] __attribute__((used)) = {};
static int nr_token __attribute__((used)) = 0;

static bool make_token(char *e)
{
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;
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

        if (nr_token == EXPR_LENGTH)
        {
          printf("Your expersion is too long!\n");
          return false;
        }

        switch (rules[i].token_type)
        {
        case TK_DEC:
          tokens[nr_token].type = TK_DEC;
          break;
        case TK_HEX:
          tokens[nr_token].type = TK_HEX;
          break;
        case TK_EQ:
          tokens[nr_token].type = TK_EQ;
          break;
        case TK_REG:
          tokens[nr_token].type = TK_REG;
          break;
        case TK_LAND:
          tokens[nr_token].type = TK_LAND;
          break;
        case TK_NOTEQ:
          tokens[nr_token].type = TK_NOTEQ;
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

  for (size_t i = 0; i < nr_token; i++)
  {
    Log("type = %d val = %s", tokens[i].type, tokens[i].str);
  }

  return true;
}

static const char *token_to_str(int type)
{
  switch (type)
  {
  case TK_NOTYPE:
    return "NOT";
  case TK_EQ:
    return "EQ";
  case TK_DEC:
    return "DEC";
  case TK_HEX:
    return "HEX";
  case DEREF:
    return "DEREF";
  case TK_NOTEQ:
    return "NOTEQ";
  case TK_LAND:
    return "LAND";
  case TK_REG:
    return "REG";
  case TK_GT:
    return "GT";
  case TK_G:
    return "G";
  case TK_LT:
    return "LT";
  case TK_L:
    return "L";
  default:
    return "UNKNOWN";
  }
}

static bool check_parentheses(int p, int q)
{
  if (p < 0 || q >= nr_token || tokens[p].type != '(' || tokens[q].type != ')')
    return false;

  int top = 0;
  char *buf = malloc(sizeof(char) * (q - p + 1));
  for (int i = p; i <= q; i++)
  {
    if (i == p)
    {
      if (tokens[i].type == '(')
      {
        buf[top++] = '(';
        buf[top++] = '1'; // 标记位
      }
      else
      {
        return false;
      }
    }
    else
    {
      if (tokens[i].type == '(')
      {
        buf[top++] = '(';
      }
      else if (tokens[i].type == ')')
      {
        if (top <= 0)
        {
          return false;
        }

        if (buf[top - 1] == '(')
        {
          top--;
        }
        else if (buf[top - 1] == '1')
        {
          return i == q;
        }
      }
    }
  }
  free(buf);
  return false;
}

static word_t eval(int p, int q, bool *success)
{
  Log("p = %d, q = %d", p, q);

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
    if (tokens[p].type == TK_DEC || tokens[p].type == TK_HEX || tokens[p].type == TK_REG)
    {
      char *endptr = "";
      word_t num;
      Log("tokens type is %s", token_to_str(tokens[p].type));
      switch (tokens[p].type)
      {
      case TK_DEC:
        num = strtoul(tokens[p].str, &endptr, 10);
        break;
      case TK_HEX:
        num = strtoul(tokens[p].str, &endptr, 16);
        break;
      case TK_REG:
        num = isa_reg_str2val(tokens[p].str, success);
        Log("num = %d, reg = %s success = %d", num, tokens[p].str, *success);
        if (!(*success))
        {
          return 1;
        }
        break;
      default:
        break;
      }

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
    int in_parenthesis = 0;
    int cur_select_op_priority = 0;
    for (int i = q; i >= p; i--)
    {
      switch (tokens[i].type)
      {
      case '(':
        in_parenthesis--;
        break;
      case ')':
        in_parenthesis++;
        break;
      default:
        break;
      }

      if (in_parenthesis)
      {
        continue;
      }

      switch (tokens[i].type)
      {
      case DEREF:
        if (cur_select_op_priority == 0 || P2 > cur_select_op_priority)
        {
          select_op = tokens[i].type;
          select_op_idx = i;
          cur_select_op_priority = P2;
        }
      case '*':
      case '/':
        if (cur_select_op_priority == 0 || P3 > cur_select_op_priority)
        {
          select_op = tokens[i].type;
          select_op_idx = i;
          cur_select_op_priority = P3;
        }
        break;
      case '+':
      case '-':
        if (cur_select_op_priority == 0 || P4 > cur_select_op_priority)
        {
          select_op = tokens[i].type;
          select_op_idx = i;
          cur_select_op_priority = P4;
        }
        break;
      case TK_EQ:
      case TK_NOTEQ:
        if (cur_select_op_priority == 0 || P7 > cur_select_op_priority)
        {
          select_op = tokens[i].type;
          select_op_idx = i;
          cur_select_op_priority = P7;
        }
        break;
      case TK_LAND:
        if (cur_select_op_priority == 0 || P11 > cur_select_op_priority)
        {
          select_op = tokens[i].type;
          select_op_idx = i;
          cur_select_op_priority = P11;
        }
      }
    }

    if (cur_select_op_priority == -1 || select_op_idx == -1)
    {
      *success = false;
      return 1;
    }
    Log("select_op_idx  = %d cur_select_op_priority = %d", select_op_idx, cur_select_op_priority);

    bool eval_v1_success = true, eval_v2_success = true;

    word_t v1 = 0;
    if (select_op != DEREF)
    {
      v1 = eval(p, select_op_idx - 1, &eval_v1_success);
      Log("v1 = 0x%09x", v1);
    }
    word_t v2 = eval(select_op_idx + 1, q, &eval_v2_success);

    Log("v2 = 0x%09x", v2);

    Log("select_op is %s", token_to_str(select_op));
    switch (select_op)
    {
    case '+':
      if (eval_v1_success && eval_v2_success)
      {
        *success = true;
        return v1 + v2;
      }
      else
      {
        *success = false;
        return 1;
      }

    case '-':
      if (eval_v1_success && eval_v2_success)
      {
        *success = true;
        return v1 - v2;
      }
      else
      {
        *success = false;
        return 1;
      }
    case '*':
      if (eval_v1_success && eval_v2_success)
      {
        *success = true;
        return v1 * v2;
      }
      else
      {
        *success = false;
        return 1;
      }
    case '/':
      if (eval_v1_success && eval_v2_success)
      {
        if (v2 == 0)
        {
          *success = false;
          return 1;
        }
        else
        {
          *success = true;
          return v1 / v2;
        }
      }
      else
      {
        *success = false;
        return 1;
      }
    case DEREF:
      if (eval_v2_success)
      {
        if (v2 >= 0x80000000 && v2 <= 0x87ffffff)
        {
          *success = true;
          return paddr_read(v2, sizeof(word_t));
        }
        else
        {
          *success = false;
          return 1;
        }
      }
      else
      {
        *success = false;
        return 1;
      }
    case TK_EQ:
      if (eval_v1_success && eval_v2_success)
      {
        *success = true;
        return v1 == v2;
      }
      else
      {
        *success = false;
        return 1;
      }

    case TK_NOTEQ:
      if (eval_v1_success && eval_v2_success)
      {
        *success = true;
        return v1 != v2;
      }
      else
      {
        *success = false;
        return 1;
      }
    case TK_LAND:
      if (eval_v1_success && eval_v2_success)
      {
        *success = true;
        return v1 && v2;
      }
      if (!eval_v1_success)
      {
        *success = false;
        return 1;
      }
      if (!eval_v2_success)
      {
        *success = true;
        return v1 == true;
      }
      *success = false;
      return 1;
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

  for (int i = 0; i < nr_token; i++)
  {
    if (tokens[i].type == '*' && (i == 0 || tokens[i - 1].type == '(' || tokens[i - 1].type == '+' || tokens[i - 1].type == '-' || tokens[i - 1].type == '*' || tokens[i - 1].type == '/' || tokens[i - 1].type == TK_EQ || tokens[i - 1].type == TK_NOTEQ || tokens[i - 1].type == TK_LAND || tokens[i - 1].type == DEREF))
    {
      tokens[i].type = DEREF;
    }
  }
  int p = 0, q = nr_token - 1;
  Log("e = %s ,nr_token = %d", e, nr_token);

  /* TODO: Insert codes to evaluate the expression. */
  return eval(p, q, success);
}
