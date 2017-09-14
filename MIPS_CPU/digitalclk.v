`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:18:45 06/28/2015 
// Design Name: 
// Module Name:    digitalclk 
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
module digitalclk(clk,pipeclk,reset,cathodes,anodes,regsel,pcsel,w3,w4,w7,w8);

output [3:0] w3,w4,w7,w8;
wire [31:0]t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,s0,s1,s2,s3,s4,s5,s6,s7;
wire [31:0] pctoImem;
input [4:0] regsel;
input pcsel;
input pipeclk;
input clk;
input reset;
output [6:0] cathodes;
output [3:0] anodes;

wire w1,w2;
wire [3:0]w3,n3,n4,n7,n8,m3,m4,m7,m8;
wire [3:0]w4;
wire [3:0]w5;
wire [6:0]c1;
wire [6:0]c2;
wire [6:0]w6;
wire [3:0]w7;
wire [3:0]w8;
wire [6:0]c3;
wire [6:0]c4;
wire [31:0] regout;
wire [31:0] finalout;
//output [31:0] finalout;


	
 divider1 	 d1(clk,reset,w1);
 //divider2 	 d2(w1,reset,w2);
   //roller    	 roll(w2,off,n3,n4,n7,n8);
	//calculator   cal(reset2,m3,m4,m7,m8,push,in,led,clk);
	
	
	pipeline pipe(pipeclk,reset,t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,s0,s1,s2,s3,s4,s5,s6,s7,pctoImem);
	outputmux outmux(t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,s0,s1,s2,s3,s4,s5,s6,s7,regsel,regout);
	mux pcoutmux(regout,pctoImem,pcsel,finalout);
	
	//twomux			mu(off,n3,n4,n7,n8,m3,m4,m7,m8,w3,w4,w7,w8);
assign w3=finalout[3:0];
assign w4=finalout[7:4];
assign w7=finalout[11:8];
assign w8=finalout[15:12];	
	
	
 ringcounter r1(w1,reset,w5);
 SSd         ssd1(w8,c1);
 SSd         ssd2(w7,c2);
 SSd         ssd3(w4,c3);
 SSd         ssd4(w3,c4);
 
 buffer b1(c4,w6,w5[3]);
 buffer b2(c3,w6,w5[2]);
 buffer b3(c2,w6,w5[1]);
 buffer b4(c1,w6,w5[0]);
 

assign cathodes=w6;
assign anodes=w5;



endmodule
