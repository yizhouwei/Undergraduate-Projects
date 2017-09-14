`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:36:32 11/24/2015 
// Design Name: 
// Module Name:    outputmux 
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
module outputmux(t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,s0,s1,s2,s3,s4,s5,s6,s7,sel,out);
input [31:0] t0;
input [31:0] t1;
input [31:0] t2;
input [31:0] t3;
input [31:0] t4;
input [31:0] t5;
input [31:0] t6;
input [31:0] t7;
input [31:0] t8;
input [31:0] t9;
input [31:0] s0;
input [31:0] s1;
input [31:0] s2;
input [31:0] s3;
input [31:0] s4;
input [31:0] s5;
input [31:0] s6;
input [31:0] s7;
input [4:0] sel;
output [31:0] out;
reg [31:0] out;

always @(sel) begin
	if (sel==8) assign out=t0;
	else if (sel==9) assign out=t1;
	else if (sel==10) assign out=t2;
	else if (sel==11) assign out=t3;
	else if (sel==12) assign out=t4;
	else if (sel==13) assign out=t5;
	else if (sel==14) assign out=t6;
	else if (sel==15) assign out=t7;
	else if (sel==16) assign out=s0;
	else if (sel==17) assign out=s1;
	else if (sel==18) assign out=s2;
	else if (sel==19) assign out=s3;
	else if (sel==20) assign out=s4;
	else if (sel==21) assign out=s5;
	else if (sel==22) assign out=s6;
	else if (sel==23) assign out=s7;
	else if (sel==24) assign out=t8;
	else if (sel==25) assign out=t9;
end


endmodule
