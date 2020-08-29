`timescale 1ns / 1ps

module SM(clk,IR, z, 
			bflag,
			reg_control,
			sel, //newly added to choose between IRAM and DRAM
			pc,
			ar,
			r,
			r1,
			r2,
			r3,
			r4,
			r5,
			tr,
			tr2,
			tr4,
			ac,
			ir,
			aluop, finish);		
input clk, z;
input [5:0] IR;
output reg [3:0] bflag;
output reg [1:0] reg_control, sel;
output reg pc,r,r1,r2,r3,r4,r5,tr,tr2,tr4,ac,ar,ir;
output reg [2:0] aluop;
output reg finish;
reg [5:0] PS, NS = FETCH1;
parameter 
	FETCH1 = 7'd1,
	FETCH2 = 7'd2,
	FETCH3 = 7'd3;

always@(posedge clk) PS <= NS;
	always@(PS or z or IR)
	case(PS)
		FETCH1:begin
		bflag <= 		4'd1; // pc to bus
		reg_control <= 2'b01; //write signal
		sel <= 			1;
		pc <= 			0;
		ar <= 			1;//write to ar
		r <= 				0;
		r1 <=				0;
		r2 <= 			0;
		r3 <= 			0;
		r4 <=				0;
		tr <=				0;
		tr2 <= 			0;
		tr4 <= 			0;
		ac <=				0;
		ir <= 			0;
		aluop <= 		0;
		//fetch <= 		1;
		finish <=		0;
		NS <= FETCH2; end
		
		FETCH2:begin
		bflag <= 		4'd0; //memory 
		reg_control <= 2'b11; //increment
		sel <= 			1;
		pc <= 			1; // enable PC
		ar <= 			0;
		r <= 				0;
		r1 <=				0;
		r2 <= 			0;
		r3 <= 			0;
		r4 <=				0;
		tr <=				0;
		tr2 <= 			0;
		tr4 <= 			0;
		ac <=				0;
		ir <= 			0;
		aluop <= 		0;
		//fetch <= 		1;
		finish <=		0;
		NS <= FETCH3; end
		
		FETCH3:begin
		bflag <= 		4'd0;
		reg_control <= 2'b01; //write
		sel <= 			1;
		pc <= 			0;
		ar <= 			0;
		r <= 				0;
		r1 <=				0;
		r2 <= 			0;
		r3 <= 			0;
		r4 <=				0;
		tr <=				0;
		tr2 <= 			0;
		tr4 <= 			0;
		ac <=				0;
		ir <= 			1;
		aluop <= 		0;
		//fetch <= 		1;
		finish <=		0;
		NS <= IR; end
		
		endcase

endmodule
