module systolic #(parameter N = 3)(
    input logic clk,
    input logic rst,
    input logic en, //need?
    input logic load,
    input logic [15:0] A_row [N - 1:0],
    input logic [15:0] weights [N - 1:0][N - 1:0],
    input logic start,
    input logic valid,
    output logic [31:0] result [N-1:0],
    output logic done,
    output logic start_done
);

    logic[15:0] A_pass [N-1:0][N-1:0];
    logic [N-1:0][N-1:0] valid_pass;
    logic[15:0] A_skew [N-1:0];
    

    logic[31:0] par_pass [N-1:0][N-1:0];

    always_comb begin
        for(int i = 0; i < N; i++) begin
            result[i] = par_pass[N-1][i];
        end
    end

    assign done = valid_pass[N-1][N-1];

    delay_buffer skew (.clk(clk), .rst(rst), .in(A_row), .out(A_skew));

    genvar r;
    genvar c;
    generate 
        for(r = 0; r < N; r =  r + 1) begin
            for(c = 0; c < N; c = c + 1) begin
                if((r == 0) && (c == 0)) begin
                    mac zerozero(
                        .clk(clk), 
                        .rst(rst), 
                        .en(en), 
                        .A(A_skew[0]), 
                        .partial(0),
                        .weight_temp(weights[0][0]),
                        .load(load), 
                        .partial_out(par_pass[0][0]),
                        .A_out(A_pass[0][0]),
                        .valid_out(valid_pass[0][0]),
                        .valid(valid)
                    );
                end else if(r == 0) begin
                    mac top_row(
                        .clk(clk), 
                        .rst(rst), 
                        .en(en), 
                        .A(A_pass[r][c-1]), 
                        .partial(0),
                        .weight_temp(weights[r][c]),
                        .load(load), 
                        .partial_out(par_pass[r][c]),
                        .A_out(A_pass[r][c]),
                        .valid_out(valid_pass[r][c]),
                        .valid(valid_pass[r][c-1])
                    );
                end else if(c == 0) begin
                    mac left_col(
                    .clk(clk), 
                    .rst(rst), 
                    .en(en), 
                    .A(A_skew[r]), 
                    .partial(par_pass[r-1][c]),
                    .weight_temp(weights[r][c]),
                    .load(load), 
                    .partial_out(par_pass[r][c]),
                    .A_out(A_pass[r][c]),
                    .valid_out(valid_pass[r][c]),
                    .valid(valid_pass[r-1][c])
                );
                end else begin
                    mac tile(
                        .clk(clk), 
                        .rst(rst), 
                        .en(en),
                        .A(A_pass[r][c-1]), 
                        .partial(par_pass[r-1][c]),
                        .weight_temp(weights[r][c]),
                        .load(load), 
                        .partial_out(par_pass[r][c]),
                        .A_out(A_pass[r][c]),
                        .valid_out(valid_pass[r][c]),
                        .valid(valid_pass[r-1][c])
                    );
                end
            end
        end
    endgenerate


    logic [(N*2)-1 : 0] delay;
    always_ff @(posedge clk or negedge rst) begin
        if(~rst) begin
            delay <= 0;
        end else begin
            start_done <= delay[(N*2)-1];
            delay <= {delay[(N*2)-2:0], start};
        end
    end





endmodule
