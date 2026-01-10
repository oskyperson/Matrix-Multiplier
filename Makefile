.PHONY: sim_%
sim_%:
	@echo -e "Setting up simulation\n"
	@mkdir -p build && rm -rf build/*
	@verilator -binary -Wno-UNUSEDSIGNAL -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC -j 0 --Mdir build --trace -y src testbench/$*_tb.sv
	@echo -e "Start praying that your code works"
	@build/V$*_tb
	@echo -e "Read and weep"
