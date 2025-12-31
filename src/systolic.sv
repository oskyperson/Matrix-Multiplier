module systolic #(parameter N = 3)(
    input logic clk,
    input logic rst,
    input logic en, //need?
    input logic load,
    input logic [15:0] A_row [N - 1:0],
    input logic [15:0] weights [N - 1:0][N - 1:0],
    output logic [31:0] result [N-1:0]
);
    logic [15:0] A_pass [(N*N) : 0];
    logic [31:0] partial_pass [(N*N) : 0];
    logic [31:0] acc_arr [(N*N) : 0];

    assign result = acc_arr[(N*N)-1 : (N*N) - N];

    
    genvar k;
    generate
        for(k = 0; k < (N*N); k = k + 1) begin : FULL_SYSTOLIC

            if(k == 0) begin
                mac zerozero(.clk(clk), .rst(rst), .en(en), .A(A_row[0]), .partial(0), .weight_temp(weights[0][0]), .load(load), .acc(acc_arr[0]), .A_out(A_pass[k]));
            end else if(k%N == 0) begin
                mac left_col(.clk(clk), .rst(rst), .en(en), .A(A_row[k/N]), .partial(acc_arr[k-N]),.weight_temp(weights[k%N][k-N]), .load(load), .acc(acc_arr[k]), .A_out(A_pass[k]));
            end else if(k < N) begin
                mac top_row(.clk(clk), .rst(rst), .en(en), .A(A_pass[k-1]), .partial(0), .weight_temp(weights[0][k]), .load(load), .acc(acc_arr[k]), .A_out(A_pass[k]));
            end else begin
                mac filler(.clk(clk), .rst(rst), .en(en), .A(A_pass[k-1]), .partial(acc_arr[k-N]), .weight_temp(weights[k%N][k-N]), .load(load), .acc(acc_arr[k]), .A_out(A_pass[k]));
            end
        end
           
    endgenerate

    /*logic [N*N : 0] valid_bits;
    logic [15:0] A_pass [(N*N)];
    logic [15:0] B_pass [(N*N)];

    logic [31:0] acc_arr [N - 1:0][N - 1:0];
    assign result_valid = valid_bits[(N*N)];
    assign result = acc_arr;

    genvar k;
    generate
        for(k = 0; k < (N*N); k = k + 1) begin : FULL_SYSTOLIC

                logic [31:0] acc;

                //Datapath
                if(k == 0) begin
                    mac left_col(.clk(clk), .rst(rst), .en(en), .A(A_row[0]), .B(B_col[0]), .valid(1), .acc(acc_arr[0][0]), .A_out(A_pass[0]), .B_out(B_pass[0]), .valid_out(valid_bits[k]));
                end
                else if(k%N == 0) begin
                    mac left_col(.clk(clk), .rst(rst), .en(en), .A(A_row[k/N]), .B(B_pass[k-N]), .valid(valid_bits[k-1]), .acc(acc_arr[k/N][k%N]), .A_out(A_pass[k]), .B_out(B_pass[k]), .valid_out(valid_bits[k]));
                end else if(k < N) begin
                    mac top_row(.clk(clk), .rst(rst), .en(en), .A(A_pass[k-1]), .B(B_col[k%N]), .valid(valid_bits[k-1]), .acc(acc_arr[k/N][k%N]), .A_out(A_pass[k]), .B_out(B_pass[k]), .valid_out(valid_bits[k]));
                end else begin
                    mac filler(.clk(clk), .rst(rst), .en(en), .A(A_pass[k-1]), .B(B_pass[k-N]), .valid(valid_bits[k-1]), .acc(acc_arr[k/N][k%N]), .A_out(A_pass[k]), .B_out(B_pass[k]), .valid_out(valid_bits[k]));
                end
        end
           
    endgenerate
    */

endmodule
