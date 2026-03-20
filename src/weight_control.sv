module weight_control #(
    parameter SIZE = 8,
    parameter N = 4
)(
    input logic clk,
    input logic rst,
    input logic en,
    input logic [$clog2((SIZE * SIZE)/(N * N))-1:0] tile_num,
    output logic[$clog2(N)-1:0] col_sel, //row sel? 
    output logic [15:0] weight,
    output logic weight_valid
);

    logic [$clog2(SIZE)-1:0] row, col;
    logic [$clog2(SIZE/N)-1:0] tile_x, tile_y;
    logic [$clog2(SIZE * SIZE)-1:0] addr;
    logic [$clog2(N)-1:0] col_pipe;
    logic valid_pipe;
    
    assign col_sel = col;
    assign {tile_y, tile_x} = tile_num;

    always_ff @(posedge clk or negedge rst) begin
        if(~rst) begin
            row <= 0;
            col <= 0;
            weight_valid <= 0;
            col_pipe <= 0;
            valid_pipe <= 0;
            addr <= 0;
        end else begin
            if(en) begin
                if(row == N-1) begin
                    col <= col + 1;
                    row <= 0;
                    valid <= 1'b1;
                end else begin
                    row <= row + 1;
                end
            end
            valid_pipe <= en;
            col_pipe <= col;
            weight_valid <= valid_pipe;
            col_sel <= col_pipe;
        end
    end

    always_comb begin
        addr = (tile_y * N * SIZE) + (tile_x * N) + (row * SIZE) + col; //TODO simplify using the fact we linearly index
    end

    memory weight_mem (.clk(clk), .rst(rst), .wr(0), .addr(addr), .data_in(0), .data_out(weight));




endmodule