TOP = test_top
GTKWAVE = gtkwave

V_SRC += ./vsrc/soc/test_top.v
V_SRC += ./vsrc/core/core_top.v
V_SRC += $(wildcard ./vsrc/core/exe/*.v)
V_SRC += $(wildcard ./vsrc/core/id/*.v)
V_SRC += $(wildcard ./vsrc/core/if/*.v)
V_SRC += $(wildcard ./vsrc/core/mem/*.v)
V_SRC += $(wildcard ./vsrc/core/wb/*.v)
V_SRC += $(wildcard ./vsrc/core/mul/*.v)
V_SRC += $(wildcard ./vsrc/device/*.v)

TESTBENCH_SRC = $(wildcard ./tb/*.cpp)
VTOP = ./vsrc/soc/${TOP}.v
INC = -Ivsrc/include
PROG = test
PROG_S = $(wildcard ./test_src/*.S)

.DEFAULT_GOAL := all
all: vhdl

obj_dir/V${TOP}.mk: ${V_SRC} ${TESTBENCH_SRC} 
	verilator -Wno-WIDTH -Wno-UNUSED -Wno-CASEINCOMPLETE --Wno-PINMISSING -Wno-SELRANGE -Wno-UNOPTFLAT --cc --exe ${TESTBENCH_SRC} ${INC} ${V_SRC} --trace
	
obj_dir/V${TOP}.exe : obj_dir/V${TOP}.mk
	$(MAKE) -C obj_dir -f V$(TOP).mk

test_src/${PROG}.bin:
	$(MAKE) -C test_src

.PHONY : vhdl
vhdl: obj_dir/V${TOP}.mk

.PHONY : run
run: test_src/${PROG}.bin obj_dir/V${TOP}.exe 
	obj_dir/V${TOP} test_src/${PROG}.bin 

.PHONY : test
test: run
	cd isa && \
	make && \
	cd ../ && \
	python3 test_all_isa.py

.PHONY : wave
wave: run
	${GTKWAVE} wave.vcd

.PHONY : clean
clean:
	rm -rf obj_dir wave.vcd
	rm -rf test_src/*.elf test_src/*.bin
	rm -rf isa/generated/*