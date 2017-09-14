`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:37:27 07/22/2015
// Design Name:   SIC
// Module Name:   Y:/Desktop/LAB/calculator/testSIC.v
// Project Name:  calculator
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: SIC
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testSIC;
	parameter half_period=25;
	// Inputs
	reg p;
	reg clk;

	// Outputs
	wire [3:0] Q;

	// Instantiate the Unit Under Test (UUT)
	SIC uut (
		.p(p), 
		.clk(clk), 
		.Q(Q)
	);

	initial begin
	$display("**********************************");
	$display("The textual result");
	$display("**********************************");
	$monitor($time,,"clock=%d p=%b Q=%b",clk,p,Q);
	end
	
	initial begin
		// Initialize Inputs
		p = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		#0  p=0;
		#50 p=1;
		#50 p=1;
		#50 p=0;
		#50 p=1;
		#50 p=0;
		#50 p=0;
		#50 p=1;
		#50 p=1;
		#50 p=1;
		#50 p=0;
		#50 p=1;		
	end
	
	always #half_period clk=~clk;
	
	initial #1000 $stop;
      
endmodule

