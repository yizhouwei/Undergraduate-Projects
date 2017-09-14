`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:21:58 07/15/2015 
// Design Name: 
// Module Name:    roller 
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
module roller(clk,off,Q1,Q2,Q3,Q4);
input clk;
input off;
output [3:0] Q1;
output [3:0] Q2;
output [3:0] Q3;
output [3:0] Q4;
reg [3:0] Q1;
reg [3:0] Q2;
reg [3:0] Q3;
reg [3:0] Q4;
reg [3:0] q [0:9];
reg [3:0] curr;
initial
	begin
		q[9]=5;q[8]=1;q[7]=3;q[6]=3;q[5]=7;q[4]=0;q[3]=9;q[2]=2;q[1]=6;q[0]=9;
		curr=6;
	end
always @(posedge clk)
	if (off==0) 
	begin
		 Q4=q[curr+3];
		 Q3=q[curr+2];
		 Q2=q[curr+1];
		 Q1=q[curr];
		 curr=curr-1;
		if (curr>10) curr=6;
	end


endmodule
