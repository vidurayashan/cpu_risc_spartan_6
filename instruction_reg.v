`timescale 1ns / 1ps

module instruction_reg (clk, fetch, data_in, data_out);
	input clk, fetch;
	input [6:0] data_in;
	output [6:0] data_out;
	reg [6:0] data_out=0;
	
	always@(posedge clk)
	begin
		if (fetch)
			data_out <= data_in;
	end
endmodule
	

