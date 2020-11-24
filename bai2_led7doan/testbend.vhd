
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY testbend IS
END testbend;
 
ARCHITECTURE behavior OF testbend IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT bcd_7segment
    PORT(
         BCDin : IN  std_logic_vector(3 downto 0);
         Seven_Segment : OUT  std_logic_vector(6 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal BCDin : std_logic_vector(3 downto 0) := (others => '0');

 	--Outputs
   signal Seven_Segment : std_logic_vector(6 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: bcd_7segment PORT MAP (
          BCDin => BCDin,
          Seven_Segment => Seven_Segment
        );

   -- Clock process definitions
  
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
	BCDin <= "0000";
	wait for 100 ns;
	BCDin <= "0001";
	wait for 100 ns;
	BCDin <= "0010";
	wait for 100 ns;
	BCDin <= "0011";
	wait for 100 ns;
	BCDin <= "0100";
	wait for 100 ns;
	BCDin <= "0101";
	wait for 100 ns;
	BCDin <= "0110";
	wait for 100 ns;
	BCDin <= "0111";
	wait for 100 ns;
	BCDin <= "1000";
	wait for 100 ns;
	BCDin <= "1001";
	wait for 100 ns;
     	

      

      -- insert stimulus here 

      wait;
   end process;

END;
