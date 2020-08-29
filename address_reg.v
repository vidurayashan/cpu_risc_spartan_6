`timescale 1ns / 1ps

module register_16 (clk, sm_op, data_in, data_out);
	input clk;
	input [15:0] data_in;
	input [1:0] sm_op;
	output [15:0] data_out;
	reg [15:0] data_out=0;
	
	parameter LOAD = 2'b00, INC = 2'b11, IDLE = 2'b10;
	
	always@(posedge clk)
	begin
		case (sm_op)
			LOAD: begin data_out <= data_in; end
			INC:  begin data_out <= data_out + 1; end
		endcase
	end
endmodule
	
