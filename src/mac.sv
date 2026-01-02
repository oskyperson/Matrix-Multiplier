module mac(
    input logic clk,
    input logic rst,
    input logic en, //need?
    input logic [15:0] A,
    input logic [31:0] partial,
    input logic [15:0] weight_temp,
    input logic load,
    output logic [31:0] partial_out,
    output logic [15:0] A_out
);



    logic [15:0] weight;
    logic [31:0] acc;

    logic [31:0] mult1;

    logic load_detected;

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
                A_out <= A;
                //mult1 <= A * weight;
                acc <= (A*weight) + partial; //TODO multistage MAC
                partial_out <= (A*weight);
            end else begin
                A_out <= A;
                acc <= acc;
            end
        end
    end



    /*
    always_ff @(posedge clk or negedge rst) begin //ASIC might have to change setup
        if(~rst) begin
            //blah
            mult1 <= 32'd0;
            acc <= 32'd0;
            A_out <= 16'd0;
            B_out <= 16'd0;
            valid_out <= 1'b0;
            valid_shift <= 0;
        end else begin
            if(en) begin
                A_out <= A;
                B_out <= B;
                valid_shift <= {valid_shift[1:0], valid};
                if(|valid_shift) begin
                    mult1 <= A * B; //CHECK if fpga has MAC in DS 
                    if(valid_shift[2]) begin
                        acc <= mult1 + acc;
                        valid_shift <= 0;
                        valid_out <= 1'b1;
                    end else 
                        valid_out <= 1'b0;
                end else
                    valid_out <= 1'b0;
            end else begin
                A_out <= A_out;
                B_out <= B_out;
                valid_out <= valid_out;
            end
        end
    end*/
endmodule