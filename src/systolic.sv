module systolic #(parameter N = 3)(
    input logic clk,
    input logic rst,
    input logic en, //need?
    input logic load,
    input logic [15:0] A_row [N - 1:0],
    input logic [15:0] weights [N - 1:0][N - 1:0],
    input logic valid,
    output logic [31:0] result_rows [N-1:0],
    output logic done
    //output logic done2
    //output logic start_done
);

    logic[15:0] A_pass [N-1:0][N-1:0];
    logic [N-1:0][N-1:0] valid_pass_v;
    logic [N-1:0][N-1:0] valid_pass_h;
    logic[15:0] A_skew [N-1:0];
    logic valid_bits [N-1:0];
    logic valid_bits_skewed [N-1:0];
    logic [31:0] result [N-1:0];

    always_comb begin
        for(int i = 0; i < N; i = i + 1) begin
            valid_bits[i] = valid;
            //valid_pass_h[i][0] = valid_bits_skewed[i];
        end
    end

        logic[31:0] par_pass [N-1:0][N-1:0];

    always_comb begin
        for(int i = 0; i < N; i++) begin
            result[i] = par_pass[N-1][i];
        end
    end

    logic [N-1:0] valid_end_skew;
    logic [N-1:0] super_valid;
    always_comb begin
        for(int i = 0; i < N; i++) begin
            valid_end_skew[i] = valid_pass_v[N-1][i];
        end
        done = super_valid[0];
        //start_done = super_valid[0];
    end

    //assign done = valid_pass_h[N-1][N-1];

    delay_buffer skew (.clk(clk), .rst(rst), .in(A_row), .out(A_skew));

    delay_buffer #(.WIDTH(1)) valids(.clk(clk), .rst(rst), .in(valid_bits), .out(valid_bits_skewed));
    
    deskew finish(.clk(clk), .rst(rst), .in(result), .out(result_rows), .en(en), .v_in(valid_end_skew), .v_out(super_valid));
    //assign result = result_rows;

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
                        .valid_h_out(valid_pass_h[0][0]),
                        .valid_h(valid_bits_skewed[0]),
                        .valid_v_out(valid_pass_v[0][0]),
                        .valid_v(valid)
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
                        .valid_h_out(valid_pass_h[r][c]),
                        .valid_h(valid_pass_h[r][c-1]),
                        .valid_v_out(valid_pass_v[r][c]),
                        .valid_v(valid_bits_skewed[c])
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
                    .valid_h_out(valid_pass_h[r][c]),
                    .valid_h(valid_bits_skewed[r]),
                    .valid_v_out(valid_pass_v[r][c]),
                    .valid_v(valid_pass_v[r-1][c])
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
                        .valid_h_out(valid_pass_h[r][c]),
                        .valid_h(valid_pass_h[r][c-1]),
                        .valid_v_out(valid_pass_v[r][c]),
                        .valid_v(valid_pass_v[r-1][c])
                    );
                end
            end
        end
    endgenerate


    /*logic [(N*2)-1 : 0] delay;
    always_ff @(posedge clk or negedge rst) begin
        if(~rst) begin
            delay <= 0;
        end else begin
            //start_done <= delay[(N*2)-1];
            delay <= {delay[(N*2)-2:0], start};
        end
    end*/

    
    //deskew #(.WIDTH(1)) mega_valid (.clk(clk), .rst(rst), .in(valid_end_skew), .out(super_valid), .en(en));
    



endmodule
