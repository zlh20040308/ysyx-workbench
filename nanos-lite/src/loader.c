#include <elf.h>
#include <proc.h>

#ifdef __LP64__
#define Elf_Ehdr Elf64_Ehdr
#define Elf_Phdr Elf64_Phdr
#define HAHAHA 10000
#else
#define Elf_Ehdr Elf32_Ehdr
#define Elf_Phdr Elf32_Phdr
#define HAHAHA 0
#endif

extern uint8_t* ramdisk_start;

extern size_t ramdisk_read(void *buf, size_t offset, size_t len);
extern size_t ramdisk_write(const void *buf, size_t offset, size_t len);
extern void init_ramdisk();
extern size_t get_ramdisk_size();

static uintptr_t loader(PCB *pcb, const char *filename) {
  Log("%d", HAHAHA);
  const Elf_Ehdr* elf_header = (Elf_Ehdr*)&ramdisk_start;


  // 使用 assert 对 ELF 文件的魔数和其他字段进行检查
  assert(elf_header->e_ident[0] == 0x7F);
  assert(elf_header->e_ident[1] == 'E');
  assert(elf_header->e_ident[2] == 'L');
  assert(elf_header->e_ident[3] == 'F');
  Log("elf_header.e_ident = %s", elf_header->e_ident);
  // 遍历程序头表
  Log("elf_header.e_phnum = %x", elf_header->e_phnum);
  Log("elf_header.e_phoff = %d", elf_header->e_phoff);
  Log("elf_header.e_shoff = %d", elf_header->e_shoff);
  Log("elf_header.e_phentsize = %x", elf_header->e_phentsize);
  // printf("ELF loaded, entry point at: %x\n", elf_header.e_entry);

  // for (int i = 0; i < elf_header.e_phnum; i++) {
  //   Elf_Phdr phdr;
  //   size_t ph_offset = elf_header.e_phoff + i * elf_header.e_phentsize;
  //   Log("ph_offset = %x", ph_offset);

  //   Log("sizeof(phdr) = %x", sizeof(phdr));

  //   ramdisk_read(&phdr, ph_offset, sizeof(phdr));
  //   Log("phdr.p_type = %x", phdr.p_type);
  //   Log("phdr.p_vaddr = %x", phdr.p_vaddr);
  //   Log("phdr.p_filesz = %x", phdr.p_filesz);

  //   if (phdr.p_type == PT_LOAD) { // PT_LOAD 段
  //     Log("IS LOAD\n");
  //     // 将该段加载到指定内存位置
  //     ramdisk_read((void *)(uintptr_t)phdr.p_vaddr, phdr.p_offset,
  //                  phdr.p_filesz);

  //     // 如果内存段比文件中的数据大，则清零剩余部分
  //     if (phdr.p_memsz > phdr.p_filesz) {
  //       memset((void *)(uintptr_t)(phdr.p_vaddr + phdr.p_filesz), 0,
  //              phdr.p_memsz - phdr.p_filesz);
  //     }
  //   }
  // }

  printf("ELF loaded, entry point at: %x\n", elf_header->e_entry);
  return (uintptr_t)elf_header->e_entry;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void (*)())entry)();
}
