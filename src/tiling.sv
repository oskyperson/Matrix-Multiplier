module tiling #(
    parameter SIZE = 6,
    parameter N = 3
)(
    input logic clk,
    input logic rst,
    input logic [15:0] A [SIZE-1:0][SIZE-1:0],
    input logic [15:0] B [SIZE-1:0][SIZE-1:0]
    output logic [31:0] result [SIZE-1:0], result[SIZE-1:0]
);

    logic load;
    logic valid, done

    logic [31:0] result_rows [N - 1:0];
    logic [15:0] weight_tile [N-1:0][N-1:0];
    logic [15:0] A_row [N - 1:0];

    systolic array(.clk(clk), .rst(rst), .en(1), .load(load), .A_row(A_row), .weights(weight_tile), .valid(valid), .result_rows(result_rows), .done(done));






endmodule