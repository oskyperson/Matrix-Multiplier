module imem_control_tb();
    logic clk, rst, en, sel;
    logic [$clog2((8 * 8)/(4* 4))-1:0] tile_num;
    logic [15:0] row [3:0];
    logic valid;

    imem_control dut (.clk(clk), .rst(rst), .en(en), .sel(sel), .tile_num(tile_num), .row_out(row), .valid(valid));

    initial begin
        $dumpfile ("waves/imem_control_tb.vcd");
        $dumpvars(0, imem_control_tb);  

        clk = 1'b0;
        forever #10 clk = ~clk;
    end

    initial begin
        sel = 1'b0;
        tile_num = 4'd0;
        en = 1'b0;
        rst = 1'b1;
        @(posedge clk);
        @(posedge clk);
        rst = 1'b0;
        @(posedge clk);
        @(posedge clk);
        rst = 1'b1;
        $display("wait 10");
        repeat(20) begin
            @(posedge clk);
        end




        sel = 1'b0;
        tile_num = 4'd0;
        @(posedge clk);
        en = 1'b1;
        repeat(100) begin
            @(posedge clk);
        end
    end
endmodule