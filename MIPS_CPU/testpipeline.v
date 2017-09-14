`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:56:14 11/22/2015
// Design Name:   pipeline
// Module Name:   Y:/Desktop/370lab/pipeline/testpipeline.v
// Project Name:  pipeline
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: pipeline
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testpipeline;
	parameter half=500;
	// Inputs
	reg clk;

	// Outputs
	wire EXbranchaddr;
	wire pre_lw_and_curr_sw;
	wire [4:0]WBregwraddr,MEMregwraddr;
	wire MEMMemWrite,WBMemtoReg;
	wire [1:0] forwardAsel,forwardBsel;
	reg reset;
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
	wire pcwrite,IFIDWrite,EXALUSrc;
	wire [31:0] pctoImem;
	wire [31:0] Imemout,EXALUresult,MEMALUresult,ALUin1,ALUin2,tmpALUin2,EXpcadd4,shiftins15_0;
	wire WBRegWrite;
	wire [31:0] WBregwrdata;
	// Instantiate the Unit Under Test (UUT)
	pipeline uut (
		.clk(clk), 
		.reset(reset),
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
		.pctoImem(pctoImem)
		
	);
	initial begin
		$display("******************************");
		$display("The textual results:");
		$monitor(clk,"Time: %d [clk]= %d pc=%b\n[$s0] = %h  [$s1] = %h  [$s2] = %h  \n[$s3] = %h  [$s4] = %h  [$s5] = %h  \n[$s6] = %h  [$s7] = %h  [$t0] = %h  \n[$t1] = %h  [$t2] = %h  [$t3] = %h  \n[$t4] = %h  [$t5] = %h  [$t6] = %h \n[$t7] = %h  [$t8] = %h  [$t9] = %h \n",$time,clk,pctoImem,s0,s1,s2,s3,s4,s5,s6,s7,t0,t1,t2,t3,t4,t5,t6,t7,t8,t9);
		
	end

	initial begin
		// Initialize Inputs
		clk = 0;
		reset=0;
		// Wait 100 ns for global reset to finish
		
        
		// Add stimulus here
	end
	
	always #half clk=~clk;
      
endmodule

