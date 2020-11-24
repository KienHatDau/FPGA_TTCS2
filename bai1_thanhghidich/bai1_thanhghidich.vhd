library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity bai1_thanhghidich is
PORT ( DATA_in : in STD_LOGIC;
       clk : in STD_LOGIC;
		 rst : in STD_LOGIC;
		 DATA_out : out STD_LOGIC_VECTOR (3 downto 0 )
		 );
		 
end bai1_thanhghidich;

architecture Behavioral of bai1_thanhghidich is

 COMPONENT D_FF IS 
       PORT ( d : in STD_LOGIC;
        clk : in STD_LOGIC;
		  rst : in STD_LOGIC;
		  q : out STD_LOGIC );
		  
 end COMPONENT;
signal temp : STD_LOGIC_VECTOR (3 downto 0 );

begin

   u1: D_FF port map(DATA_in,clk,rst,temp(3));
	u2: D_FF port map(temp(3),clk,rst,temp(2));
	u3: D_FF port map(temp(2),clk,rst,temp(1));
	u4: D_FF port map(temp(1),clk,rst,temp(0));
	
     DATA_out <= temp;

end Behavioral;

