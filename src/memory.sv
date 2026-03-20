module memory #(
    parameter SIZE = 8,
    parameter N = 4
)(
    input logic clk,
    input logic rst,
    input logic wr,
    input logic [$clog2(SIZE * SIZE)-1:0] addr,
    input logic [31:0] data_in,
    output logic [15:0] data_out
);

   

    logic [15:0] mem [0:(SIZE * SIZE)-1]; //TODO fix sizing formula

    always_ff @(posedge clk) begin
        if(wr) begin
            mem[addr] <= data_in;
        end else begin
            data_out <= mem[addr];
        end
    end

    /*initial begin
       
        mem = '{
            // =========================
            // Matrix A (8x8)  [0..63]
            // =========================
            1,  2,  3,  4,  5,  6,  7,  8,
            3,  3,  4,  5,  6,  7,  8,  9,
            19,  4,  5,  6,  7,  8,  9, 10,
            4,  5,  6,  7,  8,  9, 10, 11,
            5,  6,  7,  8,  9, 10, 11,  1,
            6,  7,  8,  9, 10, 11,  1,  2,
            7,  8,  9, 10, 11,  1,  2,  3,
            8,  9, 10, 11,  1,  2,  3,  4,

            // =========================
            // Matrix B (8x8)  [64..127]
            // =========================
            11, 10,  9,  8,  7,  6,  5,  4,
            10,  9,  8,  7,  6,  5,  4,  3,
            9,  8,  7,  6,  5,  4,  3,  2,
            8,  7,  6,  5,  4,  3,  2,  1,
            7,  6,  5,  4,  3,  2,  1,  0,
            6,  5,  4,  3,  2,  1,  0,  1,
            5,  4,  3,  2,  1,  0,  1,  2,
            4,  3,  2,  1,  0,  1,  2,  3
        };

    end */


   
endmodule
