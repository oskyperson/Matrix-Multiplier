module delay_buffer #(
    parameter N = 3,
    parameter WIDTH = 16
)(
    input logic clk,
    input logic rst,
    input logic [WIDTH-1:0] in [(N*N) : 0],
    output logic [WIDTH-1:0] out [(N*N) : 0] 
);

    genvar i;
    for(i = 0; i < (N*N); i++) begin : row_delay
        if(i == 0) begin : zero
            assign out = in;
        end else begin : chain
            logic [WIDTH-1:0] delay [i-1:0];
            
            always_ff @(posedge clk or negedge rst) begin
                if(~rst) begin
                    for(int k = 0; k < i; k++) 
                        delay[k] <= 0;
                end else begin
                    delay[0] <= in[i];
                    for (int k = 1; k < i; k++) begin
                        delay[k] <= delay[k-1];
                    end
                    out[i] <= delay[i-1];
                end
            end
        end
    end
endmodule