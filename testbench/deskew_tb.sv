module deskew_tb(); 
    logic clk, rst;
    logic [15:0] in [2:0];
    logic [15:0] out [2:0];
    logic refer;

    

    initial begin
        $dumpfile ("waves/deskew_tb.vcd");
        $dumpvars(0, deskew_tb);  

        forever #10 clk = ~clk;
    end

    task reset();
        begin
            clk = 1'b0;
            refer = 1'b0;
            //result_valid = 1'b0;
            rst = 1'b1;
            @(posedge clk);
            @(posedge clk);
            rst = 1'b0;
            @(posedge clk);
            @(posedge clk);
            rst = 1'b1;
            @(posedge clk);
            @(posedge clk);
        end
    endtask

    initial begin
        reset();
        refer = 1'b1;
        in[0] = 32'd1;
        @(posedge clk);
        @(posedge clk);
        in[1] = 32'd2;
        @(posedge clk);
        @(posedge clk);
        in[2] = 32'd3
        forever @(posedge clk);
        $finish;

    end


endmodule