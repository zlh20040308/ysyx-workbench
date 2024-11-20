#include <common.h>
// #include <elf.h>

// #define FUNCT_HEAD 0
// #define FUNCT_BODY 1
// #define OUT_OF_FUNCT 2

char *elf_file = NULL;
// const void *string_table = NULL;
// const Elf32_Sym *symbol_table = NULL;

// long parse_elf() {

//   if (elf_file == NULL) {
//     Log("No elf is given.");
//     return 0;
//   }

//   struct stat stats;
//   stat(elf_file, &stats);
//   long size = stats.st_size;
//   int fd = open(elf_file, O_RDONLY);
//   const void *elf = mmap(0, stats.st_size, PROT_READ, MAP_SHARED, fd, 0);

//   const Elf32_Ehdr *elf_header = elf;
//   const Elf32_Shdr *section_table = elf + elf_header->e_shoff;

//   Elf32_Word sym_tbl_entsize = 0;
//   Elf32_Word sym_tbl_size = 0;

//   for (size_t i = 0, j = 0; i < elf_header->e_shnum; i++) {
//     if (j == 2) {
//       break;
//     }

//     if (section_table[i].sh_type == SHT_STRTAB) {
//       string_table = elf + section_table[i].sh_offset;
//       ++j;
//     }

//     if (section_table[i].sh_type == SHT_SYMTAB) {
//       sym_tbl_size = section_table[i].sh_size;
//       sym_tbl_entsize = section_table[i].sh_entsize;
//       symbol_table = elf + section_table[i].sh_offset;
//       ++j;
//     }
//   }

//   sym_tbl_nums = sym_tbl_size / sym_tbl_entsize;
//   close(fd);
//   // 返回镜像大小
//   return size;
// }



// const char *find_funct_symbol(uint32_t addr, char *pos) {
//   *pos = OUT_OF_FUNCT;
//   for (size_t i = 0; i < sym_tbl_nums; i++) {
//     if (ELF32_ST_TYPE(symbol_table[i].st_info) == STT_FUNC &&
//         addr >= symbol_table[i].st_value &&
//         addr < symbol_table[i].st_value + symbol_table[i].st_size) {
//       // funct_name = string_table + symbol_table[i].st_name;
//       // printf("funct_name:%s\n", (char *)(string_table +
//       // symbol_table[i].st_name));
//       if (addr == symbol_table[i].st_value) {
//         *pos = FUNCT_HEAD;
//       } else {
//         *pos = FUNCT_BODY;
//       }

//       return (char *)(string_table + symbol_table[i].st_name);
//     }
//   }
//   return "???";
// }