`timescale 1ns / 1ps

module accumulator (clk, sm_op, selection, data_in, c_bus, data_out, mem_out);
	input clk, selection;
	input [15:0] data_in, c_bus;
	input [1:0] sm_op;
	output [15:0] data_out;
	output [15:0] mem_out;
	reg [15:0] mem_out=0;
	reg [15:0] data_out=0;
	
	parameter LOAD = 2'b01, INC = 2'b10, LOAD_C = 2'b11, IDLE = 2'b00;
	
	always@(posedge clk)
	begin
		if (selection) //only used in writing to the register. not used in reading bcz current data is already stored in data_out
			case (sm_op)
				LOAD: begin data_out <= data_in; 
								mem_out <= data_in; end
				LOAD_C: begin data_out <= c_bus; 
								mem_out <= c_bus; end
				INC:  begin data_out <= data_out + 16'd1; 
								mem_out <= mem_out + 16'd1; end
				
			endcase
	end
	
endmodule
	

