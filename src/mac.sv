module mac(
    input logic clk,
    input logic rst,
    input logic en, //need?
    input logic [15:0] A,
    input logic [15:0] B,
    input logic valid,
    output logic [31:0] acc,
    output logic [15:0] A_out,
    output logic [15:0] B_out
    output logic valid_out
);

    logic mult1, mult2;
    logic [2:0] valid_shift;

    always_ff @(posedge clk or negedge rst) begin //ASIC might have to change setup
        if(~rst) begin
            //blah
            mult1 <= 16'd0;
            mult2 <= 16'd0;
            acc <= 32'd0;
            A_out <= 16'd0;
            B_out <= 16'd0;
            valid_out <= 1'b0;
            valid_shift <= 0;
        end else begin
            A_out <= A;
            B_out <= B;
            valid_shift <= valid_shift{valid_shift[2], valid};
            if(valid_shift|) begin
                mult1 <= A * B; //CHECK if fpga has MAC in DS 
                if(valid_shift[2]) begin
                    acc <= mult2 + acc;
                    valid_shift <= 0;
                    valid_out <= 1'b1;
                end else 
                    valid_out <= 1'b0;
            end else
                valid_out <= 1'b0;
        end
    end
endmodule