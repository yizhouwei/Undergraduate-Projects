`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:47:12 11/22/2015 
// Design Name: 
// Module Name:    memwrdatamux 
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
module memwrdatamuxsel(MEMMemWrite,WBMemtoReg,MEMregwraddr,WBregwraddr,pre_lw_and_curr_sw);
input MEMMemWrite,WBMemtoReg;
input [4:0] MEMregwraddr;
input [4:0] WBregwraddr;
output pre_lw_and_curr_sw;
reg pre_lw_and_curr_sw;
initial begin
	pre_lw_and_curr_sw=0;
end

always @(MEMMemWrite or WBMemtoReg or MEMregwraddr or WBregwraddr) begin
		pre_lw_and_curr_sw=0;
		if ((MEMMemWrite==1)&&(WBMemtoReg==1)&&(MEMregwraddr==WBregwraddr)) begin
			pre_lw_and_curr_sw=1;
		end
end

endmodule
