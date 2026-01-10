module amem_control #(
    parameter SIZE = 6,
    parameter N = 3
)(
    input logic clk,
    input logic rst,
    input logic sel,
    output logic [31:0] row_out [N-1:0]
);

endmodule