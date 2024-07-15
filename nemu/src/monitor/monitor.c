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
#include <elf.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <memory/paddr.h>
#include <memory/vaddr.h>

void init_rand();
void init_log(const char *log_file);
void init_mem();
void init_difftest(char *ref_so_file, long img_size, int port);
void init_device();
void init_sdb();
void init_disasm(const char *triple);
void init_iringbuf();

// typedef struct
// {
//   const char *st_name; /* Symbol name (string tbl index) */
//   Elf32_Addr st_value; /* Symbol value */
//   Elf32_Word st_size;  /* Symbol size */
// } FUNC_ITEM;

// typedef struct
// {
//   FUNC_ITEM *tb; /* Symbol name (string tbl index) */
//   size_t size;
// } FUNC_TBL;

// FUNC_TBL f_tbl = {};

// void init_func_tbl()
// {
//   f_tbl.tb = NULL;
//   f_tbl.size = 0;
// }

// static void gen_func_tbl(const void *elf)
// {

//   return;
// }

// int check_func_tbl(vaddr_t *pc)
// {
//   for (size_t i = 0; i < f_tbl.size; i++)
//   {
//     if (*pc == f_tbl.tb[i].st_value)
//     {
//       return START_FUNC;
//     }

//     if (*pc == f_tbl.tb[i].st_value + f_tbl.tb[i].st_size - 1)
//     {
//       return END_FUNC;
//     }
//   }
//   return IN_FUNC;
// }

// void del_func_tbl()
// {
//   free(f_tbl.tb);
// }

static void welcome()
{
  Log("Trace: %s", MUXDEF(CONFIG_TRACE, ANSI_FMT("ON", ANSI_FG_GREEN), ANSI_FMT("OFF", ANSI_FG_RED)));
  IFDEF(CONFIG_TRACE, Log("If trace is enabled, a log file will be generated "
                          "to record the trace. This may lead to a large log file. "
                          "If it is not necessary, you can disable it in menuconfig"));
  Log("Build time: %s, %s", __TIME__, __DATE__);
  printf("Welcome to %s-NEMU!\n", ANSI_FMT(str(__GUEST_ISA__), ANSI_FG_YELLOW ANSI_BG_RED));
  printf("For help, type \"help\"\n");
}

#ifndef CONFIG_TARGET_AM
#include <getopt.h>

void sdb_set_batch_mode();

static char *log_file = NULL;
static char *diff_so_file = NULL;
static char *img_file = NULL;
static char *elf_file = NULL;
static int difftest_port = 1234;

const void *string_table = NULL;
const Elf32_Sym *symbol_table = NULL;
Elf32_Word sym_tbl_nums;

