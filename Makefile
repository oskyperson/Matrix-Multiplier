.PHONY: sim_%
sim_%s:
	@echo -e "Setting up simulation\n"
	@mkdir -p build && rm -rf build/*
	@verilator -binary -Wno-UNOPTFLAT -j 0 --Mdir build --trace -y src testbench/$*_tb.sv