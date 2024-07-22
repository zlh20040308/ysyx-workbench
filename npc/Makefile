TOPNAME = top
NXDC_FILES = constr/top.nxdc
INC_PATH ?=

VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --build --trace -cc  \
				-O3 --x-assign fast --x-initial fast --noassert

BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)
RUNBIN = $(BIN)_run
SIMBIN = $(BIN)_sim
PRJ = playground
VSRCS_DIR = $(BUILD_DIR)/vsrc

$(shell mkdir -p $(VSRCS_DIR))

test:
	mill -i $(PRJ).test

verilog:
	$(call git_commit, "generate verilog")
	rm -rf $(VSRCS_DIR)
	mkdir -p $(VSRCS_DIR)
	mill -i $(PRJ).runMain Elaborate --target-dir $(VSRCS_DIR)

help:
	mill -i $(PRJ).runMain Elaborate --help

reformat:
	mill -i __.reformat

checkformat:
	mill -i __.checkFormat


default: $(SIMBIN)

$(shell mkdir -p $(BUILD_DIR))

# constraint file
SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)
$(SRC_AUTO_BIND): $(NXDC_FILES)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@

# project source
VSRCS = $(shell find $(abspath ./$(BUILD_DIR)/vsrc) -name "*.sv")
CSRCS = $(shell find $(abspath ./src/main/cc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
RUNCSRCS = $(CSRCS) $(SRC_AUTO_BIND)
SIMCSRCS = $(CSRCS)

# rules for NVBoard
include $(NVBOARD_HOME)/scripts/nvboard.mk

# rules for verilator
INCFLAGS = $(addprefix -I, $(INC_PATH))
CXXFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""

$(RUNBIN): $(VSRCS) $(RUNCSRCS) $(NVBOARD_ARCHIVE)
	rm -rf $(OBJ_DIR)
	rm -rf ./*.vcd
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		--top-module $(TOPNAME) $^ \
		$(addprefix -CFLAGS , $(CXXFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))

$(SIMBIN): $(VSRCS) $(SIMCSRCS) $(NVBOARD_ARCHIVE)
	rm -rf $(OBJ_DIR)
	rm -rf ./*.vcd
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		--top-module $(TOPNAME) $^ \
		$(addprefix -CFLAGS , $(CXXFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))

clean:
	rm -rf $(BUILD_DIR)
	rm -rf ./*.vcd

all: default

sim: $(SIMBIN)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by yourself."
	@$(BIN)

run: $(RUNBIN)
	@$(BIN)

.PHONY: test verilog help reformat checkformat clean default all sim run $(BIN) 

-include ../Makefile
