//Subject:     CO project 2 - ALU Controller
//--------------------------------------------------------------------------------
//Version:     1
//--------------------------------------------------------------------------------
//Writer:      李欣洳 0416111 黃壽欽 0540112		   
//----------------------------------------------
//Date:      28/4/2017  
//----------------------------------------------
//Description:  SIMPLE SINGLE CPU
//--------------------------------------------------------------------------------

module ALU_Ctrl(
          funct_i,
          ALUOp_i,
          ALUCtrl_o,
			 shamt_select
          );
          
//I/O ports 
input      [6-1:0] funct_i;
input      [3-1:0] ALUOp_i;

output     [4-1:0] ALUCtrl_o;    
output shamt_select;     
//Internal Signals
reg        [4-1:0] ALUCtrl_o;
reg shamt_select;
//Parameter
always@(funct_i,ALUOp_i)begin
/*case(funct_i)
	0:begin
		case(ALUOp_i)
			//0:
			1:ALUCtrl_o<=4'b0111;
			2:ALUCtrl_o<=4'b1010;
			3:ALUCtrl_o<=4'b0011;
			4:ALUCtrl_o<=4'b0011;
			5:ALUCtrl_o<=4'b0001;
			6:ALUCtrl_o<=4'b1011;
		endcase
	end
	3:ALUCtrl_o<=4'b1000;
	7:ALUCtrl_o<=4'b1001;
	32:ALUCtrl_o<=4'b0010;
	34:ALUCtrl_o<=4'b0110;
	36:ALUCtrl_o<=4'b0000;
	37:ALUCtrl_o<=4'b0001;
	42:ALUCtrl_o<=4'b0100;
endcase*/
case(ALUOp_i)
	0:begin
		case(funct_i)
			3:ALUCtrl_o<=4'b1000;
			7:ALUCtrl_o<=4'b1001;
			32:ALUCtrl_o<=4'b0010;	//add
			34:ALUCtrl_o<=4'b0110;	//sub
			36:ALUCtrl_o<=4'b0000;	//and
			37:ALUCtrl_o<=4'b0001;	//or
			42:ALUCtrl_o<=4'b0100;	//slt
			//0:
		endcase
	end
	1:ALUCtrl_o<=4'b0111;	//beq
	2:ALUCtrl_o<=4'b1010;	//bne
	3:ALUCtrl_o<=4'b0010;   //addi
	4:ALUCtrl_o<=4'b0011;	//sltiu
	5:ALUCtrl_o<=4'b0001;	//ori
	6:ALUCtrl_o<=4'b1011;	//lui
endcase	
//Select exact operation
if(ALUOp_i==0&&funct_i==3_)
	shamt_select<=1;
else
	shamt_select<=0;
end
endmodule     





                    
                    
