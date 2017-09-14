`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:20:01 10/19/2015 
// Design Name: 
// Module Name:    ALUcontrol 
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
module ALUcontrol(funct,ALUOp,ALUControl);
input [5:0] funct;
input [1:0] ALUOp;
output [3:0] ALUControl;
reg [3:0] ALUControl;
always @(ALUOp or funct) begin
	if (ALUOp==2'b00) begin//lw,sw,addi
		ALUControl=4'b0010;
	end
	else if (ALUOp==2'b01) begin//beq
		ALUControl=4'b0110;
	end
	else if (ALUOp==2'b10) begin//add,sub,and,or,slt
		if (funct==6'b100000) ALUControl=4'b0010; //add
		else if (funct==6'b100010) ALUControl=4'b0110; //sub
		else if (funct==6'b100100) ALUControl=4'b0000; //and
		else if (funct==6'b100101) ALUControl=4'b0001; //or
		else if (funct==6'b101010) ALUControl=4'b0111;//slt
	end
	else if (ALUOp==2'b11) begin //andi
		ALUControl=4'b0000;
	end
end
endmodule
