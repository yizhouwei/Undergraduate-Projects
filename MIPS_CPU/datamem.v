`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:45:41 10/19/2015 
// Design Name: 
// Module Name:    datamem 
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
module datamem(address,rddata,wrdata,MemWrite,MemRead,clk);
input [31:0] address,wrdata;
input MemWrite,MemRead;
output [31:0] rddata;
reg [31:0] data[0:64];
reg [31:0] rddata;
reg [31:0] addr;
reg [10:0]k;
input clk;



initial begin
	for(k=0;k<64;k=k+1) begin
		data[k]=32'b0;
	end
end

always @(negedge clk) begin
	addr=address/4;
	if (MemWrite==1) begin
		data[addr]=wrdata;
	end
	if (MemRead==1) begin
		rddata=data[addr];
	end
end


endmodule
