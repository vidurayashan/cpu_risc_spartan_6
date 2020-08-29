`timescale 1ns / 1ps

module sel_addr(sm_op, ar, dram, iram);

input [1:0] sm_op;
input [15:0] ar;
output reg [6:0] iram;
output reg [15:0] dram;

always @(sm_op or ar)
begin
	case (sm_op)
		2'd1: iram = ar;
		2'd2: dram = ar;
		
	endcase
end

endmodule
