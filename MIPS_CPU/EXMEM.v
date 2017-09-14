`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:17:19 11/16/2015 
// Design Name: 
// Module Name:    EXMEM 
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
module EXMEM(clk,flush,Branch_in,Jump_in,MemRead_in,MemWrite_in,MemtoReg_in,RegWrite_in,EXMEMregRd_in,memadd_in,Wrdata_in,Branch_out,Jump_out,MemRead_out,MemWrite_out,MemtoReg_out,RegWrite_out,EXMEMregRd_out,memadd_out,Wrdata_out,ALUzero_in,ALUzero_out,jumpaddr_in,jumpaddr_out,branchpc_in,branchpc_out);
input clk,MemRead_in,MemWrite_in,MemtoReg_in,RegWrite_in,flush,ALUzero_in,Jump_in,Branch_in;
input [4:0] EXMEMregRd_in;
input [31:0] branchpc_in;
input [31:0]memadd_in;
input [31:0]jumpaddr_in;
input [31:0]Wrdata_in; 
output MemRead_out,MemWrite_out,MemtoReg_out,RegWrite_out,ALUzero_out,Jump_out,Branch_out;
output [4:0] EXMEMregRd_out;
output [31:0] branchpc_out;
output [31:0]jumpaddr_out;
output [31:0]memadd_out;
output [31:0]Wrdata_out; 
reg MemRead_out,MemWrite_out,MemtoReg_out,RegWrite_out,ALUzero_out,Jump_out,Branch_out;
reg [4:0] EXMEMregRd_out;
reg [31:0]branchpc_out;
reg [31:0]jumpaddr_out;
reg [31:0]memadd_out;
reg [31:0]Wrdata_out; 
initial begin
	branchpc_out=0;
	jumpaddr_out=0;
	ALUzero_out=0;
	Branch_out=0;
	Jump_out=0;
	MemRead_out=0;
	MemWrite_out=0;
	MemtoReg_out=0;
	RegWrite_out=0;
	EXMEMregRd_out=0;
	memadd_out=0;
	Wrdata_out=0;
end

always @(posedge clk or posedge flush) begin
	if (flush==1) begin
	branchpc_out<=0;
	jumpaddr_out<=0;
	ALUzero_out<=0;
	Branch_out<=0;
	Jump_out<=0;
	MemRead_out<=0;
	MemWrite_out<=0;
	MemtoReg_out<=0;
	RegWrite_out<=0;
	EXMEMregRd_out<=0;
	memadd_out<=0;
	Wrdata_out<=0;
	end
	else begin
	branchpc_out<=branchpc_in;
	jumpaddr_out<=jumpaddr_in;
	ALUzero_out<=ALUzero_in;
	Branch_out<=Branch_in;
	Jump_out<=Jump_in;
	MemRead_out<=MemRead_in;
	MemWrite_out<=MemWrite_in;
	MemtoReg_out<=MemtoReg_in;
	RegWrite_out<=RegWrite_in;
	EXMEMregRd_out<=EXMEMregRd_in;
	memadd_out<=memadd_in;
	Wrdata_out<=Wrdata_in;
	end
end








endmodule
