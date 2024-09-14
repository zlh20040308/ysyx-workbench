# Makefile for AbstractMachine Kernels and Libraries

### *Get a more readable version of this Makefile* by `make html` (requires python-markdown)
html:
	cat Makefile | sed 's/^\([^#]\)/    \1/g' | markdown_py > Makefile.html
.PHONY: html

## 1. Basic Setup and Checks

### Default to create a bare-metal kernel image
ifeq ($(MAKECMDGOALS),)
  MAKECMDGOALS  = image
  .DEFAULT_GOAL = image
endif

### Override checks when `make clean/clean-all/html`
ifeq ($(findstring $(MAKECMDGOALS),clean|clean-all|html),)

### Print build info message
$(info # Building $(NAME)-$(MAKECMDGOALS) [$(ARCH)])

### Check: environment variable `$AM_HOME` looks sane

#### 通过检查$(AM_HOME)/am/include/am.h是否存在，判断环境变量$AM_HOME是否正确设置
ifeq ($(wildcard $(AM_HOME)/am/include/am.h),)
  $(error $$AM_HOME must be an AbstractMachine repo)
endif

### Check: environment variable `$ARCH` must be in the supported list

#### ARCHS 变量将包含 $(AM_HOME)/scripts/ 目录中所有 .mk 文件的基础名字（不包含路径和扩展名）
ARCHS = $(basename $(notdir $(shell ls $(AM_HOME)/scripts/*.mk)))

#### 环境变量$(ARCH)必须是$(ARCHS)其中之一，否则报错退出
ifeq ($(filter $(ARCHS), $(ARCH)), )
  $(error Expected $$ARCH in {$(ARCHS)}, Got "$(ARCH)")
endif

### Extract instruction set architecture (`ISA`) and platform from `$ARCH`. Example: `ARCH=x86_64-qemu -> ISA=x86_64; PLATFORM=qemu`

#### 使用 subst 函数将 ARCH 变量中的所有 - 替换为空格，从而将 ARCH 按照 - 分隔成多个部分。生成的新字符串存储在 ARCH_SPLIT 变量中。
ARCH_SPLIT = $(subst -, ,$(ARCH))

#### 使用 word 函数从 ARCH_SPLIT 变量中提取第一个单词，并将其存储在 ISA 变量中
ISA        = $(word 1,$(ARCH_SPLIT))

#### 使用 word 函数从 ARCH_SPLIT 变量中提取第二个单词，并将其存储在 PLATFORM 变量中。
PLATFORM   = $(word 2,$(ARCH_SPLIT))

### Check if there is something to build

#### 如果 SRCS 未定义，输出错误消息 "Nothing to build"
ifeq ($(flavor SRCS), undefined)
  $(error Nothing to build)
endif

### Checks end here
endif

## 2. General Compilation Targets

### Create the destination directory (`build/$ARCH`)

#### 定义变量 WORK_DIR，其值为当前工作目录
WORK_DIR  = $(shell pwd)
$(info WORK_DIR is $(WORK_DIR))


#### 定义变量 DST_DIR，其值为 WORK_DIR 变量加上 "/build/$(ARCH)"
DST_DIR   = $(WORK_DIR)/build/$(ARCH)
$(info DST_DIR is $(DST_DIR))

# 使用 shell 命令创建目录 DST_DIR（包括必要的父目录）
$(shell mkdir -p $(DST_DIR))

### Compilation targets (a binary image or archive)

#### 定义变量 IMAGE_REL，其值为 build 目录下的 $(NAME)-$(ARCH)
IMAGE_REL = build/$(NAME)-$(ARCH)

#### 定义变量 IMAGE，其值为 IMAGE_REL 的绝对路径
IMAGE     = $(abspath $(IMAGE_REL))

#### 定义变量 ARCHIVE，其值为 build 目录下的 $(NAME)-$(ARCH).a
ARCHIVE   = $(WORK_DIR)/build/$(NAME)-$(ARCH).a

### Collect the files to be linked: object files (`.o`) and libraries (`.a`)

#### 定义变量 OBJS，其值为在 DST_DIR 目录下的所有对象文件（.o）
OBJS      = $(addprefix $(DST_DIR)/, $(addsuffix .o, $(basename $(SRCS))))

#### 定义变量 LIBS，值为排序后的库列表，包括 am 和 klib
LIBS     := $(sort $(LIBS) am klib) # lazy evaluation ("=") causes infinite recursions

#### 定义变量 LINKAGE，其值为所有目标文件和库文件的链接路径
LINKAGE   = $(OBJS) \
  $(addsuffix -$(ARCH).a, $(join \
    $(addsuffix /build/, $(addprefix $(AM_HOME)/, $(LIBS))), \
    $(LIBS) ))

## 3. General Compilation Flags

### (Cross) compilers, e.g., mips-linux-gnu-g++
AS        = $(CROSS_COMPILE)gcc
CC        = $(CROSS_COMPILE)gcc
CXX       = $(CROSS_COMPILE)g++
LD        = $(CROSS_COMPILE)ld
AR        = $(CROSS_COMPILE)ar
OBJDUMP   = $(CROSS_COMPILE)objdump
OBJCOPY   = $(CROSS_COMPILE)objcopy
READELF   = $(CROSS_COMPILE)readelf

### Compilation flags

#### 添加包含路径，包括 WORK_DIR 下的 include 目录，以及 AM_HOME 下的每个库的 include 目录
INC_PATH += $(WORK_DIR)/include $(addsuffix /include/, $(addprefix $(AM_HOME)/, $(LIBS)))

#### 生成包含路径的编译标志
INCFLAGS += $(addprefix -I, $(INC_PATH))

#### 定义 ARCH_H 为当前架构的头文件路径
ARCH_H := arch/$(ARCH).h

#### 生成 C 编译器的编译标志
CFLAGS   += -O2 -MMD -Wall -Werror $(INCFLAGS) \
            -D__ISA__=\"$(ISA)\" -D__ISA_$(shell echo $(ISA) | tr a-z A-Z)__ \
            -D__ARCH__=$(ARCH) -D__ARCH_$(shell echo $(ARCH) | tr a-z A-Z | tr - _) \
            -D__PLATFORM__=$(PLATFORM) -D__PLATFORM_$(shell echo $(PLATFORM) | tr a-z A-Z | tr - _) \
            -DARCH_H=\"$(ARCH_H)\" \
            -fno-asynchronous-unwind-tables -fno-builtin -fno-stack-protector \
            -Wno-main -U_FORTIFY_SOURCE -fvisibility=hidden

#### 生成 C++ 编译器的编译标志，包含 CFLAGS 并增加一些额外的标志			
CXXFLAGS +=  $(CFLAGS) -ffreestanding -fno-rtti -fno-exceptions


ASFLAGS  += -MMD $(INCFLAGS)
LDFLAGS  += -z noexecstack

## 4. Arch-Specific Configurations

### Paste in arch-specific configurations (e.g., from `scripts/x86_64-qemu.mk`)

#### -include 是一个用于有条件包含其他 Makefile 文件的指令，提供了灵活的构建配置机制。
-include $(AM_HOME)/scripts/$(ARCH).mk

### Fall back to native gcc/binutils if there is no cross compiler
ifeq ($(wildcard $(shell which $(CC))),)
  $(info #  $(CC) not found; fall back to default gcc and binutils)
  CROSS_COMPILE :=
endif

## 5. Compilation Rules

### Rule (compile): a single `.c` -> `.o` (gcc)
$(DST_DIR)/%.o: %.c
	@mkdir -p $(dir $@) && echo + CC $<
	@$(CC) -std=gnu11 $(CFLAGS) -c -o $@ $(realpath $<)

### Rule (compile): a single `.cc` -> `.o` (g++)
$(DST_DIR)/%.o: %.cc
	@mkdir -p $(dir $@) && echo + CXX $<
	@$(CXX) -std=c++17 $(CXXFLAGS) -c -o $@ $(realpath $<)

### Rule (compile): a single `.cpp` -> `.o` (g++)
$(DST_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@) && echo + CXX $<
	@$(CXX) -std=c++17 $(CXXFLAGS) -c -o $@ $(realpath $<)

### Rule (compile): a single `.S` -> `.o` (gcc, which preprocesses and calls as)
$(DST_DIR)/%.o: %.S
	@mkdir -p $(dir $@) && echo + AS $<
	@$(AS) $(ASFLAGS) -c -o $@ $(realpath $<)

### Rule (recursive make): build a dependent library (am, klib, ...)
$(LIBS): %:
	@$(MAKE) -s -C $(AM_HOME)/$* archive

### Rule (link): objects (`*.o`) and libraries (`*.a`) -> `IMAGE.elf`, the final ELF binary to be packed into image (ld)
$(IMAGE).elf: $(OBJS) $(LIBS)
	@echo + LD "->" $(IMAGE_REL).elf
	@$(LD) $(LDFLAGS) -o $(IMAGE).elf --start-group $(LINKAGE) --end-group

### Rule (archive): objects (`*.o`) -> `ARCHIVE.a` (ar)
$(ARCHIVE): $(OBJS)
	@echo + AR "->" $(shell realpath $@ --relative-to .)
	@$(AR) rcs $(ARCHIVE) $(OBJS)

### Rule (`#include` dependencies): paste in `.d` files generated by gcc on `-MMD`
-include $(addprefix $(DST_DIR)/, $(addsuffix .d, $(basename $(SRCS))))

## 6. Miscellaneous

### Build order control
image: image-dep
archive: $(ARCHIVE)
image-dep: $(OBJS) $(LIBS)
	@echo \# Creating image [$(ARCH)]
.PHONY: image image-dep archive run $(LIBS) sdb

### Clean a single project (remove `build/`)
clean:
	rm -rf Makefile.html $(WORK_DIR)/build/
.PHONY: clean

### Clean all sub-projects within depth 2 (and ignore errors)
CLEAN_ALL = $(dir $(shell find . -mindepth 2 -name Makefile))
clean-all: $(CLEAN_ALL) clean
$(CLEAN_ALL):
	-@$(MAKE) -s -C $@ clean
.PHONY: clean-all $(CLEAN_ALL)
