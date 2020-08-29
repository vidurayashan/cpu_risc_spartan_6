`timescale 1ns / 1ps

module demux(bflag,PC,R,R1,R2,R3,R4,R5,TR,TR2,TR4,AC,Mem,B_bus);
	input [3:0] bflag;
	input [15:0] PC,R,R1,R2,R3,R4,R5,TR,TR2,TR4,AC;
	input [7:0] Mem;
	output [15:0] B_bus;
	reg [15:0] B_bus;
	
	always @(bflag or PC or R or R1 or R2 or R3 or R4 or R5 or TR or TR2 or TR4 or AC or Mem)
		begin
		case(bflag)
			4'd1:B_bus = PC;
			4'd2:B_bus = R;
			4'd3:B_bus = R1;
			4'd4:B_bus = R2;
			4'd5:B_bus = R3;
			4'd6:B_bus = R4;
			4'd7:B_bus = TR;
			4'd8:B_bus = TR2;
			4'd9:B_bus = TR4;
			4'd10:B_bus = AC;
			4'd11:B_bus = {8'b00000000,Mem};
			4'd12:B_bus = R5;
			
		endcase
		end
endmodule
