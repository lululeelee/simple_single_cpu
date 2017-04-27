//Subject:     CO project 2 - ALU
//--------------------------------------------------------------------------------
//Version:     1
//--------------------------------------------------------------------------------
//Writer:      
//----------------------------------------------
//Date:        
//----------------------------------------------
//Description: 
//--------------------------------------------------------------------------------

module ALU(
    src1_i,
	src2_i,
	ctrl_i,
	result_o,
	zero_o
	);
     
//I/O ports
input  [32-1:0]  src1_i;
input  signed [32-1:0]	 src2_i;
input  [4-1:0]   ctrl_i;

output [32-1:0]	 result_o;
output           zero_o;

//Internal signals
reg    [32-1:0]  result_o;
wire             zero_o;
//reg unsigned [32-1:0] tmp_slt,tmp_sra;
wire unsigned [32-1:0] tmp_slt,tmp_sra;
//reg unsigned [5-1:0] tmp_sra;

//Parameter
assign zero_o =(result_o==0);

assign tmp_slt={16'b0,src2_i[16-1:0]};
assign tmp_sra={27'b0,src1_i[10:6]};
always@(ctrl_i or src1_i or src2_i)begin
//tmp_slt<={16'b0,src2_i[16-1:0]};
//tmp_sra<={27'b0,src1_i[10:6]};
case(ctrl_i)
	0:result_o<=src1_i&src2_i;				//and
	1:result_o<=src1_i|src2_i;				//or
	2:result_o<=src1_i+src2_i;				//add
	3:result_o<=src1_i<tmp_slt?1:0;		//slti
	4:result_o<=src1_i<src2_i?1:0;		//slt
	6:result_o<=src1_i-src2_i;				//sub
	7:result_o<=src1_i==src2_i?0:1;		//beq
	8:result_o<=src2_i>>>tmp_sra;			//sra
	9:result_o<=src2_i>>>src1_i;			//srav
	10:result_o<=src1_i!=src2_i?0:1;		//bne
	11:result_o<=src2_i<<<16;				//lui
endcase
//Main function
end
endmodule





                    
                    