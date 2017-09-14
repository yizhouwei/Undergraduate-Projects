`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:06:24 06/29/2015 
// Design Name: 
// Module Name:    buffer 
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
module buffer(in,out,b);
input [6:0] in;
input b;
output [6:0] out;
reg [6:0] out;
initial 
	out=7'bzzzzzzz;
always @(b or in)
	if (b==0) out=in;
	else out=7'bzzzzzzz;

endmodule
