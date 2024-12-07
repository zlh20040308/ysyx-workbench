
#include <cstdio>
#include <device.h>
#include <mem.h>
#include <monitor.h>
#include <verilator-sim.h>

bool is_batch_mode = false;
extern int prev_t1;
extern int prev_a5;

static struct {
  const char *name;
  const char *description;
  int (*handler)(char *);
} cmd_table[] = {
    {"h", "help", cmd_h},
    {"c", "continue execution", cmd_c},
    {"q", "quit NSIM", cmd_q},
    {"s", "single-step execution", cmd_s},
    {"r", "informations about register ", cmd_r},
    {"m", "scan and print memory", cmd_m},
};

#define NR_CMD 6

static char *rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(npc-sim) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

int cmd_c(char *args) {
  while (npc_state.state == NPC_RUNNING || npc_state.state == NPC_STOP) {
    // Log("HAHA1");
    sim_one_cycle();
    // static int step = 1;
    // if (step-- == 0) {
    //   display_regs();
    //   exit(0);
    // }
    // if (cpu.pc == 0x80036798) {
    //   display_regs();
    //   exit(0);
    // }
    // Log("ggggggg cpu.pc = %x", cpu.pc);

#ifdef COFIG_DEVICES
    device_update();
#endif
    // Log("HAHA2");

#ifdef CONFIG_DIFFTEST
    difftest_one_exec();
    // Log("HAHA3");

    if (difftest_check_reg() == false) {
      npc_state.state = NPC_ABORT;
      display_regs();
      return -1;
    }
#endif
  }
  Log("[sdb] NPC's state is not NPC_RUNNING or NPC_STOP, can not continue");
  display_regs();
  Log("prev_t1 = %x\n", prev_t1);
  Log("prev_a5 = %x\n", prev_a5);
  return 0;
}

int cmd_q(char *args) {
  npc_state.state = NPC_QUIT;
  printf("[sdb] exit NPC\n");
  return -1;
}

int cmd_m(char *args) {
  if (args == NULL) {
    printf("[sdb] this function need arguments, plese try again\n");
    return 0;
  }

  word_t print_length;
  word_t start_memory_address;
  char *last_part_of_args;
  char *string_token_first = strtok_r(args, " ", &last_part_of_args);
  print_length = atoi(string_token_first);
  sscanf(last_part_of_args, "%x", &start_memory_address);
  for (word_t addr = start_memory_address;
       addr < start_memory_address + print_length; addr = addr + 4) {
    printf("pmem @ 0x%x -> 0x%x\n", addr, pmem_read(addr, 4));
  }

  return 0;
}

int cmd_r(char *args) {
  display_regs();
  return 0;
}

int cmd_s(char *args) {
  if (args == NULL) {
    printf("[sdb] you can use \"s N\" to execute N steps\n");
    if (npc_state.state == NPC_RUNNING || npc_state.state == NPC_STOP) {
      sim_one_cycle();
    } else {
      printf("[sdb] NPC's state is not NPC_RUNNING or NPC_STOP, can not "
             "continue\n");
      display_regs();
      Log("prev_t1 = %x\n", prev_t1);
      Log("prev_a5 = %x\n", prev_a5);
    }
    return 0;
  } else {
    int steps = atoi(args);
    assert(steps > 0);
    for (int i = 0; i < steps; i = i + 1) {
      if (npc_state.state == NPC_RUNNING || npc_state.state == NPC_STOP) {
        sim_one_cycle();
      } else {
        printf("[sdb] NPC's state is not NPC_RUNNING or NPC_STOP, can not "
               "continue\n");
        display_regs();
        Log("prev_t1 = %x\n", prev_t1);
        Log("prev_a5 = %x\n", prev_a5);
      }
    }
    return 0;
  }
}

int cmd_h(char *args) {
  for (int i = 0; i < NR_CMD; i = i + 1) {
    printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
  }
  return 0;
}

void sdb_main_loop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL;) {
    char *str_end = str + strlen(str);
    char *cmd = strtok(str, " ");
    if (cmd == NULL) {
      continue;
    }

    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

    sdl_clear_event_queue();

    int i;
    for (i = 0; i < NR_CMD; i = i + 1) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) {
          return;
        }
        break;
      }
    }

    if (i == NR_CMD) {
      printf("[sdb] unknown command '%s'\n", cmd);
    }
  }

  return;
}

void sdb_init_sdb() {
  printf("[sdb] nothing to do, initialized\n");
  return;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
  assert(is_batch_mode);
  return;
}