`timescale 1ns / 1ps

module Top_module(clock, finish, iram_out, iram_addr, iram_data_in);

input clock;
input [6:0] iram_out, iram_data_in;
output reg finish;
output [6:0] iram_addr;
reg [6:0] iram_addr;

wire [6:0] sm_in;
wire [1:0] sm_op;
wire [3:0] b_flag;
wire [15:0] bus_in_pc,bus_in_r,bus_in_r1,bus_in_r2,bus_in_r3,bus_in_r4,bus_in_r5,bus_in_tr,bus_in_tr2,bus_in_tr4,bus_in_ac,bus_out;
wire [7:0] bus_in_mem;
wire [15:0] c_bus,mem_out,dram;
wire r,r1,r2,r3,r4,r5,tr,tr2,tr4,ar,ac,pc,ir;
wire [6:0] iram_out;
wire [15:0] memory;
wire write_en=0;


SM sm(clock,sm_in,z,b_flag,sm_op,sel,pc,ar,r,r1,r2,r3,r4,r5,tr,tr2,tr4,ac,ir,alu_op,finish);

alu Alu(bus_in_ac, bus_out, alu_op, c_bus, z);

demux Bus(b_flag,bus_in_pc,bus_in_r,bus_in_r1,bus_in_r2,bus_in_r3,bus_in_r4,bus_in_r5,bus_in_tr,bus_in_tr2,bus_in_tr4,bus_in_ac,bus_in_mem,bus_out);

instruction_memory IRAM (clock, write_en, iram_addr/*memory*/, iram_data_in, iram_out);

accumulator AC(clock, sm_op, ac, bus_out, c_bus, bus_in_ac, mem_out);
register_16 R(clock, sm_op, r, bus_out, bus_in_r);
register_16 R1(clock, sm_op, r1, bus_out, bus_in_r1);
register_16 R2(clock, sm_op, r2, bus_out, bus_in_r2);
register_16 R3(clock, sm_op, r3, bus_out, bus_in_r3);
register_16 R4(clock, sm_op, r4, bus_out, bus_in_r4);
register_16 R5(clock, sm_op, r5, bus_out, bus_in_r5);
register_16 TR(clock, sm_op, tr, bus_out, bus_in_tr);
register_16 TR2(clock, sm_op, tr2, bus_out, bus_in_tr2);
register_16 TR4(clock, sm_op, tr4, bus_out, bus_in_tr4);
register_16 AR(clock, sm_op, ar, bus_out, memory);
register_16 PC(clock, sm_op, pc, bus_out, bus_in_pc);
instruction_reg IR(clock, ir, iram_out, sm_in);
sel_addr SEL(sel,memory,dram,iram_addr);

endmodule
