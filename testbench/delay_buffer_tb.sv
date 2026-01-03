module delay_buffer_tb(); 
    logic clk, rst;
    logic [15:0] in [2:0];
    logic [15:0] out [2:0];
    logic refer;

    delay_buffer dut (.clk(clk), .rst(rst), .in(in), .out(out));
    

    initial begin
        $dumpfile ("waves/delay_buffer_tb.vcd");
        $dumpvars(0, delay_buffer_tb);  

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
        in[0] = 16'd1;
        in[1] = 16'd2;
        in[2] = 16'd3;
        forever @(posedge clk);
        $finish;

    end


endmodule