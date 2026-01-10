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

    typedef enum logic[2:0] {LOAD, PROCESSING, STORE, ACCUMULATE} state_t;
    state_t state, next_state;

    logic load;
    logic valid, done;

    logic [31:0] result_rows [N - 1:0]; 
    logic [15:0] weight_tile [N-1:0][N-1:0]; //LOCAL STORAGE
    logic [15:0] ac_tile [N-1:0][N-1:0];

    logic ac_en, ac_sel, valid_ac;
    logic [$clog2((SIZE * SIZE)/(N * N))-1:0] tile_num;
    logic [15:0] row_out [N-1:0];

    logic [$clog2(N)-1:0] counter;

    imem_control activation_master (.clk(clk), .rst(rst), .en(ac_en), .sel(ac_sel), .tile_num(tile_num), .row_out(row_out), .valid(valid_ac));


    //load actiation tile
    always_ff @(posedge clk) begin
        if(valid_ac) begin
            for(int i = 0; i < N; i++) begin
                ac_tile[counter][i] <= row_out[i];
            end
            counter <= counter + 1;
        end
    end

    always_ff @(posedge clk) begin
        if(valid_ac) begin
            











    logic [15:0] A_row [N - 1:0];

    systolic array(.clk(clk), .rst(rst), .en(1), .load(load), .A_row(A_row), .weights(weight_tile), .valid(valid), .result_rows(result_rows), .done(done));
   
    address_master amem(.clk(clk), .rst(rst), .wr(awr), .addr(aaddr), .data_in(adin), .data_out(adout));







endmodule