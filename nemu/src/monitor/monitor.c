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

void init_rand();
void init_log(const char *log_file);
void init_mem();
void init_difftest(char *ref_so_file, long img_size, int port);
void init_device();
void init_sdb();
void init_disasm(const char *triple);
void init_iringbuf();

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
      {"img", required_argument, NULL, 'i'},
      {"elf", required_argument, NULL, 'e'},
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
  Log("Machine:\t%d", elf_header->e_machine);
  Log("Type:\t%d", elf_header->e_type);

  // Log("Start of program headers:\t%d", elf_header->e_phoff);
  Log("Start of section headers:\t%d", elf_header->e_shoff);

  // const Elf32_Phdr *program_header = elf + elf_header->e_phoff;
  const Elf32_Shdr *section_header = elf + elf_header->e_shoff;
  Log("%s",(char*)(elf + section_header[1].sh_name));


  

  close(fd);
  // 返回镜像大小
  return size;
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

  /* Parse elf file. */
  parse_elf();

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
