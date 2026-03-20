module tiling #(
    parameter SIZE = 8,
    parameter N = 4
)(
    input logic clk,
    input logic rst,
    input logic [15:0] A [SIZE-1:0][SIZE-1:0],
    input logic [15:0] B [SIZE-1:0][SIZE-1:0]
    output logic [31:0] result [SIZE-1:0], result[SIZE-1:0]
);

    typedef enum logic[2:0] {LOAD_WEIGHT, FLOW_WEIGHT, LOAD_ACTIVATION, PROCESS, SAVE} state_t;
    state_t state, next_state;

    logic [31:0] result_rows [N - 1:0]; 
    logic [15:0] weight_tile [N-1:0][N-1:0]; 
    logic [15:0] ac_tile [N-1:0][N-1:0];

 
    logic [$clog2((SIZE * SIZE)/(N * N))-1:0] tile_num_wg;
    logic [$clog2((SIZE * SIZE)/(N * N))-1:0] tile_num_ac;  


    logic [$clog2(N)-1:0] load_weights;
    logic load;
    weight_control weight_ctrl (.clk(clk), .rst(rst), .en(wg_en), .tile_num(tile_num_wg), .col_sel(col_sel), .weight(weight), .weight_valid(load));
    
    

    systolic array(.clk(clk), .rst(rst), .en(1), .load(load), .A_row(A_row), .weights(weight_tile), .valid(valid), .result_rows(result_rows), .done(done));
   
   

endmodule