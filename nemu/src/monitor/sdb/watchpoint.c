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

#include "sdb.h"

#define NR_WP 32

typedef struct watchpoint
{
  int NO;
  struct watchpoint *next;

  /* TODO: Add more members if necessary */
  bool is_free;
  bool Enb;
  char EXPR[32];
  word_t oldvalue;
} WP;

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

static WP *new_wp();
static void free_wp(WP *wp);

void init_wp_pool()
{
  int i;
  for (i = 0; i < NR_WP; i++)
  {
    wp_pool[i].NO = i;
    wp_pool[i].is_free = true;
    wp_pool[i].oldvalue = 0;
    wp_pool[i].Enb = false;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */

static WP *new_wp()
{
  if (free_ == NULL)
  {
    assert(0);
  }
  WP *free = free_;
  free_ = free_->next;

  free->is_free = false;
  free->next = NULL;

  return free;
}

static void free_wp(WP *wp)
{
  wp->next = NULL;
  wp->is_free = true;
  wp->oldvalue = 0;
  if (free_ == NULL)
  {
    free_ = wp;
    return;
  }
  wp->next = free_;
  free_ = wp;
  return;
}

bool traverse_watchpoints_and_show_changes()
{

  if (head == NULL)
  {
    return false;
  }

  WP *temp = head;
  bool changed = false;
  while (temp != NULL)
  {
    bool success = false;
    word_t val = expr(temp->EXPR, &success);
    if (success)
    {
      if (val != temp->oldvalue)
      {
        changed = true;
        printf("Watchpoint %d: %s\n", temp->NO, temp->EXPR);
        printf("Old value: 0x%x\n", temp->oldvalue);
        printf("New value: 0x%x\n", val);
        temp->oldvalue = val;
      }
    }
    else
    {
      printf("Watchpoint %d: %s\n", temp->NO, temp->EXPR);
      printf("Invalid expression\n");
    }
    temp = temp->next;
  }

  return changed;
}

void show_watchpoints()
{
  if (head == NULL)
  {
    printf("No watchpoints\n");
    return;
  }
  printf("%-8s%-10s %s\n", "Num", "Val", "Expr");

  WP *temp = head;
  printf("Watchpoint %d: %s\n", head->NO, head->EXPR);
  while (temp != NULL)
  {
    printf("%-8d0x%08x %s\n", temp->NO, temp->oldvalue, temp->EXPR);
    printf("Watchpoint %d: %s\n", temp->NO, temp->EXPR);
    temp = temp->next;
  }
}

void add_watchpoint(char *args)
{
  bool success = false;
  word_t expr_val = expr(args, &success);
  if (!success)
  {
    printf("Bad expression: %s\n", args);
    return;
  }
  WP *new = new_wp();

  memcpy(new->EXPR, args, sizeof(strlen(args)));
  new->EXPR[strlen(args)] = '\0';
  new->oldvalue = expr_val;
  new->next = head;
  head = new;
  printf("Watchpoint %d: %s\n", head->NO, head->EXPR);
  return;
}

void del_watchpoint(long watchpoint_id)
{
  Log("watchpoint_id = %ld", watchpoint_id);
  WP *temp = head;
  WP *prev = NULL;
  while (temp != NULL && temp->NO != watchpoint_id)
  {
    prev = temp;
    temp = temp->next;
  }
  if (temp == NULL)
  {
    printf("Watchpoint %ld not found\n", watchpoint_id);
    return;
  }
  Log("cur_watchpoint_id = %d", temp->NO);
  if (prev == NULL)
  {
    head = temp->next;
  }else{
    prev->next = temp->next;
    temp->next = NULL;
  }

  free_wp(temp);
}