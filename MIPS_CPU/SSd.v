`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:12:15 06/29/2015 
// Design Name: 
// Module Name:    SSd 
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
module SSd(in, Q);
input [3:0] in;
output [6:0] Q;
reg [6:0] Q;

always @(in)
case (in)
	   0:  Q=7'b0000001;
		1:  Q=7'b1001111;
		2:  Q=7'b0010010;
		3:  Q=7'b0000110;
		4:  Q=7'b1001100;
		5:  Q=7'b0100100;
		6:  Q=7'b0100000;
		7:  Q=7'b0001111;
		8:  Q=7'b0000000;
		9:  Q=7'b0000100;
		10: Q=7'b0001000;
		11: Q=7'b1100000;
		12: Q=7'b0110001;
		13: Q=7'b1000010;
		14: Q=7'b0110000;
		15: Q=7'b0111000;
endcase
endmodule
