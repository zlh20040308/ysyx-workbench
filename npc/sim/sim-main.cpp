
#define CONFIG_PLATFORM_VERILATOR
//#define CONFIG_PLATFORM_IVERILOG

#include <common.h>
#include <device.h>
#include <monitor.h>
#include <stdio.h>
#include <verilator-sim.h>

#include <mem.h>

NPCState npc_state;

bool is_exit_status_bad() {
  bool good = npc_state.state != NPC_ABORT;
  return !good;
}

int main(int argc, char *argv[]) {
  Log("Welcome to NPC-SIM!");
  Log("[npc-sim] initializing memory & devices");
  init_mem();
  init_device();
  Log("[npc-sim] initializing monitor");
  init_monitor(argc, argv);
  Log("[npc-sim] initializing verilator-sim");
  sim_init();
  Log("[npc-sim] entering sdb main loop");
  sdb_main_loop();
  Log("[npc-sim] leaving sdb main loop");
  sim_exit();
  Log("Goodbye");

  return is_exit_status_bad();
}