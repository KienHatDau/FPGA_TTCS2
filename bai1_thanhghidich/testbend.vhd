--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:13:01 11/14/2020
-- Design Name:   
-- Module Name:   D:/FPGA/TTCS2/bai1_thanhghidich/testbend.vhd
-- Project Name:  bai1_thanhghidich
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: bai1_thanhghidich
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY testbend IS
END testbend;
 
ARCHITECTURE behavior OF testbend IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT bai1_thanhghidich
    PORT(
         DATA_in : IN  std_logic;
         clk : IN  std_logic;
         rst : IN  std_logic;
         DATA_out : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal DATA_in : std_logic := '0';
   signal clk : std_logic := '0';
   signal rst : std_logic := '0';

 	--Outputs
   signal DATA_out : std_logic_vector(3 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: bai1_thanhghidich PORT MAP (
          DATA_in => DATA_in,
          clk => clk,
          rst => rst,
          DATA_out => DATA_out
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
		wait for 100 ns;
    
	 
	 DATA_in <= '1';
	 wait for 40ns ;
	 
	 DATA_in <= '0';
	 wait for 40 ns;
	 rst <= '1';
	 wait for 40 ns;
	 DATA_in <= '1';
	 wait for 40 ns;
	 
	 rst <= '0';
	 wait for 10 ns;
	 DATA_in <= '1';
	 wait for 40ns ;
	 
	 DATA_in <= '0';
	 wait for 40 ns;
	 DATA_in <= '1';
	 wait for 40ns ;
	 
	 DATA_in <= '0';
	 wait for 40 ns;


      wait for clk_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
