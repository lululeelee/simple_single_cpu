//Subject:     CO project 2 - Simple Single CPU
//--------------------------------------------------------------------------------
//Version:     1
//--------------------------------------------------------------------------------
//Writer:      
//----------------------------------------------
//Date:        
//----------------------------------------------
//Description: 
//--------------------------------------------------------------------------------
module Simple_Single_CPU(
        clk_i,
		rst_i
		);
		
//I/O port
input         clk_i;
input         rst_i;
wire reg_write,alusrc_out,regdst_out,branch_out,zero,branch_select;
wire [32-1:0] pc_data_in,pc_data_out,pc_adder1,pc_adder2,instr_out,rs_out,rt_out,sign_extend_out,alu_in,alu_out,sl2_out;
wire [5-1:0] rd_select_out;
wire [3-1:0] alu_op_out;
wire [4-1:0] alu_ctr_out;
//Internal Signles


//Greate componentes
ProgramCounter PC(
        .clk_i(clk_i),      
	    .rst_i (rst_i),     
	    .pc_in_i(pc_data_in) ,   
	    .pc_out_o(pc_data_out) 
	    );
	
Adder Adder1(
        .src1_i(4),     
	    .src2_i(pc_data_out),     
	    .sum_o(pc_adder1)    
	    );
	
Instr_Memory IM(
        .pc_addr_i(pc_data_out),  
	    .instr_o(instr_out)    
	    );

MUX_2to1 #(.size(5)) Mux_Write_Reg(
        .data0_i(instr_out[20:16]),
        .data1_i(instr_out[15:11]),
        .select_i(regdst_out),
        .data_o(rd_select_out)
        );	
		
Reg_File RF(
        .clk_i(clk_i),      
	    .rst_i(rst_i) ,     
        .RSaddr_i(instr_out[25:21]) ,  
        .RTaddr_i(instr_out[20:16]) ,  
        .RDaddr_i(rd_select_out) ,  
        .RDdata_i(alu_out)  , 
        .RegWrite_i (reg_write),
        .RSdata_o(rs_out) ,  
        .RTdata_o(rt_out)   
        );
	
Decoder Decoder(
        .instr_op_i(instr_out[31:26]), 
	    .RegWrite_o(reg_write), 
	    .ALU_op_o(alu_op_out),   
	    .ALUSrc_o(alusrc_out),   
	    .RegDst_o(regdst_out),   
		.Branch_o(branch_out)   
	    );

ALU_Ctrl AC(
        .funct_i(instr_out[5:0]),   
        .ALUOp_i(alu_op_out),   
        .ALUCtrl_o(alu_ctr_out) 
        );
	
Sign_Extend SE(
        .data_i(instr_out[15:0]),
        .data_o(sign_extend_out)
        );

MUX_2to1 #(.size(32)) Mux_ALUSrc(
        .data0_i(rt_out),
        .data1_i(sign_extend_out),
        .select_i(alusrc_out),
        .data_o(alu_in)
        );	
		
ALU ALU(
        .src1_i(rs_out),
	    .src2_i(alu_in),
	    .ctrl_i(alu_ctr_out),
	    .result_o(alu_out),
		.zero_o(zero)
	    );
		
Adder Adder2(
        .src1_i(pc_adder1),     
	    .src2_i(sl2_out),     
	    .sum_o(pc_adder2)      
	    );
		
Shift_Left_Two_32 Shifter(
        .data_i(sign_extend_out),
        .data_o(sl2_out)
        ); 		
		
MUX_2to1 #(.size(32)) Mux_PC_Source(
        .data0_i(pc_adder1),
        .data1_i(pc_adder2),
        .select_i(branch_select),
        .data_o(pc_data_in)
        );	

and and1(branch_select,branch_out,zero);

endmodule
		  


