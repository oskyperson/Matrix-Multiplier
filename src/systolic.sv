module systolic #(parameter N = 3)(
    input logic clk,
    input logic rst,
    input logic en, //need?
    input logic [15:0] A_row [N - 1:0],
    input logic [15:0] B_col [N - 1:0],
    output logic [15:0] result [N-1:0][N-1:0],
    output logic result_valid
);

    /*mac zerozero(.clk(clk), .rst(rst), .en(open), .A(), .B(B_out), .valid(), .acc(), .A_out(), .B_out(), .valid_out());
    mac zeroone(.clk(clk), .rst(rst), .en(open), .A(), .B(B_out), .valid(), .acc(), .A_out(), .B_out(), .valid_out());
    mac onezero(.clk(clk), .rst(rst), .en(open), .A(), .B(B_out), .valid(), .acc(), .A_out(), .B_out(), .valid_out());
    mac oneone (.clk(clk), .rst(rst), .en(open), .A(), .B(B_out), .valid(), .acc(), .A_out(), .B_out(), .valid_out());*/

    logic [(N*N)] valid_bits;
    logic [15:0] A_pass [(N*N)];
    logic [15:0] B_pass [(N*N)];

    logic [31:0] acc [N - 1:0][N - 1:0];
    assign result_valid = valid_bits[(N*N)];

    genvar i;
    genvar j;
    genvar k;
    generate
        k = 0;
        for(i = 0; i < N; i = i + 1) begin : SYSTOLIC_ROW
            for(j = 0; j < N; j = j + 1) begin : SYSTOLIC_COL
                logic [31:0] acc;
                //Control
                always@(posedge clk or negedge rst) begin 
                    if(~rst) begin
                    end else if() begin

                    end
                end

                //Datapath
                if((i == 0) && (j == 0)) begin
                    mac left_col(.clk(clk), .rst(rst), .en(open), .A(A_row[0]), .B(B_col[0]), .valid(1), .acc(acc[i][j]), .A_out(A_pass[0]), .B_out(B_pass[0]), .valid_out(valid_bits[k]));
                end
                else if(j == 0) begin
                    mac left_col(.clk(clk), .rst(rst), .en(open), .A(A_row[i]), .B(B_pass[k-N]), .valid(valid_bits[k-1]), .acc(acc[i][j]), .A_out(A_pass[k]), .B_out(B_pass[k]), .valid_out(valid_bits[k]));
                end else if(i == 0) begin
                    mac top_row(.clk(clk), .rst(rst), .en(open), .A(A_pass[k-1]), .B(B_col[j]), .valid(valid_bits[k-1]), .acc(acc[i][j]), .A_out(A_pass[k]), .B_out(B_pass[k]), .valid_out(valid_bits[k]));
                end else begin
                    mac filler(.clk(clk), .rst(rst), .en(open), .A(A_pass[k-1]), .B(B_pass[k-N]), .valid(valid_bits[k-1]), .acc(acc[i][j]), .A_out(A_pass[k]), .B_out(B_pass[k]), .valid_out(valid_bits[k]));
                end
                k = k + 1;
            end  
        end
    endgenerate

endmodule

[0,0] [0,1] [0,2]
[1,0] [1,1] [1,2]
[2,0] [2,1] [2,2]
