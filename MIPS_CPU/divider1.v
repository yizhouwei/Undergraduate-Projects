`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:22:17 06/28/2015 
// Design Name: 
// Module Name:    divider1 
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
module divider1(clk,reset,q);
    input clk;
    input reset;
    output q;
	 reg q;
	 reg [16:0] curr_state;
	 
	 always @(posedge clk or posedge reset)
	 begin
		if (reset==1) begin q=0; curr_state=17'b0; end
		else if (curr_state==99999)	begin q=1; curr_state=17'b0; end
		else 	begin q=0; curr_state=curr_state+1; end
	 end
	 
endmodule
