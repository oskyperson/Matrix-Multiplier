module accumulate_mem #(
    parameter SIZE = 8,
    parameter N = 4
)(
    input logic clk,
    input logic rst,
    input logic wr,
    input logic addr,
    input logic [31:0] data_in,
    output logic [31:0] data_out
);

    //addr formula = (TILE_ID * SIZE) + (Row x N) + Column

    logic [31:0] mem [SIZE * SIZE * SIZE:0]; //TODO fix sizing formula

    always_ff @(posedge clk) begin
        if(wr) begin
            mem[addr] <= data_in;
        end else begin
            data_out <= mem[addr];
        end
    end

   
endmodule