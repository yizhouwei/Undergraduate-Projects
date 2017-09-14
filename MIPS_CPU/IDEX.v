`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:49:54 11/15/2015 
// Design Name: 
// Module Name:    IDEX 
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
module IDEX(clk,flush,RegDst_in,Jump_in,Branch_in,MemRead_in,MemtoReg_in,ALUOp_in,MemWrite_in,ALUSrc_in,RegWrite_in,RDdata1_in,RDdata2_in,ins15_0_in,IFIDregRs_in,IFIDregRt_in,IFIDregRd_in,RegDst_out,Jump_out,Branch_out,MemRead_out,MemtoReg_out,ALUOp_out,MemWrite_out,ALUSrc_out,RegWrite_out,RDdata1_out,RDdata2_out,ins15_0_out,IFIDregRs_out,IFIDregRt_out,IFIDregRd_out,IDpc,EXpc,IDjumpaddr,EXjumpaddr);
input MemRead_in,MemtoReg_in,MemWrite_in,RegWrite_in,ALUSrc_in,RegDst_in,Jump_in,Branch_in;
input [31:0] IDjumpaddr;
input clk,flush;
input [1:0] ALUOp_in;
input [31:0] IDpc;
input [31:0] RDdata1_in;
input [31:0] RDdata2_in;
input [31:0] ins15_0_in;
input [4:0]IFIDregRs_in;
input [4:0]IFIDregRt_in;
input [4:0]IFIDregRd_in;
output MemRead_out,MemtoReg_out,MemWrite_out,RegWrite_out,ALUSrc_out,RegDst_out,Jump_out,Branch_out;
output [1:0] ALUOp_out;
output [31:0] EXjumpaddr;
output [31:0] EXpc;
output [31:0] RDdata1_out;
output [31:0] RDdata2_out;
output [31:0] ins15_0_out;
output [4:0]IFIDregRs_out;
output [4:0]IFIDregRt_out;
output [4:0]IFIDregRd_out;
reg MemRead_out,MemtoReg_out,MemWrite_out,RegWrite_out,ALUSrc_out,RegDst_out,Jump_out,Branch_out;
reg [1:0] ALUOp_out;
reg [31:0] EXjumpaddr;
reg [31:0] EXpc;
reg [31:0] RDdata1_out;
reg [31:0] RDdata2_out;
reg [31:0] ins15_0_out;
reg [4:0]IFIDregRs_out;
reg [4:0]IFIDregRt_out;
reg [4:0]IFIDregRd_out;
initial begin 
	EXjumpaddr=0;
	EXpc=0;
	RegDst_out=0;
	Jump_out=0;
	Branch_out=0;
	ALUOp_out=0;
	MemRead_out=0;
	MemtoReg_out=0;
	MemWrite_out=0;
	RegWrite_out=0;
	ALUSrc_out=0;
	RDdata1_out=0;
	RDdata2_out=0;
	ins15_0_out=0;
	IFIDregRs_out=0;
	IFIDregRt_out=0;
	IFIDregRd_out=0;
end

always @(posedge clk or posedge flush) begin
	if (flush==1) begin
	EXjumpaddr<=0;
	EXpc<=0;
	RegDst_out<=0;
	Jump_out<=0;
	Branch_out<=0;
	ALUOp_out<=0;
	MemRead_out<=0;
	MemtoReg_out<=0;
	MemWrite_out<=0;
	RegWrite_out<=0;
	ALUSrc_out<=0;
	RDdata1_out<=0;
	RDdata2_out<=0;
	ins15_0_out<=0;
	IFIDregRs_out<=0;
	IFIDregRt_out<=0;
	IFIDregRd_out<=0;
	end

	else begin
	EXjumpaddr<=IDjumpaddr;
	EXpc<=IDpc;
	RegDst_out<=RegDst_in;
	Jump_out<=Jump_in;
	Branch_out<=Branch_in;
	ALUOp_out<=ALUOp_in;
	MemRead_out<=MemRead_in;
	MemtoReg_out<=MemtoReg_in;
	MemWrite_out<=MemWrite_in;
	RegWrite_out<=RegWrite_in;
	ALUSrc_out<=ALUSrc_in;
	RDdata1_out<=RDdata1_in;
	RDdata2_out<=RDdata2_in;
	ins15_0_out<=ins15_0_in;
	IFIDregRs_out<=IFIDregRs_in;
	IFIDregRt_out<=IFIDregRt_in;
	IFIDregRd_out<=IFIDregRd_in;
	end
end	








endmodule
