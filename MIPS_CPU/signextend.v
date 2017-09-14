`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:30:26 10/19/2015 
// Design Name: 
// Module Name:    signextend 
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
module signextend(in,out);
input [15:0] in;
output [31:0] out;
reg [31:0] out;
always @(in) begin
	if (in[15]==0) out=0+in;
	else if (in[15]==1) out='hffff0000+in;
end


endmodule
