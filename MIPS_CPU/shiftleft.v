`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:57:57 10/19/2015 
// Design Name: 
// Module Name:    shiftleft 
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
module shiftleft(in,out);
input [31:0] in;
output [31:0] out;
reg [31:0] out;

always @(in) begin
	out=in << 2;
end


endmodule
