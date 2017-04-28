//Subject:     CO project 2 - Adder
//--------------------------------------------------------------------------------
//Version:     1
//--------------------------------------------------------------------------------
//Writer:      0416111 0540112
//----------------------------------------------
//Date:        
//----------------------------------------------
//Description: 
//--------------------------------------------------------------------------------

module Adder(
    src1_i,
	src2_i,
	sum_o
	);
     
//I/O ports
input  [32-1:0]  src1_i;
input  [32-1:0]	 src2_i;
output [32-1:0]	 sum_o;

//Internal Signals
wire    [32-1:0]	 sum_o;
reg     [32-1:0]	 sum;
//Parameter
assign sum_o=sum;
//Main function
always@(*)begin
 sum<=src1_i+src2_i;
end

endmodule





                    
                    