`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:14:05 10/19/2015 
// Design Name: 
// Module Name:    single 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module single(clk,t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,s0,s1,s2,s3,s4,s5,s6,s7,pcout);

output [31:0] pcout;
wire [31:0] pcin,pcout,IMout,regout1,regout2,ALUout,DMout,mux2out,regwrdata,shift2out,shift1out,signout,datamemout;
wire [31:0] add1out,mux5in1,mux5in0,mux4in1;
wire RegDst,Jump,Branch,MemRead,MemtoReg,MemWrite,ALUSrc,RegWrite,ALUzero,BranchandZero;
wire [1:0] ALUOp;
wire [3:0] ALUControl;
wire [4:0] mux1out;
input clk;
output [31:0] t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,s0,s1,s2,s3,s4,s5,s6,s7;

assign Mdata=regout2;
assign Maddr=ALUout;
assign MRead=MemRead;
assign MWrite=MemWrite;



assign mux5in1[31:28]=add1out[31:28];
assign mux5in1[27:0]=shift2out[27:0];
assign BranchandZero=ALUzero&Branch;
assign ins=IMout;
assign pcadd=pcout;
pc 				pc(clk,pcin,pcout);
Imem 				Imem(pcout,IMout);
mux				mux1(IMout[20:16],IMout[15:11],RegDst,mux1out);
register			register(IMout[25:21],IMout[20:16],mux1out,regwrdata,RegWrite,regout1,regout2,clk,t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,s0,s1,s2,s3,s4,s5,s6,s7);
signextend		signextend(IMout[15:0],signout);
mux				mux2(regout2,signout,ALUSrc,mux2out);
ALU				ALU(regout1,mux2out,ALUout,ALUzero,ALUControl);
ALUcontrol		ALUcontrol(IMout[5:0],ALUOp,ALUControl);
mux				mux3(ALUout,datamemout,MemtoReg,regwrdata);
datamem			Datamem(ALUout,datamemout,regout2,MemWrite,MemRead,data0);
control			control(IMout[31:26],RegDst,Jump,Branch,MemRead,MemtoReg,ALUOp,MemWrite,ALUSrc,RegWrite,1);
adder				add1(pcout,4,add1out);
shiftleft		shift2(IMout[25:0],shift2out);
mux				mux5(mux5in0,mux5in1,Jump,pcin);
shiftleft		shift1(signout,shift1out);
adder				add2(add1out,shift1out,mux4in1);
mux				mux4(add1out,mux4in1,BranchandZero,mux5in0);

endmodule
