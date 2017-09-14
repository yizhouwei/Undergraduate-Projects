`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:41:40 06/29/2015 
// Design Name: 
// Module Name:    divider2 
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
module divider2(clk,reset,q);
    input clk;
    input reset;
    output q;
	 reg q;
	 reg [13:0] curr_state;
	 
	 always @(posedge clk or posedge reset)
	 begin
		if (reset==1) begin q=0; curr_state=14'b0; end
		else if (curr_state==499)	begin q=1; curr_state=14'b0; end
		else 	begin q=0; curr_state=curr_state+1; end
	 end


endmodule
