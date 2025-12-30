module control #(parameter N = 3)(
    input logic clk,
    input logic rst,
    input logic en,
    input logic [15:0] A [N - 1:0][N - 1:0],
    input logic [15:0] B [N - 1:0][N - 1:0],
    output logic [31:0] result [N - 1:0][N - 1:0],
    output logic result_valid
);
    logic [15:0] A_row [N - 1:0];
    logic [15:0] B_col [N - 1:0];
    logic [2:0] divider;
    //logic [31:0] result [N - 1:0][N - 1:0];

    logic [$clog2(N)-1:0] count;

    systolic array(.clk(clk), .rst(rst), .en(en), .A_row(A_row), .B_col(B_col), .result(result), .result_valid(result_valid));

    always @(posedge clk or negedge rst) begin
        if(~rst) begin
            count <= -1;
            divider <= 0;
            //result_valid <= 1'b0;
            for(int i = 0; i < N; i++)
                for(int j = 0; j < N; j++)
                    result[i][j] <= 32'b0;

        end else begin
            if(divider == 2) begin
                count <= count + 1; 
                divider <= 0;
            end else begin
                divider <= divider + 1;
            end

            for(int i = 0; i < N; i++) begin
                A_row[i] = A[count][i];
                B_col[i] = B[i][count];
            end
        end
    end



endmodule