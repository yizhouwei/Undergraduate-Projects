`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:42:19 11/18/2015 
// Design Name: 
// Module Name:    harzardunit 
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
module stallunit(PCWrite,IFIDWrite,controlmux,IDEX_MemRead,IDEX_ALUSrc,IDEXregRt,IDEXregRd,IDEX_RegWrite,EXMEM_MemRead,EXMEMregRt,IFIDregRt,IFIDregRs,IDopcode);
input [5:0] IDopcode;
input IDEX_MemRead,EXMEM_MemRead,IDEX_ALUSrc,IDEX_RegWrite;
input [4:0] IDEXregRd;
input [4:0] IDEXregRt;
input [4:0] EXMEMregRt;
input [4:0] IFIDregRt;
input [4:0] IFIDregRs;


output PCWrite,IFIDWrite,controlmux;
reg PCWrite,IFIDWrite,controlmux;

initial begin
	PCWrite=1;
	IFIDWrite=1;
	controlmux=1;
end

always @(IDEX_MemRead or IDEXregRt or IFIDregRs or IFIDregRt or IDopcode or EXMEM_MemRead or EXMEMregRt or IDEXregRd or IDEX_RegWrite or IDEX_ALUSrc) begin
	PCWrite=1;
	IFIDWrite=1;
	controlmux=1;
	if ((IDopcode==4)&&(IDEX_ALUSrc==1)&&(IDEX_RegWrite==1)&&((IDEXregRt==IFIDregRs)||(IDEXregRt==IFIDregRt))) begin
		PCWrite=0;
		IFIDWrite=0;
		controlmux=0;
	end//present:beq, previous:I-type(lw,addi,andi)
	else if ((IDopcode==4)&&(IDEX_ALUSrc==0)&&(IDEX_RegWrite==1)&&((IDEXregRd==IFIDregRs)||(IDEXregRd==IFIDregRt))) begin
		PCWrite=0;
		IFIDWrite=0;
		controlmux=0;
	end//present:beq,previous:R-type
	else if ((IDopcode==4)&&(EXMEM_MemRead==1)&&((EXMEMregRt==IFIDregRs)||(EXMEMregRt==IFIDregRt))) begin
		PCWrite=0;
		IFIDWrite=0;
		controlmux=0;
	end//present:beq,prevprev:lw
	else if ((IDEX_MemRead==1)&&((IDEXregRt==IFIDregRs)||(IDEXregRt==IFIDregRt))) begin
		PCWrite=0;
		IFIDWrite=0;
		controlmux=0;
	end//load store harzard
end
	
	
	


	


endmodule
