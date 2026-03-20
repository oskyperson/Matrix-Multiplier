module control_tb(); 
    logic clk, rst, result_valid, en, counter_en;
    logic [15:0] A [2:0][2:0];
    logic [15:0] B [2:0][2:0];
    logic [31:0] result [2:0][2:0];
    logic [99:0] counter;
    logic load, read;
    logic done, done_prev;

    control dut(.clk(clk), .rst(rst), .A(A), .B(B), .final_result(result), .en(en), .read(read), .done_out(done));

    initial begin
        $dumpfile ("waves/control_tb.vcd");
        $dumpvars(0, control_tb);  

        forever #10 clk = ~clk;
    end 

    task reset();
        begin
            clk = 1'b0;
            //result_valid = 1'b0;
            en = 1'b0;
            rst = 1'b1;
            load = 1'b0;
            @(posedge clk);
            @(posedge clk);
            rst = 1'b0;
            @(posedge clk);
            @(posedge clk);
            rst = 1'b1;
            @(posedge clk);
            @(posedge clk);
            counter = 0;
            counter_en = 0;
            read = 1'b0;
        end
    endtask

    task test1();
        begin
            // Manual assignment for Matrix A
            A[0][0] = 5;   A[0][1] = 12;  A[0][2] = 7;
            A[1][0] = 3;   A[1][1] = 8;   A[1][2] = 1;
            A[2][0] = 6;   A[2][1] = 2;   A[2][2] = 4;

            // Manual assignment for Matrix B
            B[0][0] = 1;   B[0][1] = 3;   B[0][2] = 5;
            B[1][0] = 2;   B[1][1] = 7;   B[1][2] = 0;
            B[2][0] = 4;   B[2][1] = 6;   B[2][2] = 8;

            // Optional: print matrices to verify
            $display("Matrix A:");
            $display("%0d %0d %0d", A[0][0], A[0][1], A[0][2]);
            $display("%0d %0d %0d", A[1][0], A[1][1], A[1][2]);
            $display("%0d %0d %0d", A[2][0], A[2][1], A[2][2]);

            $display("Matrix B:");
            $display("%0d %0d %0d", B[0][0], B[0][1], B[0][2]);
            $display("%0d %0d %0d", B[1][0], B[1][1], B[1][2]);
            $display("%0d %0d %0d", B[2][0], B[2][1], B[2][2]);
            load = 1'b1;
            @(posedge clk);
            load = 1'b0;
            @(posedge clk);
            @(posedge clk);
            en = 1'b1;
            counter_en = 1'b1;

            $display("BLAH BLAH");
        end
    endtask

    initial begin
        reset();
        test1();
        wait (done == 1);
        repeat(20) begin
            @(posedge clk);
        end
        read = 1'b1;
        @(posedge clk);
        $display("CYCLE \n");
        $display("%0d %0d %0d", result[0][0], result[0][1], result[0][2]);
        $display("%0d %0d %0d", result[1][0], result[1][1], result[1][2]);
        $display("%0d %0d %0d", result[2][0], result[2][1], result[2][2]);

    end

    always_ff @(posedge clk) begin
        done_prev <= done;
    end

endmodule