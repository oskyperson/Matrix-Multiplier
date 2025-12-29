module control #(parameter N = 3)(
    input logic clk,
    input logic rst,
    input logic [15:0] A [N - 1:0][N - 1:0],
    input logic [15:0] B [N - 1:0][N - 1:0],
    output logic [31:0] result [N - 1:0][N - 1:0],
    output logic result_valid
);
    logic [15:0] A_row [N - 1:0];
    logic [15:0] B_col [N - 1:0];
    logic [31:0] result [N - 1:0][N - 1:0];

    logic [N] count;

    systolic array(.clk(clk), .rst(rst), .en(open), .A_row(A_row), .B_col(B_col), .result(result), .result_valid(result_valid));

    always @(posedge clk or negedge rst) begin
        if(~rst) begin
            count <= 0;
        end else begin
            if(result_valid) begin
                count <= count + 1; 
            end
            A_row = A[count];
            B_col = B[count];
        end
    end



endmodule