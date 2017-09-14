`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:37:41 07/15/2015 
// Design Name: 
// Module Name:    calculator 
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
module calculator(reset,Q1,Q2,Q3,Q4,push,in,led,clk);
input clk;
output led;
reg led;
input reset;
input push;
input [3:0] in;
output [3:0] Q1,Q2,Q3,Q4;
reg [3:0] data;
reg [3:0] out;
reg [3:0] tmp;
always @(posedge reset or posedge push)
begin
	if (reset==1) begin data=0;out=0; led=0;end
	else if (push==1) 
		begin 
			tmp=out+in;
			if (in[3]!=out[3]) led=0;
			else if (tmp[3]!=out[3]) led=1;
			out=tmp;
			data=out;
			if (data[3]==1)begin
			data[3]=data[3]+1;data[2]=data[2]+1;data[1]=data[1]+1;data[0]=data[0]+1; data=data+1; 
			end
		end
	
end

assign Q1=data;
assign Q2=15-out[3];
assign Q3=15;
assign Q4=15;

endmodule
