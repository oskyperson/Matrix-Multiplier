module control #(parameter N = 3)(
    input logic clk,
    input logic rst,
    input logic en,
    input logic [15:0] A [N - 1:0][N - 1:0],
    input logic [15:0] B [N - 1:0][N - 1:0],
    //input logic load,
    output logic [31:0] result [N - 1:0][N - 1:0]
);

    typedef enum logic[2:0] {IDLE, LOAD, LOAD2, FILL, PROCESSING, DONE} state_t;
    state_t current_state, next_state;
    logic [99:0] counter;

    logic [15:0] A_row [N - 1:0];
    logic [31:0] acc [N-1:0];
    logic [31:0] result_rows [N-1:0];
    logic load;
    logic valid, done, done_prev;
    logic en2;
    logic capture;
    logic start, start_done;
    logic trig;

    systolic array(.clk(clk), .rst(rst), .en(en), .A_row(A_row), .weights(B), .result(acc), .load(load), .valid(valid), .done(done), .start(valid), .start_done(start_done));

    deskew finish(.clk(clk), .rst(rst), .in(acc), .out(result_rows), .en(capture));

    always_ff @(posedge clk or negedge rst) begin
        if(~rst) begin
            current_state <= IDLE;
            //next_state <= IDLE;
            counter <= 0;
        end else begin
            current_state <= next_state;
            if(en & en2)
                counter <= counter + 1; 
            else if(~en2) 
                counter <= 0;
        end
    end

    always_comb begin
        case(current_state)
            IDLE: begin
                if(en)
                    next_state = LOAD;
                else
                    next_state = IDLE;
            end 
            LOAD: begin
                load = 1'b1;
                next_state = LOAD2;
                trig = 1'b0;
            end 
            LOAD2: begin
                load = 1'b0;
                next_state = FILL;
                trig = 1'b1;
                capture = 1'b1;
            end
            FILL: begin
                //load = 1'b0;
                trig = 1'b0;
                en2 = 1'b1;
                for(int i = 0; i < N; i++) begin
                    A_row[i] = A[counter][i];
                end
                if(counter == N-1) begin
                    en2 = 1'b0;
                    next_state = PROCESSING;
                end
            end
            PROCESSING: begin
                for(int i = 0; i < N; i++) begin
                    result[counter][i] = acc[i];
                end
                if((done_prev == 1) & (done == 0)) begin
                    next_state = DONE;
                end
            end
            DONE: begin
                capture = 1'b0;
            end
            default: begin
                $display("huh");
            end
        endcase
    end

    always_ff @(posedge clk) begin
        valid <= trig;
        done_prev <= done;
    end

endmodule