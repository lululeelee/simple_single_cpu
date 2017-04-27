//Subject:     CO project 2 - MUX 221
//--------------------------------------------------------------------------------
//Version:     1
//--------------------------------------------------------------------------------
//Writer:      李欣洳 0416111 黃壽欽 0540112		   
//----------------------------------------------
//Date:      28/4/2017  
//----------------------------------------------
//Description:  SIMPLE SINGLE CPU
//--------------------------------------------------------------------------------
     
module MUX_2to1(
               data0_i,
               data1_i,
               select_i,
               data_o
               );

parameter size = 0;			   
			
//I/O ports               
input   [size-1:0] data0_i;          
input   [size-1:0] data1_i;
input              select_i;
output  [size-1:0] data_o; 

//Internal Signals
reg     [size-1:0] data_o;
always @(select_i,data0_i,data1_i)begin
	if(select_i==0)
		data_o<=data0_i;
	else
		data_o<=data1_i;
end
//Main function

endmodule      
          
          
