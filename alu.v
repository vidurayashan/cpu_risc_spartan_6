`timescale 1ns / 1ps

module alu(A_bus,B_bus,op,C_bus,Z);
	input [15:0] A_bus;
	input [15:0] B_bus;
	input [2:0] op;
	output[15:0] C_bus;
	output reg Z=0;
	reg [15:0] C_bus;
	parameter ADD=3'd5, DECAC=3'd1, SHIFT4=3'd2, SHIFT3=3'd3, SHIFT2=3'd4, NOP=3'd0, SUB=3'd6;
	always@(op) // need to change the op
		begin
			case (op)
			ADD: begin C_bus=A_bus+B_bus;
				  Z=0;end
			SUB: begin 
					if (A_bus - B_bus > 0) begin
						C_bus = A_bus - B_bus;
						Z=0; end
					else
						begin
						C_bus = B_bus - A_bus;
						Z=1; end	
					end
			DECAC: begin C_bus = A_bus - 16'd1;
					if (A_bus-16'd1 == 0) Z=1;
					else Z=0;
					end
			SHIFT4:begin C_bus= A_bus >> 4;
					Z=0;end
			SHIFT3:begin C_bus= A_bus >> 3;
					Z=0;end
			SHIFT2:begin C_bus= A_bus >> 2;             
					Z=0;end
			endcase
		end
endmodule	