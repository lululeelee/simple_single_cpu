//Subject:     CO project 2 - Decoder
//--------------------------------------------------------------------------------
//Version:     1
//--------------------------------------------------------------------------------
//Writer:      0416111 0540112
//----------------------------------------------
//Date:        
//----------------------------------------------
//Description: 
//--------------------------------------------------------------------------------

module Decoder(
    instr_op_i,
	RegWrite_o,
	ALU_op_o,
	ALUSrc_o,
	RegDst_o,
	Branch_o
	);
     
//I/O ports
input  [6-1:0] instr_op_i;  //op_field

output         RegWrite_o;   //write Rd
output [3-1:0] ALU_op_o;		//
output         ALUSrc_o;		//immediate or not
output         RegDst_o;		//choose the rd,regdst=1?rd:rt
output         Branch_o;		//when brach=0,no branch;
 
//Internal Signals
reg    [3-1:0] ALU_op_o;
reg            ALUSrc_o;
reg            RegWrite_o;
reg            RegDst_o;
reg            Branch_o;

//Main function
always@(instr_op_i)begin
case(instr_op_i)
	0:begin
		RegWrite_o<=1;
		ALU_op_o<=3'b0;
		ALUSrc_o<=0;
		RegDst_o<=1;
		Branch_o<=0;
	end
	4:begin
		RegWrite_o<=0;
		ALU_op_o<=3'b001;
		ALUSrc_o<=0;
		RegDst_o<=0;
		Branch_o<=1;
	end
	5:begin
		RegWrite_o<=0;
		ALU_op_o<=3'b010;
		ALUSrc_o<=0;
		RegDst_o<=0;
		Branch_o<=1;
	end
	8:begin
		RegWrite_o<=1;
		ALU_op_o<=3'b011;
		ALUSrc_o<=1;
		RegDst_o<=0;
		Branch_o<=0;
	end
	9:begin
		RegWrite_o<=1;
		ALU_op_o<=3'b100;
		ALUSrc_o<=1;
		RegDst_o<=0;
		Branch_o<=0;
	end
	13:begin
		RegWrite_o<=1;
		ALU_op_o<=3'b101;
		ALUSrc_o<=1;
		RegDst_o<=0;
		Branch_o<=0;
	end
	15:begin
		RegWrite_o<=1;
		ALU_op_o<=3'b110;
		ALUSrc_o<=1;
		RegDst_o<=0;
		Branch_o<=0;
	end
endcase
end
		


endmodule





                    
                    