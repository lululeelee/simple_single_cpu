//Subject:     CO project 2 - Test Bench
//--------------------------------------------------------------------------------
//Version:     1
//--------------------------------------------------------------------------------
//Writer:      
//----------------------------------------------
//Date:        
//----------------------------------------------
//Description: 
//--------------------------------------------------------------------------------

`define CYCLE_TIME 10			
`define END_COUNT 25
module TestBench;

//Internal Signals
reg         CLK;
reg         RST;
integer     count;
integer     handle;
integer     end_count;
//Greate tested modle  
Simple_Single_CPU cpu(
        .clk_i(CLK),
		.rst_i(RST)
		);
 
//Main function

always #(`CYCLE_TIME/2) CLK = ~CLK;	

initial  begin
    handle = $fopen("CO_P2_Result.txt");
	CLK = 0;
    RST = 0;
	count = 0;
    end_count=25;
    #(`CYCLE_TIME)      RST = 1;
    #(`CYCLE_TIME*`END_COUNT)	$fclose(handle); $stop;
end

//Print result to "CO_P2_Result.txt"
always@(posedge CLK) begin
		$fdisplay(handle,"regwrite:%b  ALU_OP:%b  ALUsrc:%b  Regdst:%b  Branch:%b  branch_select:%b\n",cpu.Decoder.RegWrite_o,cpu.Decoder.ALU_op_o,cpu.Decoder.ALUSrc_o,cpu.Decoder.RegDst_o,cpu.Decoder.Branch_o,cpu.branch_select);
		//$fdisplay(handle,"sign_extend:%b \n",cpu.SE.data_o);
		$fdisplay(handle,"ALUresult:%b reg1:%b\n",cpu.ALU.result_o,cpu.RF.Reg_File[1]);
		//$fdisplay(handle,"cpu alu_out:%b\n",cpu.alu_out);
		//$fdisplay(handle,"rddata:%b  rdaddr:%b\n",cpu.RF.RDdata_i,cpu.RF.RDaddr_i);
		$fdisplay(handle,"pc_in:%b\n",cpu.pc_data_in);
		$fdisplay(handle,"alu_tmp:%b  alu_sra:%b  alu_src1_i:%b\n",cpu.ALU.tmp_slt,cpu.ALU.tmp_sra,cpu.ALU.src1_i);
		$fdisplay(handle,"instr_out:%b\n",cpu.instr_out);
    $fdisplay(handle, "r0=%d, r1=%d, r2=%d, r3=%d, r4=%d, r5=%d, r6=%d, r7=%d, r8=%d, r9=%d, r10=%d, r11=%d, r12=%d\n\n",
	          cpu.RF.Reg_File[0], cpu.RF.Reg_File[1], cpu.RF.Reg_File[2], cpu.RF.Reg_File[3], cpu.RF.Reg_File[4], 
			  cpu.RF.Reg_File[5], cpu.RF.Reg_File[6], cpu.RF.Reg_File[7], cpu.RF.Reg_File[8], cpu.RF.Reg_File[9], 
			  cpu.RF.Reg_File[10],cpu.RF.Reg_File[11], cpu.RF.Reg_File[12]
			  );
		//$fdisplay(handle,"pc_adder1_in:%b  pcadder1_out:%b  pc_adder2_out:%b\n",cpu.pc_data_out,cpu.pc_adder1,cpu.pc_adder2);
	 count = count + 1;
	if( count == `END_COUNT ) begin 
    $fdisplay(handle, "r0=%d, r1=%d, r2=%d, r3=%d, r4=%d, r5=%d, r6=%d, r7=%d, r8=%d, r9=%d, r10=%d, r11=%d, r12=%d",
	          cpu.RF.Reg_File[0], cpu.RF.Reg_File[1], cpu.RF.Reg_File[2], cpu.RF.Reg_File[3], cpu.RF.Reg_File[4], 
			  cpu.RF.Reg_File[5], cpu.RF.Reg_File[6], cpu.RF.Reg_File[7], cpu.RF.Reg_File[8], cpu.RF.Reg_File[9], 
			  cpu.RF.Reg_File[10],cpu.RF.Reg_File[11], cpu.RF.Reg_File[12]
			  );
	end
	else ;
end
  
endmodule
