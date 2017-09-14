`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:04:34 10/19/2015 
// Design Name: 
// Module Name:    adder 
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
module adder(data1,data2,result);
input [31:0] data1,data2;
output [31:0] result;
reg [31:0] result;

always @(data1 or data2)begin
	result=data1+data2;
end



endmodule
