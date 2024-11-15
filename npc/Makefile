BUILD_DIR = ./build
CSRC += $(shell find $(abspath ./sim) -name "*.cpp")
VSRC = $(shell find $(NPC_HOME)/build -name "*.sv")
HSRC += $(shell find $(abspath ./sim) -name "*.h")
TOP_NAME := Top
SEARCHPATH := $(NPC_HOME)/build

VERILATOR_FLAGS += -I$(SEARCHPATH)
VERILATOR_FLAGS += --top $(TOP_NAME)
#Usage: Debug -> GDB, Trace -> wave
#VERILATOR_FLAGS += --trace --cc --exe --debug --build
VERILATOR_FLAGS += --trace --debug --cc --exe --build
VERILATOR_FLAGS += -Wno-lint
VERILATOR_FLAGS += -Wno-style
VERILATOR_FLAGS += -Wno-UNUSED

INC_PATH		?= $(NPC_HOME)/sim/include
CFLAGS			+= -g -I$(INC_PATH)
CFLAGS			+= -I$(INC_PATH)
LDFLAGS			+= -lreadline -lSDL2 -ldl

DIFFTEST		:= $(NEMU_HOME)/build/riscv32-nemu-interpreter-so
OBJ_DIR			:= ./obj_dir
BIN				:= $(OBJ_DIR)/V$(TOP_NAME)

IMG				?= ../am-kernels/tests/cpu-tests/build/wanshu-riscv32e-npc.bin

ARGS ?=

RUN_FLAGS		+= --img=${IMG} --diff=${DIFFTEST}
# RUN_FLAGS		+= -b
NPC_EXEC		:= ${BIN} $(ARGS) ${RUN_FLAGS}
NEMU_EXEC       += -e$(ELF)

.PHONY:run gdb wave clean

com:${CSRC} ${VSRC}
	@verilator ${VERILATOR_FLAGS} ${CSRC} ${VSRC} $(addprefix -CFLAGS , $(CFLAGS)) -LDFLAGS -lSDL2 -LDFLAGS -lreadline

run:com
	$(call git_commit, "sim NPC")
	@${NPC_EXEC}

gdb:com ${DIFFTEST}
	$(call git_commit, "gdb NPC")
	@gdb --silent -s ${BIN} --args ${NPC_EXEC}

wave:
	@gtkwave $(OBJ_DIR)/dump.vcd

clean:
	rm -rf ${OBJ_DIR}

verilog:
	mkdir -p $(BUILD_DIR)
	-rm $(BUILD_DIR)/* -r
	mill -i Feng_3000.runMain Feng_3000.Elaborate --target-dir $(BUILD_DIR)

