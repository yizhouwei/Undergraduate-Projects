`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:07:15 10/19/2015 
// Design Name: 
// Module Name:    mux 
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
module mux(in0,in1,sel,out);
input [31:0] in1,in0;
input sel;
output [31:0] out;
reg [31:0] out;

always @(sel,in0,in1) begin
	if (sel==0)  out=in0;
	else if (sel==1)  out=in1;
end


endmodule
