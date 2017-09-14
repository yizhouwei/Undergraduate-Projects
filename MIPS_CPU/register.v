`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:49:11 10/12/2015 
// Design Name: 
// Module Name:    register 
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
module register(rdreg1,rdreg2,wrreg,wrdata,write,rddata1,rddata2,clk,t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,s0,s1,s2,s3,s4,s5,s6,s7);
output [31:0] t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,s0,s1,s2,s3,s4,s5,s6,s7;
input clk;
input [4:0]rdreg1;
input [4:0]rdreg2;
input [4:0]wrreg;
input [31:0]wrdata;
input write;
output[31:0]rddata1;
output[31:0]rddata2;
reg [31:0]data[0:64];
reg [31:0]rddata1;
reg [31:0]rddata2;
reg [10:0] k;
initial begin
	for (k=0;k<64;k=k+1) begin
		data[k]=32'b0;
	end
end


always @(negedge clk) begin
	if ((write==1)) data[wrreg]=wrdata;
end

always @(rdreg1 or data[rdreg1]) begin
	  rddata1=data[rdreg1];
end

always @(data[rdreg2] or rdreg2) begin
	  rddata2=data[rdreg2];
end

assign t0=data[8];
assign t1=data[9];
assign t2=data[10];
assign t3=data[11];
assign t4=data[12];
assign t5=data[13];
assign t6=data[14];
assign t7=data[15];
assign t8=data[24];
assign t9=data[25];
assign s0=data[16];
assign s1=data[17];
assign s2=data[18];
assign s3=data[19];
assign s4=data[20];
assign s5=data[21];
assign s6=data[22];
assign s7=data[23];


endmodule
