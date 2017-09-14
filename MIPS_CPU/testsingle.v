`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:05:29 11/13/2015
// Design Name:   single
// Module Name:   Y:/Desktop/370lab/single/testsingle.v
// Project Name:  single
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: single
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testsingle;
	parameter half=1000;
	// Inputs
	reg clk;
	// Outputs
	wire [31:0] t0;
	wire [31:0] t1;
	wire [31:0] t2;
	wire [31:0] t3;
	wire [31:0] t4;
	wire [31:0] t5;
	wire [31:0] t6;
	wire [31:0] t7;
	wire [31:0] t8;
	wire [31:0] t9;
	wire [31:0] s0;
	wire [31:0] s1;
	wire [31:0] s2;
	wire [31:0] s3;
	wire [31:0] s4;
	wire [31:0] s5;
	wire [31:0] s6;
	wire [31:0] s7;
	
	wire [31:0] ins;
	wire [31:0] pcadd;
	wire [31:0] data0;
	wire [31:0] Maddr;
	wire [31:0] Mdata;
	wire MRead,MWrite;
	// Instantiate the Unit Under Test (UUT)
	single uut (
		.clk(clk), 
		.t0(t0), 
		.t1(t1), 
		.t2(t2), 
		.t3(t3), 
		.t4(t4), 
		.t5(t5), 
		.t6(t6), 
		.t7(t7), 
		.t8(t8), 
		.t9(t9), 
		.s0(s0), 
		.s1(s1), 
		.s2(s2), 
		.s3(s3), 
		.s4(s4), 
		.s5(s5), 
		.s6(s6), 
		.s7(s7),
		.ins(ins),
		.pcadd(pcadd),
		.data0(data0),
		.MRead(MRead),
		.MWrite(MWrite),
		.Maddr(Maddr),
		.Mdata(Mdata)
	);

	initial begin
		$display("******************************");
		$display("The textual results:");
		$monitor(clk,"Time: %d [clk]= %d MRead=%b,MWrite=%b,Maddr=%b,Mdata=%b\npcadd=%b,ins=%b,data0=%b\n[$s0] = %h  [$s1] = %h  [$s2] = %h  \n[$s3] = %h  [$s4] = %h  [$s5] = %h  \n[$s6] = %h  [$s7] = %h  [$t0] = %h  \n[$t1] = %h  [$t2] = %h  [$t3] = %h  \n[$t4] = %h  [$t5] = %h  [$t6] = %h  \n[$t7] = %h  [$t8] = %h  [$t9] = %h  \n",$time,clk,MRead,MWrite,Maddr,Mdata,pcadd,ins,data0,s0,s1,s2,s3,s4,s5,s6,s7,t0,t1,t2,t3,t4,t5,t6,t7,t8,t9);
		
	end

	initial begin
		// Initialize Inputs
		clk = 0;
		#10000 $stop;
	end
      
	always #half clk=~clk;
endmodule

