module Reg #(parameter width = 32)
(
    input clk,
    input reset,
    input den,
    input [width - 1: 0] dIn,
    output reg [width - 1: 0] dOut
    );
	 
	 always @(posedge clk) begin
	     if(reset)
		     dOut <= 0;
		  else
		     if(!den)
			    dOut <= dIn;
	 end
endmodule
