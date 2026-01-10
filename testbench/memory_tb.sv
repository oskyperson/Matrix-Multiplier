module memory_tb();
    logic clk, rst, en, sel;
    logic [3:0] tile_num;
    logic [15:0] row;
    logic valid;

    memory dut(.clk(clk), .rst(rst), .addr(7'd2), .sel(0), .data_out(row));
    initial begin
        $dumpfile ("waves/memory_tb.vcd");
        $dumpvars(0, memory_tb);  

        clk = 1'b0;
        forever #10 clk = ~clk;
    end
endmodule