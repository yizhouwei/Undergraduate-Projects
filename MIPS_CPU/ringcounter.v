`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:42:05 06/28/2015 
// Design Name: 
// Module Name:    ringcounter 
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
module ringcounter(clk, reset, Out);
	input reset;
	input clk;
	output [3:0] Out;
	reg [3:0] Out;
	initial
		Out=4'b1110;
	always @(posedge clk or posedge reset)
		if (reset==1) Out=4'b1110;
		else if (Out==4'b1110) Out=4'b1101;
		else if (Out==4'b1101) Out=4'b1011;
		else if (Out==4'b1011) Out=4'b0111;
		else if (Out==4'b0111) Out=4'b1110;
		else Out=4'b0001;


endmodule
