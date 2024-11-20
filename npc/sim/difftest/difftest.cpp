
#include <cstdint>
#include <dlfcn.h>

#include <common.h>
#include <difftest.h>
#include <list>
#include <mem.h>
#include <verilator-sim.h>

rtl_CPU_State cpu;
extern uint32_t cur_pc;
std::list<int> delay;


void (*ref_difftest_memcpy)(word_t addr, void *buf, word_t n,
                            bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(word_t n) = NULL;
void (*ref_difftest_raise_intr)(word_t NO) = NULL;

static bool is_skip_ref = false;

word_t mem_img_size = -1;

void init_difftest(char *ref_so_file, word_t img_size) {
#ifdef CONFIG_DIFFTEST
  assert(ref_so_file != NULL);
  assert(img_size >= 0);
  Log("[difftest] initializing diifferential testing, the ref-so-file is "
      "%s, img-size is %d",
      ref_so_file, img_size);
  mem_img_size = img_size;
  assert(mem_img_size >= 0);
  assert(mem_img_size == img_size);

  void *handle;
  handle = dlopen(ref_so_file, RTLD_LAZY);
  assert(handle);

  ref_difftest_memcpy =
      (void (*)(word_t, void *, word_t, bool))dlsym(handle, "difftest_memcpy");
  assert(ref_difftest_memcpy);

  ref_difftest_regcpy =
      (void (*)(void *, bool))dlsym(handle, "difftest_regcpy");
  assert(ref_difftest_regcpy);

  ref_difftest_exec = (void (*)(word_t))dlsym(handle, "difftest_exec");
  assert(ref_difftest_exec);

  ref_difftest_raise_intr = (void (*)(word_t))dlsym(
      handle, "difftest_raise_intr"); // Not implemented in NEMU
  assert(ref_difftest_raise_intr);

  void (*ref_difftest_init)(int) =
      (void (*)(int))dlsym(handle, "difftest_init");
  assert(ref_difftest_init);

  ref_difftest_init(1234);
  ref_difftest_memcpy(MEM_START, guest_to_host(MEM_START), img_size,
                      DIFFTEST_TO_REF);
#else
  Log("[difftest] not enabled\n");
#endif

  return;
}

void difftest_skip_ref() {
  // is_skip_ref = true;
  // assert(is_skip_ref);
  if (delay.empty()) {
    delay.push_back(1);
    delay.push_back(0);
  } else {
    delay.push_back(0);
  }
  return;
}

void difftest_one_exec() {
  if (delay.empty()) {
    ref_difftest_exec(1);
  } else {
    if (delay.front() == 1) {
      ref_difftest_exec(1);
      delay.pop_front();
    } else {
      ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
      delay.pop_front();
    }
  }
  return;
}

bool difftest_check_reg() {
  bool success = true;
  if (is_skip_ref) {
    return true;
  }

  rtl_CPU_State ref;
  ref_difftest_regcpy(&ref, DIFFTEST_TO_DUT);
  assert(&ref != NULL);

  for (int i = 0; i < 16; ++i) {
    if (cpu.gpr[i] != ref.gpr[i]) {
      Log("[difftest] ERROR: GPR[%d] is different at PC 0x%x, ref is 0x%x, "
          "dut is 0x%x",
          i, top->io_debug_pc, ref.gpr[i], cpu.gpr[i]);
      success = false;
    }
  }

  /*for(int i = 0; i < NR_CSRs; i = i + 1){
      if(cpu.csr[i] != ref.csr[i]){
          printf("[difftest] ERROR: CSR[%d] (not real index) is different at PC
  0x%x, ref is 0x%lx, dut is 0x%lx\n", i, cpu.pc, ref.csr[i], cpu.csr[i]);
          return false;
      }
  }*/
  return success;
}