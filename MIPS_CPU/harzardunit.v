`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:16:12 11/19/2015 
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
module harzardunit(PCWrite,IFIDWrite,controlmux,IDEX_MemRead,IDEXregRt,IFIDregRt,IFIDregRs,IDopcode);
input IDEX_MemRead;
input [4:0] IDEXregRt;
input [4:0] IFIDregRt;
input [4:0] IFIDregRs;
input [5:0] IDopcode;
output PCWrite,IFIDWrite,controlmux;
reg PCWrite,IFIDWrite,controlmux;
initial begin
	PCWrite=1;
	IFIDWrite=1;
	controlmux=1;
end


always @(IDEX_MemRead or IDEXregRt or IFIDregRt or IFIDregRs or IDopcode) begin
	PCWrite<=1;
	IFIDWrite<=1;
	controlmux<=1;
	if ((IDEX_MemRead==1)&&((IDEXregRt==IFIDregRs)||((IDopcode==0)&&(IDEXregRt==IFIDregRt)))) begin
		PCWrite<=0;
		IFIDWrite<=0;
		controlmux<=0;
	end
end





endmodule
