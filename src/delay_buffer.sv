module delay_buffer #(
    parameter N = 3
)(
    input logic clk,
    input logic rst,
    input logic [15:0] in [N-1 : 0],
    output logic [15:0] out [N-1 : 0]
);

    genvar i;
    generate
        for(i = 0; i < N; i = i + 1) begin : gen_delay_blocks
            if(i == 0) begin : zero_delay
                always_ff @(posedge clk or negedge rst) begin
                    if(~rst) begin
                        out[i] <= 16'd0;
                    end else begin
                        out[i] <= in[i];
                    end
                end
            end else begin : shift_delay
                logic [15:0] delay_reg [i-1:0];
                always_ff @(posedge clk or negedge rst) begin
                    if(~rst) begin
                        out[i] <= 16'd0;
                        for(int k = 0; k < i; k++) begin
                            delay_reg[k] <= 16'd0;
                        end
                    end else begin
                        delay_reg[0] <= in[i];
                        for (int k = 1; k < i; k++) begin
                            delay_reg[k] <= delay_reg[k-1];
                        end
                        out[i] <= delay_reg[i-1];
                    end
                end
            end
        end
    endgenerate

endmodule