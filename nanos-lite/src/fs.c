#include "debug.h"
#include <common.h>
#include <fs.h>

typedef size_t (*ReadFn)(void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn)(const void *buf, size_t offset, size_t len);
size_t ramdisk_read(void *buf, size_t offset, size_t len);
size_t ramdisk_write(const void *buf, size_t offset, size_t len);

typedef struct {
  char *name;
  size_t size;
  size_t disk_offset;
  ReadFn read;
  WriteFn write;
  size_t open_offset;
} Finfo;

enum { FD_STDIN, FD_STDOUT, FD_STDERR, FD_FB };

size_t invalid_read(void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

size_t invalid_write(const void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

/* This is the information about all files in disk. */
static Finfo file_table[] __attribute__((used)) = {
    [FD_STDIN] = {"stdin", 0, 0, invalid_read, invalid_write},
    [FD_STDOUT] = {"stdout", 0, 0, invalid_read, invalid_write},
    [FD_STDERR] = {"stderr", 0, 0, invalid_read, invalid_write},
#include "files.h"
};

void init_fs() {
  // TODO: initialize the size of /dev/fb
  for (int i = 0; i < ARRAY_SIZE(file_table); i++) {
    file_table[i].open_offset = 0;
  }
}

int fs_open(const char *pathname, int flags, int mode) {
  for (int i = 0; i < ARRAY_SIZE(file_table); i++) {
    if (strcmp(file_table[i].name, pathname) == 0) {
      return i;
    }
  }
  assert(0);
}

size_t fs_read(int fd, void *buf, size_t len) {
  if (fd <= 2) {
    return 0;
  }
  Log("fd = %x", fd);
  if (fd < 0 || fd >= ARRAY_SIZE(file_table)) {
    return -1;
  }
  if (file_table[fd].read == NULL) {
    if (file_table[fd].open_offset < file_table[fd].size) {
      size_t rest = file_table[fd].size - file_table[fd].open_offset;
      size_t real_len = rest <= len ? rest : len;
      ramdisk_read(buf, file_table[fd].disk_offset + file_table[fd].open_offset,
                   real_len);
      file_table[fd].open_offset += real_len;
      return real_len;
    } else {
      return 0;
    }
  } else {
    return file_table[fd].read(buf, file_table[fd].open_offset, len);
  }
}

size_t fs_write(int fd, const void *buf, size_t len) {
  if (fd <= 2) {
    return 0;
  }
  Log("fd = %x", fd);
  if (fd < 0 || fd >= ARRAY_SIZE(file_table)) {
    return 0;
  }
  if (file_table[fd].write == NULL) {
    if (file_table[fd].open_offset < file_table[fd].size) {
      size_t rest = file_table[fd].size - file_table[fd].open_offset;
      size_t real_len = rest <= len ? rest : len;
      ramdisk_write(buf,
                    file_table[fd].disk_offset + file_table[fd].open_offset,
                    real_len);
      file_table[fd].open_offset += real_len;
      return real_len;
    } else {
      return 0;
    }
  } else {
    return file_table[fd].write(buf, file_table[fd].open_offset, len);
  }
}

size_t fs_lseek(int fd, size_t offset, int whence) {
  Log("fd = %d, offset = %ld, whence = %d", fd, offset, whence);
  if (fd < 0 || fd >= ARRAY_SIZE(file_table)) {
    return -1; // 无效的文件描述符
  }

  size_t new_offset;
  switch (whence) {
  case SEEK_SET:
    if (offset >= file_table[fd].size) {
      return -1; // 偏移量超出文件大小
    }
    new_offset = offset;
    break;
  case SEEK_CUR:
    if (file_table[fd].open_offset + offset >= file_table[fd].size) {
      return -1; // 溢出或超出文件范围
    }
    new_offset = file_table[fd].open_offset + offset;
    break;
  case SEEK_END:
    Log("file_table[fd].size + offset - 1 = %d", file_table[fd].size + offset - 1);
    Log("file_table[fd].size = %d", file_table[fd].size);
    if (file_table[fd].size + offset >= file_table[fd].size) {
      return -1; // 溢出或超出文件范围
    }
    new_offset = file_table[fd].size + offset;
    break;
  default:
    return -1; // 无效的 whence 参数
  }
  file_table[fd].open_offset = new_offset;
  Log("new_offset = %x", new_offset);
  return file_table[fd].open_offset; // 返回新的文件指针位置
}

int fs_close(int fd) { return 0; }