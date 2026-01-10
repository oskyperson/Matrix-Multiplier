module mac(
    input logic clk,
    input logic rst,
    input logic en, //need?
    input logic valid_h,
    input logic valid_v,
    input logic [15:0] A,
    input logic [31:0] partial,
    input logic [15:0] weight_temp,
    input logic load,
    output logic [31:0] partial_out,
    output logic [15:0] A_out,
    output logic valid_h_out,
    output logic valid_v_out
    output logic [15:0]weight_out;
    output logic load_out
);


    logic [15:0] A_use, A_c1;
    logic valid_v_done, valid_h_done;
    logic [15:0] weight;
    logic [31:0] acc;
    logic [31:0] mult1;

    logic load_detected;

    always_ff @(posedge clk or negedge rst) begin
        if(~rst) begin
            A_use <= 0;
            A_c1 <= 0;
            A_out <= 0;

            valid_h_out <= 0;
            valid_h_done <= 0;

            valid_v_out <= 0;
            valid_v_done <= 0;
        end else begin
            if(en) begin
                //A_use <= A_c1;
                //A_c1 <= A;
                A_use <= A;

                //valid_h_out <= valid_h_done;
                //valid_h_done <= valid_h;

                valid_v_out <= valid_v_done;
                valid_v_done <= valid_v;
                //valid_v_out <= valid_v;
                valid_h_out <= valid_h;
            end
        end
    end

    //loading weights and multiplicaiton 
    //TODO should weight trickle
    always_ff @(posedge clk or negedge rst) begin
        load_out <= load;
        weight_out <= weight_temp; 
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
                A_out <= A;
                mult1 <= A_use * weight; //ASIC 
                partial_out <= mult1 + partial;
                acc <= acc + partial + mult1;
            end else begin
                A_out <= A_use;
                acc <= acc;
            end
        end
    end

endmodule