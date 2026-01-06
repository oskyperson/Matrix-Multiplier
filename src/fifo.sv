module fifo #(parameter N = 3)(
    input logic clk,
    input logic rst,
    input logic en,
    input logic [31:0] in [N-1:0],
    input logic read,
    output logic [31:0] out [N-1:0][N-1:0]
);
    logic [31:0] mem [N-1:0][N-1:0];
    logic [8:0] addr;
    logic [2:0] shift;
    logic en2, ctrl;
    assign en2 = shift[2];
    assign ctrl = en | en2;
    always_ff @(posedge clk or negedge rst) begin
        if(~rst) begin
            //clear out
            addr <= 0;
        end else begin
            shift <= {shift[1:0], en};
            if(ctrl) begin
                for(int i = 0; i < N; i = i + 1) begin
                    mem[addr][i] <= in[i];
                end

                addr <= addr + 1;

                if(addr > N - 1) begin
                    addr <= 0;
                end
            end

            if(read) begin
                for(int i = 0; i < N; i = i + 1) begin
                    for(int j = 0; j < N; j = j + 1) begin
                        out[i][j] <= mem[i][j];
                    end
                end
            end
        end
    end
endmodule