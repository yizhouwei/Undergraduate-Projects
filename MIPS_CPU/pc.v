`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:26:00 10/19/2015 
// Design Name: 
// Module Name:    pc 
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
module pc(clk,in,out,pcwrite,reset);
input clk,pcwrite,reset;
input [31:0] in;
output [31:0] out;
reg [31:0] out;
initial begin
	out='h00000000;
end
always @(posedge clk or posedge reset) begin
	if (reset==1) out=0;
	else if (pcwrite==1) out=in;
end


endmodule
