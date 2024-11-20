TOPNAME = Top
INC_PATH ?=


VERILATOR = verilator
VERILATOR_FLAGS += -MMD --trace --debug --cc --exe --build
VERILATOR_FLAGS += -Wno-lint
VERILATOR_FLAGS += -Wno-style
VERILATOR_FLAGS += -Wno-UNUSED

BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)

default: $(BIN)

$(shell mkdir -p $(BUILD_DIR))

VSRCS = $(shell find $(abspath ../build) -name "*.sv")
CSRCS = $(shell find $(abspath ./) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
NPC_OBJS := $(shell find $(abspath $(OBJ_DIR)) -name "*.o")
-include $(NPC_OBJS:.o=.d)



INCFLAGS = $(addprefix -I, $(INC_PATH))
CXXFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""
CXXFLAGS += -MMD -O3 



$(BIN): $(VSRCS) $(CSRCS)
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_FLAGS) \
		--top-module $(TOPNAME) $^ \
		$(addprefix -CFLAGS , $(CXXFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))

run: $(BIN)
	# $(BIN) $(NEMU_HOME)/../am-kernels/tests/cpu-tests/build/wanshu-riscv32e-npc.bin
	$(BIN) /home/feng/code/riscv-tests/save/rv32ui-p-beq.bin