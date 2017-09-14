`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:35:09 11/19/2015 
// Design Name: 
// Module Name:    pipeline 
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
module pipeline(clk,reset,t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,s0,s1,s2,s3,s4,s5,s6,s7,pctoImem);
input clk;
input reset;
output [31:0]t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,s0,s1,s2,s3,s4,s5,s6,s7;

output [31:0] pctoImem;

wire pcwrite,IFIDWrite,IFIDflush,PCsrc,controlmux,IDEXflush,PCSrc,EXMEMflush;
wire IDRegDst,IDJump,IDBranch,IDMemRead,IDMemtoReg,IDMemWrite,IDALUSrc,IDRegWrite;
wire EXRegDst,EXJump,EXBranch,EXMemRead,EXMemtoReg,EXMemWrite,EXALUSrc,EXRegWrite,EXALUzero;
wire MEMBranch,MEMJump,MEMMemRead,MEMMemWrite,MEMMemtoReg,MEMRegWrite,MEMALUzero;
wire WBMemtoReg,WBRegWrite;



wire [31:0] nextpc;
wire [31:0] pctoImem;
wire [31:0] pcin;
wire [31:0] Imemout;
wire [31:0] IFpcadd4;

wire [31:0] IDins;
wire [1:0]  IDALUOp;
wire [31:0] IDjumpaddr;
wire [27:0] IDtmpjumpaddr;
wire [31:0] IDpcadd4;
wire [31:0] IDrddata1;
wire [31:0] IDrddata2;
wire [31:0] IDins15_0;

wire [31:0] shiftins15_0;
wire [1:0] forwardAsel;
wire [1:0] forwardBsel;
wire [31:0] ALUin1;
wire [31:0] ALUin2;
wire [31:0] tmpALUin2;
wire [3:0] ALUControl;
wire [31:0] EXins15_0;
wire [31:0] EXrddata1;
wire [31:0] EXrddata2;
wire [31:0] EXbranchaddr;
wire [4:0] EXregRs;
wire [4:0] EXregRt;
wire [4:0] EXregRd;
wire [1:0] EXALUOp;
wire [31:0] EXregwraddr;
wire [31:0] EXjumpaddr;
wire [31:0] EXALUresult;
wire [31:0] EXpcadd4;

wire [31:0] MEMnextpc;
wire [31:0] MEMjumpaddr;
wire [4:0] MEMregwraddr;
wire [31:0] MEMMemwrdata;
wire [31:0] finalMEMMemwrdata;
wire [31:0] MEMALUresult;

wire pre_lw_and_curr_sw;
wire [31:0] MEMmemrddata;
wire [31:0] WBmemrddata;
wire [4:0] WBregwraddr;
wire [31:0] WBALUresult;
wire [31:0] WBregwrdata;



assign IDjumpaddr[31:28]=IDpcadd4[31:28];
assign IDjumpaddr[27:0]=IDtmpjumpaddr;
assign PCSrc=MEMBranch&&MEMALUzero;

pc pc(clk,nextpc,pctoImem,pcwrite,reset);//pc(clk,in,out,pcwrite)
Imem Imem(pctoImem,Imemout,reset);//Imem(rdadd,out);
adder add4(pctoImem,4,IFpcadd4);//adder(data1,data2,result);
mux pcmux(IFpcadd4,MEMnextpc,PCSrc,pcin);//mux(in0,in1,sel,out);
mux jumpmux(pcin,MEMjumpaddr,MEMJump,nextpc);
IFID IFID(clk,Imemout,IFIDWrite,IFpcadd4,IDpcadd4,IDins,IFIDflush);//IFID(clk,ins_in,write,pc_in,pc_out,ins_out,flush);

shiftleft shiftjump(IDins[25:0],IDtmpjumpaddr);
register register(IDins[25:21],IDins[20:16],WBregwraddr,WBregwrdata,WBRegWrite,IDrddata1,IDrddata2,clk,t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,s0,s1,s2,s3,s4,s5,s6,s7);
control control(IDins[31:26],IDRegDst,IDJump,IDBranch,IDMemRead,IDMemtoReg,IDALUOp,IDMemWrite,IDALUSrc,IDRegWrite,controlmux);
harzardunit harzardunit(pcwrite,IFIDWrite,controlmux,EXMemRead,EXregRt,IDins[20:16],IDins[25:21],IDins[31:26]);
signextend signextend(IDins[15:0],IDins15_0);
IDEX IDEX(clk,IDEXflush,IDRegDst,IDJump,IDBranch,IDMemRead,IDMemtoReg,IDALUOp,IDMemWrite,IDALUSrc,IDRegWrite,IDrddata1,IDrddata2,IDins15_0,IDins[25:21],IDins[20:16],IDins[15:11],EXRegDst,EXJump,EXBranch,EXMemRead,EXMemtoReg,EXALUOp,EXMemWrite,EXALUSrc,EXRegWrite,EXrddata1,EXrddata2,EXins15_0,EXregRs,EXregRt,EXregRd,IDpcadd4,EXpcadd4,IDjumpaddr,EXjumpaddr);


shiftleft shift(EXins15_0,shiftins15_0);
adder branchaddr(EXpcadd4,shiftins15_0,EXbranchaddr);
threemux forwardA(EXrddata1,WBregwrdata,MEMALUresult,forwardAsel,ALUin1);
threemux forwardB(EXrddata2,WBregwrdata,MEMALUresult,forwardBsel,tmpALUin2);
mux ALUinput2(tmpALUin2,EXins15_0,EXALUSrc,ALUin2);
mux regwriteaddr(EXregRt,EXregRd,EXRegDst,EXregwraddr);
ALUcontrol ALUcontrol(EXins15_0[5:0],EXALUOp,ALUControl);
ALU ALU(ALUin1,ALUin2,EXALUresult,EXALUzero,ALUControl);
forwardingunit forwarding(MEMregwraddr,EXregRs,EXregRt,WBregwraddr,MEMRegWrite,WBRegWrite,forwardAsel,forwardBsel);
EXMEM EXMEM(clk,EXMEMflush,EXBranch,EXJump,EXMemRead,EXMemWrite,EXMemtoReg,EXRegWrite,EXregwraddr,EXALUresult,tmpALUin2,MEMBranch,MEMJump,MEMMemRead,MEMMemWrite,MEMMemtoReg,MEMRegWrite,MEMregwraddr,MEMALUresult,MEMMemwrdata,EXALUzero,MEMALUzero,EXjumpaddr,MEMjumpaddr,EXbranchaddr,MEMnextpc);


datamem datamem(MEMALUresult,MEMmemrddata,finalMEMMemwrdata,MEMMemWrite,MEMMemRead,clk);
mux memwrdata(MEMMemwrdata,WBregwrdata,pre_lw_and_curr_sw,finalMEMMemwrdata);
memwrdatamuxsel memwrdatamuxsel(MEMMemWrite,WBMemtoReg,MEMregwraddr,WBregwraddr,pre_lw_and_curr_sw);
MEMWB MEMWB(clk,MEMMemtoReg,MEMRegWrite,MEMmemrddata,MEMregwraddr,MEMALUresult,WBMemtoReg,WBRegWrite,WBmemrddata,WBregwraddr,WBALUresult,PCSrc,WBPCSrc,MEMJump,WBJump);


flushunit flush(WBPCSrc,WBJump,IFIDflush,IDEXflush,EXMEMflush);
mux MEMtoRegmux(WBALUresult,WBmemrddata,WBMemtoReg,WBregwrdata);






endmodule
