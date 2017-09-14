`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:30:24 11/19/2015 
// Design Name: 
// Module Name:    3mux 
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
module threemux(in0,in1,in2,sel,out);
input [31:0] in0;
input [31:0] in1;
input [31:0] in2;
input [1:0]sel;
output [31:0] out;
reg [31:0] out;

always @(in0 or in1 or in2 or sel) begin
if (sel==0) out=in0;
else if (sel==1) out=in1;
else if (sel==2) out=in2;
end





endmodule
