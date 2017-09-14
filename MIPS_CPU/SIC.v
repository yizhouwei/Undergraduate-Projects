`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:29:04 07/22/2015 
// Design Name: 
// Module Name:    SIC 
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
module SIC(p,clk,Q);
input p,clk;
output [3:0] Q;
reg [3:0] Q;
reg tmp;
initial 
begin
	Q=0;
end

always @(posedge clk)
begin
	tmp=p^Q[3]^Q[0];
	Q[0]=Q[1];
	Q[1]=Q[2];
	Q[2]=Q[3];
	Q[3]=tmp;
end;
	


endmodule
