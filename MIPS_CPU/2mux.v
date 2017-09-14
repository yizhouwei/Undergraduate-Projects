`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:42:54 07/22/2015 
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
module twomux(off,n3,n4,n7,n8,m3,m4,m7,m8,w3,w4,w7,w8);
input off;
input [3:0] n3,n4,n7,n8,m3,m4,m7,m8;
output [3:0] w4,w3,w7,w8;
reg [3:0] w4,w3,w7,w8;
always @(off)
	if (off==0) begin w3=n3;w4=n4;w7=n7;w8=n8; end
	else begin w3=m3;w4=m4;w7=m7;w8=m8; end


endmodule
