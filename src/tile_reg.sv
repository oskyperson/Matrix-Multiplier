module tile_reg #(
    parameter SIZE = 6,
    parameter N = 3
)(
    input logic clk,
    input logic rst,
    input logic [15:0] A [N-1:0][N-1:0],
    input logic [15:0] weight_tile [N-1:0][N-1:0]
    input logic valid,
    input logic load,
    input logic wr,
    output logic [15:0] A_row [N - 1:0],
    output logic [15:0] weights [N-1:0][N-1:0]
);

    always_ff @(posedge clk or negedge rst) begin
        if(rst) begin
        end else begin
            if(wr) begin

        end
    end



endmodule