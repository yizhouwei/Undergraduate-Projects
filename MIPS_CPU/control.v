`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:44:38 10/19/2015 
// Design Name: 
// Module Name:    control 
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
module control(in,RegDst,Jump,Branch,MemRead,MemtoReg,ALUOp,MemWrite,ALUSrc,RegWrite,controlmux);
input [5:0] in;
input controlmux;
output RegDst,Branch,MemRead,MemtoReg,MemWrite,ALUSrc,RegWrite,Jump;
output [1:0] ALUOp;
reg RegDst,Branch,MemRead,MemtoReg,MemWrite,ALUSrc,RegWrite,Jump;
reg [1:0] ALUOp;
initial begin
		ALUOp=2'b00;
		RegDst=0;
		Jump=0;
		Branch=0;
		MemRead=0;
		MemtoReg=0;
		MemWrite=0;
		ALUSrc=0;
		RegWrite=0;
end
always @(in or controlmux) begin
	if (controlmux==0)begin
		ALUOp=2'b00;
		RegDst=0;
		Jump=0;
		Branch=0;
		MemRead=0;
		MemtoReg=0;
		MemWrite=0;
		ALUSrc=0;
		RegWrite=0;
	end
	else if (in==6'h0) begin//add,sub,and,or,slt
		ALUOp=2'b10;
		RegDst=1;
		Jump=0;
		Branch=0;
		MemRead=0;
		MemtoReg=0;
		MemWrite=0;
		ALUSrc=0;
		RegWrite=1;
	end
	else if (in==6'h8) begin //addi
		ALUOp=2'b0;
		RegDst=0;
		Jump=0;
		Branch=0;
		MemRead=0;
		MemtoReg=0;
		MemWrite=0;
		ALUSrc=1;
		RegWrite=1;
	end
	else if (in==6'hc) begin //andi
		ALUOp=2'b11;
		RegDst=0;
		Jump=0;
		Branch=0;
		MemRead=0;
		MemtoReg=0;
		MemWrite=0;
		ALUSrc=1;
		RegWrite=1;
	end
	else if (in==6'h4) begin //beq
		ALUOp=2'b01;
		RegDst=0;
		Jump=0;
		Branch=1;
		MemRead=0;
		MemtoReg=0;
		MemWrite=0;
		ALUSrc=0;
		RegWrite=0;
	end
	else if (in==6'h2) begin //j
		ALUOp=2'b00;
		RegDst=0;
		Jump=1;
		Branch=0;
		MemRead=0;
		MemtoReg=0;
		MemWrite=0;
		ALUSrc=0;
		RegWrite=0;
	end
	else if (in==6'h23) begin //lw
		ALUOp=2'b00;
		RegDst=0;
		Jump=0;
		Branch=0;
		MemRead=1;
		MemtoReg=1;
		MemWrite=0;
		ALUSrc=1;
		RegWrite=1;
	end
	else if (in==6'h2b) begin //sw
		ALUOp=2'b00;
		RegDst=0;
		Jump=0;
		Branch=0;
		MemRead=0;
		MemtoReg=0;
		MemWrite=1;
		ALUSrc=1;
		RegWrite=0;
	end
end	
endmodule
