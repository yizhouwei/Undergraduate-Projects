`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:47:59 11/15/2015 
// Design Name: 
// Module Name:    IFID 
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
module IFID(clk,ins_in,write,pc_in,pc_out,ins_out,flush);
input clk,write,flush;
input [31:0] pc_in;
input [31:0] ins_in;
output [31:0] ins_out;
output [31:0] pc_out;
reg [31:0] pc;
reg [31:0] ins;

initial begin
	pc=0;
	ins=0;
end

always @(posedge clk or posedge flush) begin
	if (flush==1) begin
		pc=0;
		ins=0;
	end
	else if (write==1) begin
		pc=pc_in;
		ins=ins_in;
	end
end



assign pc_out=pc;
assign ins_out=ins;
	


endmodule
