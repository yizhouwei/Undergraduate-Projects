`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:48:23 11/16/2015 
// Design Name: 
// Module Name:    MEMWB 
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
module MEMWB(clk,MemtoReg_in,RegWrite_in,memdata_in,MEMWBregRd_in,ALUresult_in,MemtoReg_out,RegWrite_out,memdata_out,MEMWBregRd_out,ALUresult_out,PCSrc,WBPCSrc,MEMJump,WBJump);
input PCSrc,MEMJump;
output WBPCSrc,WBJump;
reg WBPCSrc,WBJump;
input clk,MemtoReg_in,RegWrite_in;

input [31:0] memdata_in;
input [31:0] ALUresult_in;
input [4:0] MEMWBregRd_in;
output MemtoReg_out,RegWrite_out;
output [31:0] memdata_out;
output [31:0] ALUresult_out;
output [4:0] MEMWBregRd_out;
reg MemtoReg_out,RegWrite_out;
reg [31:0] memdata_out;
reg [31:0] ALUresult_out;
reg [4:0] MEMWBregRd_out;
initial begin
	MemtoReg_out=0;
	RegWrite_out=0;
	WBJump=0;
	WBPCSrc=0;
end

always @(posedge clk) begin
	WBPCSrc<=PCSrc;
	WBJump<=MEMJump;
	MEMWBregRd_out<=MEMWBregRd_in;
	MemtoReg_out<=MemtoReg_in;
	RegWrite_out<=RegWrite_in;
	memdata_out<=memdata_in;
	ALUresult_out<=ALUresult_in;
	
end





endmodule
