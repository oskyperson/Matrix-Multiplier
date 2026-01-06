module deskew #(
    parameter N = 3,
    parameter WIDTH = 32
)(
    input logic clk,
    input logic rst,
    input logic en,
    input logic [N-1:0] v_in,
    input logic [WIDTH-1:0] in [N-1 : 0],
    output logic [WIDTH-1:0] out [N-1 : 0],
    output logic [N-1:0] v_out
);

    genvar i;
    generate
        for (i = 0; i < N; i++) begin : gen_deskew
            localparam int SIZE = N - i - 1;
            if (SIZE == 0) begin : gen_nodelay
                logic [WIDTH-1:0] stall;
                logic stall_v;
                always_ff @(posedge clk or negedge rst) begin
                    if (!rst)
                        out[i] <= '0;
                    else if (en) begin
                        stall <= in[i];
                        out[i] <= stall;

                        stall_v <= v_in[i];
                        v_out[i] <= stall_v;
                    end
                end
            end
            else begin : gen_delay
                logic [WIDTH-1:0] delay [SIZE:0];
                logic delay_v [SIZE:0];

                always_ff @(posedge clk or negedge rst) begin
                    if (!rst) begin
                        delay <= '{default:'0};
                        out[i] <= '0;
                        v_out[i] <= '0;
                    end else if (en) begin
                        delay <= '{delay[SIZE-1:0], in[i]};
                        out[i] <= delay[SIZE];

                        delay_v <= '{delay_v[SIZE-1:0], v_in[i]};
                        v_out[i] <= delay_v[SIZE];
                    end
                end
            end
        end
    endgenerate

endmodule





/*module deskew #(
    parameter N = 3,
    parameter WIDTH = 32,
    parameter LATENCY = 2
)(
    input logic clk,
    input logic rst,
    input logic en,
    input logic [N-1:0] v_in,
    input logic [WIDTH-1:0] in [N-1 : 0],
    output logic [WIDTH-1:0] out [N-1 : 0],
    output logic [N-1:0] v_out
);

    genvar i;
    generate
        for (i = 0; i < N; i = i + 1) begin : gen_delay_blocks
            localparam int STEPS = (N - 1 - i) * LATENCY;
            if (STEPS == 0) begin : no_delay
                always_ff @(posedge clk or negedge rst) begin
                    if (~rst) begin
                        out[i] <= '0;
                        v_out[i] <= 1'b0;
                    end else if (en) begin
                        out[i] <= in[i];
                        v_out[i] <= v_in[i];
                    end
                end
            end else begin : shift_delay
                logic [WIDTH-1:0] delay_reg [STEPS-1:0];
                always_ff @(posedge clk or negedge rst) begin
                    if (~rst) begin
                        for (int k = 0; k < STEPS; k++) delay_reg[k] <= '0;
                        out[i] <= '0;
                        v_out[i] <= 1'b0;
                    end else if (en) begin
                        delay_reg[0] <= {v_in[i], in[i]};
                        for (int k = 1; k < STEPS; k++) begin
                            delay_reg[k] <= delay_reg[k-1];
                        end
                        out[i] <= delay_reg[STEPS-1][WIDTH-1:0];
                        v_out[i] <= delay_reg[STEPS-1][WIDTH];
                    end
                end
                end
            end
    endgenerate

endmodule*/