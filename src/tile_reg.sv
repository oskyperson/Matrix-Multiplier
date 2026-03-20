module tile_reg #(
    parameter SIZE = 8,
    parameter N = 4
)(   
    input logic clk,
    input logic rst,
    input logic [15:0] data_in,
    input logic we,
    input logic re,
    input logic addr,
    output logic [15:0] data_out
);
    logic [16:0] mem [0:(SIZE*2*SIZE)-1];
    always_ff @(posedge clk or posedge rst) begin
        if(rst) begin
        end else begin
            if(we) begin
                mem[addr] <= data_in;
            end else if(re) begin
                data_out <= mem[addr];
            end            
        end
    end

  //our scratchpad where stuff gets stored BRAM apparently?


endmodule