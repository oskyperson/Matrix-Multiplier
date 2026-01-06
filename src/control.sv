module control #(parameter N = 3)(
    input logic clk,
    input logic rst,
    input logic en,
    input logic read,
    input logic [15:0] A [N - 1:0][N - 1:0],
    input logic [15:0] B [N - 1:0][N - 1:0],
    output logic [31:0] final_result [N - 1:0][N - 1:0],
    output logic done_out
);

    typedef enum logic[2:0] {IDLE, LOAD, PROCESSING, DONE} state_t;
    state_t state, next_state;
    logic [15:0] counter, counter2;
    logic [15:0] A_row [N - 1:0];
    logic [31:0] acc [N-1:0];
    logic [31:0] result_rows [N-1:0];
    logic load;
    logic valid, done, done_prev, delay_valid;
    logic en2, en3;
    logic capture;
    logic start, start_done, start_done_prev;
    logic trig;

    systolic array(.clk(clk), .rst(rst), .en(en), .A_row(A_row), .weights(B), .result_rows(acc), .load(load), .valid(delay_valid), .done(done));
    fifo storage(.clk(clk), .rst(rst), .en(done), .in(acc), .read(read), .out(final_result));
    assign done_out = done;
    always_ff @(posedge clk or negedge rst) begin
        if(~rst) begin
            state <= IDLE;
            counter <= 0;
            //en2 <= 0;
            counter2 <= 0;
        end else begin
            state <= next_state;

            if(en2) begin
                counter <= counter + 1;
            end 

            if(en3) 
                counter2 <= counter2 + 1;

            done_prev <= done;
            delay_valid <= valid;

        end
    end

    assign en3 = done;

    always_comb begin
        case(state)
            IDLE: begin
                if(en)
                    next_state = LOAD;
            end
            LOAD: begin
                load = 1'b1;
                next_state = PROCESSING;
                
                valid = 1'b1;
            end
            PROCESSING: begin
                load = 1'b0;
                valid = 1'b0;
                if(counter == N) begin
                    en2 = 1'b0;
                end else begin
                    en2 = 1'b1;
                end

                for(int i = 0; i < N; i++) begin
                    A_row[i] = (en2) ? A[counter][i] : 0;
                end
            end
            default : begin
                $display("HOWD U GET HERE");
            end
        endcase
    end


endmodule