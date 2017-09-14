`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:56:23 06/28/2015 
// Design Name: 
// Module Name:    timer 
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
module timer(clk, reset, Q1, Q2);
input clk;
input reset;
output [3:0]Q1;
output [3:0]Q2;
reg [3:0]Q1;
reg [3:0]Q2;

initial 
	begin
	Q1=3'b0;
	Q2=4'b0;
	end
always @(posedge clk or posedge reset)
begin 
	if (reset==1) begin Q1=0; Q2=0; end
	else 
	begin
		Q2=Q2+1;
		if (Q2==10) begin Q2=0; Q1=Q1+1; end
		if (Q1==6) Q1=0;
	end
end
	






endmodule
