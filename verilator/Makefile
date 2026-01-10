TOP ?= RegularConvFull_SA_Tiled
SV  ?= ../build/verilog/$(TOP).sv
TB  ?= tb_rc_sa_tiled.cpp
OUT ?= build

all: $(OUT)/V$(TOP)

$(OUT)/V$(TOP): $(SV) $(TB)
	verilator -cc $(SV) --top-module $(TOP) \
	  --exe $(TB) \
	  -O3 --trace \
	  -CFLAGS "-std=c++17 -O3" \
	  -Mdir $(OUT)
	$(MAKE) -C $(OUT) -f V$(TOP).mk V$(TOP)

run: all
	./$(OUT)/V$(TOP)

clean:
	rm -rf $(OUT)
