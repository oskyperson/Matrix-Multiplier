module systolic_tb(); 
    logic clk, rst, result_valid, en, counter_en;
    logic [15:0] A [2:0][2:0];
    logic [15:0] B [2:0][2:0];
    logic [31:0] result [2:0][2:0];
    logic [99:0] counter;
    
    systolic dut(.clk(clk), .rst(rst), .A(A), .B(B), .result(result), .result_valid(result_valid), .en(en));

    initial begin
        $dumpfile ("waves/systolic_tb.vcd");
        $dumpvars(0, systolic_tb);  

        forever #10 clk = ~clk;
    end

    task reset();
        begin
            clk = 1'b0;
            //result_valid = 1'b0;
            en = 1'b0;
            rst = 1'b1;
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
        end
    endtask

    task test1();
        begin
            // Manual assignment for Matrix A
            /*A[0][0] = 5;   A[0][1] = 12;  A[0][2] = 7;
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
            $display("%0d %0d %0d", B[2][0], B[2][1], B[2][2]);*/
            en = 1'b1;
            counter_en = 1'b1;

            $display("BLAH BLAH");
        end
    endtask

    initial begin
        reset();
        test1();
    end

    always_ff @(posedge clk) begin
            if(counter_en) begin
                counter <= counter + 1;
                $display("CYCLE \n");
                $display("%0d %0d %0d", result[0][0], result[0][1], result[0][2]);
                $display("%0d %0d %0d", result[1][0], result[1][1], result[1][2]);
                $display("%0d %0d %0d", result[2][0], result[2][1], result[2][2]);
            end
            if(counter > 40) begin
                counter_en = 1'b0;
                $finish;
            end
    end

endmodule