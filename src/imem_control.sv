module imem_control #(
    parameter SIZE = 8,
    parameter N = 4
)(
    input logic clk,
    input logic rst,
    input logic en,
    input logic sel, //0 for A and 1 for B
    input logic [$clog2((SIZE * SIZE)/(N * N))-1:0] tile_num, //TODO math
    output logic [15:0] arr_out [N-1:0],
    output logic valid
);

    //localparam PER_ROW = SIZE/N;
    localparam OFFSET = SIZE * SIZE;

    logic [$clog2(SIZE * SIZE * 2)-1:0] iaddr;

    logic [15:0] idout;

    //logic en_delay, en_math;

    memory imem (.clk(clk), .rst(rst), .addr(iaddr), .data_out(idout));

    logic [$clog2((SIZE * SIZE/2)/(N * N))-1:0] row, col;
    logic [$clog2(N)-1:0] c_count, c_count_delay;
    logic [$clog2(N)-1:0] r_count;
    logic [$clog2(SIZE/N)-1:0] tile_x, tile_y;
    logic [15:0] row_buffer [N-1:0];

    assign {tile_y, tile_x} = tile_num;

    logic en_delay, last_col;

    always_ff @(posedge clk or negedge rst) begin
        if(~rst) begin
           
        end else if(en) begin
            if (c_count == N-1) begin
                c_count <= '0;
                r_count <= r_count + 1;  //auto wrap?
            end else begin
                c_count <= c_count + 1;
            end

            en_delay <= en;
            c_count_delay <= c_count;      
            last_col <= (c_count == N-1);

            if(en_delay) begin
                row_buffer[c_count_delay] <= idout;

                if(last_col) begin
                    valid <= 1'b1;
                    for (int i=0; i<N-1; i++) row_out[i] <= row_buffer[i];
                    row_out[N-1] <= idout;
                end else begin
                    valid <= 1'b0;
                end
            end
        end else begin
            en_delay <= 0;
            valid <= 0;
        end
    end
    
    always_comb begin
        //automatic logic [$clog2(PER_ROW)-1:0] tile_x = tile_num % PER_ROW;
        //automatic logic [$clog2(PER_ROW)-1:0] tile_y = tile_num / PER_ROW;

        iaddr = (tile_y * N * SIZE) + (tile_x * N) + (r_count * SIZE) + c_count;
        //assign iaddr = {sel, tile_y, r_count, tile_x, c_count};

        if(sel)
            iaddr = iaddr + OFFSET;
   end
            





endmodule