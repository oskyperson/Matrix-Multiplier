module deskew #(
    parameter N = 3
)(
    input logic clk,
    input logic rst,
    input logic en,
    input logic [31:0] in [N-1 : 0],
    output logic [31:0] out [N-1 : 0]
);

    genvar i;
    generate
        for(i = N-1; i >= 0; i = i - 1) begin : gen_delay_blocks
            if(i == N-1) begin : zero_delay
                always_ff @(posedge clk or negedge rst) begin
                    if(~rst) begin
                        out[i] <= 32'd0;
                    end else begin
                        if(en)
                            out[i] <= in[i];
                    end
                end
            end else begin : shift_delay
                    logic [31:0] delay_reg [i-1:0];
                    always_ff @(posedge clk or negedge rst) begin
                        if(~rst) begin
                            out[i] <= 32'd0;
                            for(int k = 0; k < i; k++) begin
                                delay_reg[k] <= 32'd0;
                            end
                        end else begin
                            if(en) begin
                                delay_reg[0] <= in[i];
                                for (int k = 1; k < i; k++) begin
                                    delay_reg[k] <= delay_reg[k-1];
                                end
                                out[i] <= delay_reg[i-1];
                            end
                        end
                    end
                end
            end
    endgenerate

endmodule