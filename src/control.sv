module control #(parameter N = 3)(
    input logic clk,
    input logic rst,
    input logic en,
    input logic [15:0] A [N - 1:0][N - 1:0],
    input logic [15:0] B [N - 1:0][N - 1:0],
    //input logic load,
    output logic [31:0] result [N - 1:0][N - 1:0]
);

    typedef enum logic[2:0] {IDLE, LOAD, MATH, DONE} state_t;
    state_t current_state, next_state;
    logic [4:0] counter;

    logic [15:0] A_row [N - 1:0];
    logic [31:0] acc [N-1:0];
    logic load;

    systolic array(.clk(clk), .rst(rst), .en(en), .A_row(A_row), .weights(B), .result(acc), .load(load));

    /*always_ff @(posedge clk or negedge rst) begin
        if(~rst) begin
            //divider <= 0;
            //count <= 0;
        end else begin
            if(en) begin
                //A_row <= A[count];
                for(int i = 0; i < N; i++) begin
                    A_row[i] <= A[count][i];
                    result[count][i] <= acc[i];
                end
                count <= count + 1;
            end
        end
    end*/

    always_ff @(posedge clk or negedge rst) begin
        if(~rst) begin
            current_state <= IDLE;
            //next_state <= IDLE;
            counter <= 0;
        end else begin
            current_state <= next_state;
            if(en)
                counter <= counter + 1;
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
                next_state = MATH;
            end 
            MATH: begin
                load = 1'b0;
                for(int i = 0; i < N; i++) begin
                    A_row[i] = A[counter/3][i];
                    result[counter][i] = acc[i];
                end
                next_state = (counter == 18) ? DONE : MATH;
            end
            DONE: begin
                $finish;
            end
            default: begin
                $display("huh");
            end
        endcase
    end


endmodule