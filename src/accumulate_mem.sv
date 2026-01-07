module accumulate_mem #(
    parameter SIZE = 9,
    parameter N = 3
)(
    input logic clk,
    input logic rst,
    input logic wr,
    input logic addr,
);


    logic [31:0] mem [SIZE * SIZE - 1:0]; //TODO fix sizing formula

    always_ff @(posedge clk) begin
        if(wr) begin
            
    end

endmodule