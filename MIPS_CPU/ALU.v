`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:10:28 10/19/2015 
// Design Name: 
// Module Name:    ALU 
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
module ALU(data1,data2,result,zero,ALUControl);
input [31:0] data1,data2;
input [3:0] ALUControl;
output [31:0] result;
output zero;
reg zero;
reg [31:0] result;

always @(ALUControl,data1,data2) begin
		if (ALUControl==4'b0010) result=data1+data2;		//add
		else if (ALUControl==4'b0110) result=data1-data2;//sub
		else if (ALUControl==4'b0000) result=data1&data2;//and
		else if (ALUControl==4'b0001) result=data1|data2;//or
		else if (ALUControl==4'b0111) begin //slt
			if(data1<data2) result=1;
			else result=0;
		end
		
		if (result==0) zero=1;
		else zero=0;
end



endmodule
