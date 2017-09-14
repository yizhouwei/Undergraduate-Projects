`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:53:25 11/20/2015 
// Design Name: 
// Module Name:    flushunit 
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
module flushunit(PCSrc,Jump,IFIDflush,IDEXflush,EXMEMflush);
input PCSrc,Jump;
output IFIDflush,IDEXflush,EXMEMflush;
reg IFIDflush,IDEXflush,EXMEMflush;
initial begin
	IFIDflush=0;
	IDEXflush=0;
	EXMEMflush=0;
end

always @(PCSrc or Jump) begin
	IFIDflush=0;
	IDEXflush=0;
	EXMEMflush=0;
	if ((PCSrc==1)||(Jump==1)) begin
		IFIDflush=1;
		IDEXflush=1;
		EXMEMflush=1;
	end
 
end
endmodule
