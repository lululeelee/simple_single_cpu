//Subject:     CO project 2 - Sign extend
//--------------------------------------------------------------------------------
//Version:     1
//--------------------------------------------------------------------------------
//Writer:      李欣洳 0416111 黃壽欽 0540112		   
//----------------------------------------------
//Date:      28/4/2017  
//----------------------------------------------
//Description:  SIMPLE SINGLE CPU
//--------------------------------------------------------------------------------

module Sign_Extend(
    data_i,
    data_o
    );
               
//I/O ports
input   [16-1:0] data_i;
output  [32-1:0] data_o;

//Internal Signals
reg     [32-1:0] data_o;
always@(data_i)begin
data_o[15:0]<=data_i[15:0];
if(data_i[15]==1)
	data_o[31:16]<=16'hffff;
else
	data_o[31:16]<=16'h0000;
end

//Sign extended
          
endmodule      
     
