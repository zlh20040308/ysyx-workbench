#pragma once
#include <common.h>

#include <readline/readline.h>
#include <readline/history.h>

#include <getopt.h>

void init_monitor(int argc, char* argv[]);
void parse_args(int argc, char* argv[]);
void load_image();

int cmd_c(char* args);
int cmd_q(char* args);
int cmd_m(char* args);
int cmd_r(char* args);
int cmd_s(char* args);
int cmd_h(char* args);

void sdb_main_loop();
void sdb_init_sdb();
void sdb_set_batch_mode();