static long load_img()
{
  if (img_file == NULL)
  {
    Log("No image is given. Use the default build-in image.");
    return 4096; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  Assert(fp, "Can not open '%s'", img_file);

  // 将文件指针移动到文件末尾
  fseek(fp, 0, SEEK_END);

  // 获取文件指针当前位置（即文件大小）并存储在 size 变量中
  long size = ftell(fp);

  Log("The image is %s, size = %ld", img_file, size);

  // 将文件指针重置到文件开头
  fseek(fp, 0, SEEK_SET);

  // 将 镜像文件 读入内存（pmem）
  int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  // 返回镜像大小
  return size;
}

static int parse_args(int argc, char *argv[])
{
  const struct option table[] = {
      {"batch", no_argument, NULL, 'b'},
      {"log", required_argument, NULL, 'l'},
      {"diff", required_argument, NULL, 'd'},
      {"port", required_argument, NULL, 'p'},
      {"img", optional_argument, NULL, 'i'},
      {"elf", optional_argument, NULL, 'e'},
      {"help", no_argument, NULL, 'h'},
      {0, 0, NULL, 0},
  };
  int o;
  while ((o = getopt_long(argc, argv, "-bhl:d:p:i:e:", table, NULL)) != -1)
  {
    switch (o)
    {
    case 'b':
      sdb_set_batch_mode();
      break;
    case 'p':
      sscanf(optarg, "%d", &difftest_port);
      break;
    case 'l':
      log_file = optarg;
      break; // 当命令行指定 -l 参数，将全局静态变量 log_file 设置成 日志文件 路径
    case 'd':
      diff_so_file = optarg;
      break;
    case 'i':
      img_file = optarg;
      break; // 当命令行指定 -i 参数，将全局静态变量 img_file 设置成 镜像文件 路径
    case 'e':
      printf("asxasca %s \n", optarg);
      elf_file = optarg;
      break; // 当命令行指定 -e 参数，将全局静态变量 elf_file 设置成 镜像文件 路径
    default:
      printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
      printf("\t-b,--batch              run with batch mode\n");
      printf("\t-l,--log=FILE           output log to FILE\n");
      printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
      printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
      printf("\t-i,--img=IMG_FILE       run img file\n");
      printf("\t-e,--elf=ELF_FILE       load elf file\n");
      printf("\n");
      exit(0);
    }
  }
  return 0;
}
#ifdef CONFIG_FTRACE_COND
static long parse_elf()
{

  if (elf_file == NULL)
  {
    Log("No elf is given.");
    return 0;
  }

  struct stat stats;
  stat(elf_file, &stats);
  long size = stats.st_size;
  int fd = open(elf_file, O_RDONLY);
  const void *elf = mmap(0, stats.st_size, PROT_READ, MAP_SHARED, fd, 0);

  const Elf32_Ehdr *elf_header = elf;
  const Elf32_Shdr *section_table = elf + elf_header->e_shoff;

  Elf32_Word sym_tbl_entsize = 0;
  Elf32_Word sym_tbl_size = 0;

  for (size_t i = 0, j = 0; i < elf_header->e_shnum; i++)
  {
    if (j == 2)
    {
      break;
    }

    if (section_table[i].sh_type == SHT_STRTAB)
    {
      string_table = elf + section_table[i].sh_offset;
      ++j;
    }

    if (section_table[i].sh_type == SHT_SYMTAB)
    {
      sym_tbl_size = section_table[i].sh_size;
      sym_tbl_entsize = section_table[i].sh_entsize;
      symbol_table = elf + section_table[i].sh_offset;
      ++j;
    }
  }

  sym_tbl_nums = sym_tbl_size / sym_tbl_entsize;
  close(fd);
  // 返回镜像大小
  return size;
}
#endif


const char *find_funct_symbol(uint32_t addr)
{
  for (size_t i = 0; i < sym_tbl_nums; i++)
  {
    if (ELF32_ST_TYPE(symbol_table[i].st_info) == STT_FUNC && addr >= symbol_table[i].st_value && addr < symbol_table[i].st_value + symbol_table[i].st_size)
    {
      // funct_name = string_table + symbol_table[i].st_name;
      // printf("funct_name:%s\n", (char *)(string_table + symbol_table[i].st_name));
      return (char *)(string_table + symbol_table[i].st_name);
    }
  }
  return "???";
}

void init_monitor(int argc, char *argv[])
{
  /* Perform some global initialization. */

  /* Parse arguments. */
  parse_args(argc, argv);

  /* Set random seed. */
  init_rand();

  /* Open the log file. */
  init_log(log_file);

  /* Initialize memory. */
  init_mem();

  /* Initialize devices. */
  IFDEF(CONFIG_DEVICE, init_device());

  /* Perform ISA dependent initialization. */
  init_isa();

  /* Load the image to memory. This will overwrite the built-in image. */
  long img_size = load_img();

#ifdef CONFIG_FTRACE_COND
  if (FTRACE_COND)
  {
    parse_elf();
  }
#endif

  // /* generat function table. */
  // gen_func_tbl(elf_file);

  /* Initialize differential testing. */
  init_difftest(diff_so_file, img_size, difftest_port);

  /* Initialize the simple debugger. */
  init_sdb();

  /* Initialize the instructions ring buffer. */
  init_iringbuf();

#ifndef CONFIG_ISA_loongarch32r
  IFDEF(CONFIG_ITRACE, init_disasm(
                           MUXDEF(CONFIG_ISA_x86, "i686",
                                  MUXDEF(CONFIG_ISA_mips32, "mipsel",
                                         MUXDEF(CONFIG_ISA_riscv,
                                                MUXDEF(CONFIG_RV64, "riscv64",
                                                       "riscv32"),
                                                "bad"))) "-pc-linux-gnu"));
#endif

  /* Display welcome message. */
  welcome();
}
#else // CONFIG_TARGET_AM
static long load_img()
{
  extern char bin_start, bin_end;
  size_t size = &bin_end - &bin_start;
  Log("img size = %ld", size);
  memcpy(guest_to_host(RESET_VECTOR), &bin_start, size);
  return size;
}

void am_init_monitor()
{
  init_rand();
  init_mem();
  init_isa();
  load_img();
  IFDEF(CONFIG_DEVICE, init_device());
  welcome();
}
#endif
