module mac(
    input logic clk,
    input logic rst,
    input logic en, //need?
    input logic valid,
    input logic [15:0] A,
    input logic [31:0] partial,
    input logic [15:0] weight_temp,
    input logic load,
    output logic [31:0] partial_out,
    output logic [15:0] A_out,
    output logic valid_out
);


    logic [15:0] A_use, A_c1;
    logic valid_done;
    logic [15:0] weight;
    logic [31:0] acc;
    logic [31:0] mult1;

    logic load_detected;

    always_ff @(posedge clk or negedge rst) begin
        if(~rst) begin
            A_use <= 0;
            A_c1 <= 0;
            A_out <= 0;

            valid_out <= 0;
            valid_done <= 0;
        end else begin
            if(en) begin
                A_use <= A_c1;
                A_c1 <= A;

                valid_out <= valid_done;
                valid_done <= valid;
            end
        end
    end

    //loading weights and multiplicaiton 
    //TODO should weight loading also be a trickle down?
    always_ff @(posedge clk or negedge rst) begin
        if(~rst) begin
            mult1 <= 0;
            load_detected <= 0;
            acc <= 0;
        end else begin
            if(load && !load_detected) begin
                weight <= weight_temp;
                load_detected <= 1'b1;
            end else begin
                load_detected <= 1'b0;
            end
            if(en) begin
                A_out <= A_use;
                mult1 <= A_use * weight; //ASIC 
                partial_out <= mult1 + partial;
            end else begin
                A_out <= A_use;
                acc <= acc;
            end
        end
    end

endmodule