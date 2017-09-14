`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:50:16 11/16/2015 
// Design Name: 
// Module Name:    forwardingunit 
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
module forwardingunit(EXMEMregRd,IDEXregRs,IDEXregRt,MEMWBregRd,EXMEM_RegWrite,MEMWB_RegWrite,forwardA,forwardB);
input EXMEM_RegWrite,MEMWB_RegWrite;
input [4:0] EXMEMregRd;
input [4:0] MEMWBregRd;
input [4:0] IDEXregRs;
input [4:0] IDEXregRt;
output [1:0] forwardA;
output [1:0] forwardB;
reg [1:0] forwardA;
reg [1:0] forwardB;
initial begin
	forwardA=0;
	forwardB=0;
end


always @(EXMEM_RegWrite or EXMEMregRd or IDEXregRs or MEMWB_RegWrite or MEMWBregRd) begin
	forwardA=0;
	if ((EXMEM_RegWrite==1)&&(EXMEMregRd!=0)&&(EXMEMregRd==IDEXregRs)) begin
			forwardA=2'b10;
	end
	else if ((MEMWB_RegWrite==1)&&(MEMWBregRd!=0)&&(MEMWBregRd==IDEXregRs)) begin
			forwardA=2'b01;
	end
end

always @(EXMEM_RegWrite or EXMEMregRd or IDEXregRt or MEMWB_RegWrite or MEMWBregRd) begin
	forwardB=0;
	if ((EXMEM_RegWrite==1)&&(EXMEMregRd!=0)&&(EXMEMregRd==IDEXregRt)) begin
			forwardB=2'b10;
	end
	else if ((MEMWB_RegWrite==1)&&(MEMWBregRd!=0)&&(MEMWBregRd==IDEXregRt)) begin
			forwardB=2'b01;
	end
end




endmodule
