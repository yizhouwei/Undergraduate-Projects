`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:10:46 11/24/2015
// Design Name:   digitalclk
// Module Name:   Y:/Desktop/370lab/finalp2/finalp2/testfinal.v
// Project Name:  finalp2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: digitalclk
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testfinal;
	parameter half=500;
	// Inputs
	reg clk;
	reg pipeclk;
	reg reset;
	reg [4:0] regsel;
	reg pcsel;
	
	// Outputs
	wire [6:0] cathodes;
	wire [3:0] anodes;
	//wire [31:0] finalout;
	wire [3:0] w3,w4,w7,w8;
	// Instantiate the Unit Under Test (UUT)
	digitalclk uut (
		.clk(clk), 
		.pipeclk(pipeclk), 
		.reset(reset), 
		.cathodes(cathodes), 
		.anodes(anodes), 
		.regsel(regsel), 
		.pcsel(pcsel),
		//.finalout(finalout)
		.w3(w3),
		.w4(w4),
		.w7(w7),
		.w8(w8)
	);

	initial begin
		$monitor(pipeclk,"clk=%b, w8=%h, w7= %h, w4=%h, w3=%h\n",pipeclk,w8,w7,w4,w3);
		// Initialize Inputs
		clk = 0;
		pipeclk = 0;
		reset = 0;
		regsel = 8;
		pcsel = 0;

		// Wait 100 ns for global reset to finish
		#100;
       #5000 pcsel=1;
		// Add stimulus here

	end
     always #half pipeclk=~pipeclk;
endmodule

