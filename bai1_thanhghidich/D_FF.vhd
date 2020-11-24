
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity D_FF is
PORT (  d : in STD_LOGIC;
        CLK : in STD_LOGIC;
		  RST :   in STD_LOGIC;
		  q : out STD_LOGIC );
end D_FF;

architecture Behavioral of D_FF is

begin
        PROCESS ( d,CLK,RST)
        BEGIN 
		          IF (RST = '1') THEN
					        q <= '0';
					  ELSIF(rising_edge(clk)) then
					          q <= d;
			        END IF;
                 END PROCESS;					  

end Behavioral;

