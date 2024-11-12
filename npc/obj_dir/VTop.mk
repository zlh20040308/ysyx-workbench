# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f VTop.mk

default: VTop

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /usr/local/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = VTop
# Module prefix (from --prefix)
VM_MODPREFIX = VTop
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-g \
	-I/home/feng/OS/ysyx-workbench/npc/sim/include \
	-I/home/feng/OS/ysyx-workbench/npc/sim/include \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	-lSDL2 \
	-lreadline \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	verilator-sim \
	device \
	keyboard \
	map \
	mmio \
	serial \
	timer \
	vga \
	difftest \
	time \
	mem \
	monitor \
	sdb \
	reg \
	sim-main \
	dtrace \
	etrace \
	ftrace \
	itrace \
	mtrace \
	ptrace \
	rtrace \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	/home/feng/OS/ysyx-workbench/npc/sim \
	/home/feng/OS/ysyx-workbench/npc/sim/cpu \
	/home/feng/OS/ysyx-workbench/npc/sim/device \
	/home/feng/OS/ysyx-workbench/npc/sim/device/map \
	/home/feng/OS/ysyx-workbench/npc/sim/difftest \
	/home/feng/OS/ysyx-workbench/npc/sim/helper \
	/home/feng/OS/ysyx-workbench/npc/sim/memory \
	/home/feng/OS/ysyx-workbench/npc/sim/monitor \
	/home/feng/OS/ysyx-workbench/npc/sim/register \
	/home/feng/OS/ysyx-workbench/npc/sim/trace \


### Default rules...
# Include list of all generated classes
include VTop_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

verilator-sim.o: /home/feng/OS/ysyx-workbench/npc/sim/cpu/verilator-sim.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
device.o: /home/feng/OS/ysyx-workbench/npc/sim/device/device.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
keyboard.o: /home/feng/OS/ysyx-workbench/npc/sim/device/keyboard.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
map.o: /home/feng/OS/ysyx-workbench/npc/sim/device/map/map.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
mmio.o: /home/feng/OS/ysyx-workbench/npc/sim/device/map/mmio.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
serial.o: /home/feng/OS/ysyx-workbench/npc/sim/device/serial.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
timer.o: /home/feng/OS/ysyx-workbench/npc/sim/device/timer.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
vga.o: /home/feng/OS/ysyx-workbench/npc/sim/device/vga.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
difftest.o: /home/feng/OS/ysyx-workbench/npc/sim/difftest/difftest.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
time.o: /home/feng/OS/ysyx-workbench/npc/sim/helper/time.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
mem.o: /home/feng/OS/ysyx-workbench/npc/sim/memory/mem.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
monitor.o: /home/feng/OS/ysyx-workbench/npc/sim/monitor/monitor.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
sdb.o: /home/feng/OS/ysyx-workbench/npc/sim/monitor/sdb.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
reg.o: /home/feng/OS/ysyx-workbench/npc/sim/register/reg.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
sim-main.o: /home/feng/OS/ysyx-workbench/npc/sim/sim-main.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
dtrace.o: /home/feng/OS/ysyx-workbench/npc/sim/trace/dtrace.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
etrace.o: /home/feng/OS/ysyx-workbench/npc/sim/trace/etrace.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
ftrace.o: /home/feng/OS/ysyx-workbench/npc/sim/trace/ftrace.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
itrace.o: /home/feng/OS/ysyx-workbench/npc/sim/trace/itrace.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
mtrace.o: /home/feng/OS/ysyx-workbench/npc/sim/trace/mtrace.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
ptrace.o: /home/feng/OS/ysyx-workbench/npc/sim/trace/ptrace.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
rtrace.o: /home/feng/OS/ysyx-workbench/npc/sim/trace/rtrace.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
VTop: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-
