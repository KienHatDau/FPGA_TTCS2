`timescale 1ns / 1ps
module TestLCD( clk, sf_e, e, rs, rw, d, c, b, a );

	(* LOC = "C9" *) input clk; 
	(* LOC = "D16" *) output reg sf_e; // 1 LCD access (0 StrataFlash access)
	(* LOC = "M18" *) output reg e; 
	(* LOC = "L18" *) output reg rs; 
	(* LOC = "L17" *) output reg rw; 
	(* LOC = "M15" *) output reg d; 
	(* LOC = "P17" *) output reg c; 
	(* LOC = "R16" *) output reg b; 
	(* LOC = "R15" *) output reg a; 
	
	reg [ 26 : 0 ] count = 0;	// 27-bit count, 0-(128M-1), over 2 secs
	reg [ 5 : 0 ] code;			// 6-bit different signals to give out
	reg refresh;					// refresh LCD rate @ about 25Hz
	
	always @ (posedge clk) begin
		count <= count +1;
		
		case ( count[ 26 : 21 ] )	// as top 6 bits change
//  bat nguon thuc hien vong tuan hoan nhap nhay
			0: code <= 6'h03;			// bat nguon init
			1: code <= 6'h03;			// bat lai mot lan
			2: code <= 6'h03;			// bat  lai nguon khi ban man LCD bat
			3: code <= 6'h02;			// nhap nhay hien thi ki tu 
			
			4: code <= 6'h02;			// Function Set, upper nibble 0010
			5: code <= 6'h08;			// lower nibble 1000 (10xx)
			
// Entry Mode
			6: code <= 6'h00; 		
			7: code <= 6'h06;			
// Display On/Off
			8: code <= 6'h00;			
			9: code <= 6'h0C;			
// Clear Display,
			10: code <= 6'h00;		
			11: code <= 6'h01;		
			//nhap char
         12: code <= 6'h22;           // khoang trang
			13: code <= 6'h20;
			14: code <= 6'h24;		// 'H' high nibble
			15: code <= 6'h28;		// 'H' low nibble
			16: code <= 6'h25;		// V
			17: code <= 6'h26;
			18: code <= 6'h24;		// K
			19: code <= 6'h2B;
			20: code <= 6'h25;		// T
			21: code <= 6'h24;
			22: code <= 6'h22;       // khoang trang
			23: code <= 6'h20;
			24: code <= 6'h24;		// M
			25: code <= 6'h2D;
			26: code <= 6'h26;      // a
			27: code <= 6'h21;
         28 : code <= 6'h27;	    // chu T
         29: code <= 6'h24;	
			30: code <= 6'h22;       // khoang trang
			31: code <= 6'h20;
			32: code <= 6'h24;		// M
			33: code <= 6'h2D;
			34: code <= 6'h26;      // a
			35: code <= 6'h21;
			36: code <= 6'h22;      // !
			37: code <= 6'h21;
//  Set DD RAM (DDR) Address
// dua con tro xuong dong 2
			38: code <= 6'b001100;	
			39: code <= 6'b000000;
         40: code <= 6'h24;      // B
			41: code <= 6'h22;
			42: code <= 6'h26;      // a
			43: code <= 6'h21;
			44: code <= 6'h26;      // o
			45: code <= 6'h2F;
			46: code <= 6'h22;      // khoang trang
			47: code <= 6'h20;
			48: code <= 6'h24;      // C
			49: code <= 6'h23;
			50: code <= 6'h26;      // a
			51: code <= 6'h21;
			52: code <= 6'h26;      // o
			53: code <= 6'h2F;
			54: code <= 6'h22;      // khoang trang
			55: code <= 6'h20;
			56: code <= 6'h24;		// D
			57: code <= 6'h24;
			58: code <= 6'h26;		// o
			59: code <= 6'h2F;					
			60: code <= 6'h24;      // A
			61: code <= 6'h21;		
			62: code <= 6'h26;      // n
			63: code <= 6'h2E;			
			64: code <= 6'h23;      // 1
			65: code <= 6'h21;				
			default: code <= 6'h10;	// the rest un-used time
		endcase

// refresh (enable) the LCD when
// (it flips when counted upto 2M, and flips again after another 2M)
			refresh <= count[ 20 ]; // flip rate almost 25 (50Mhz / 2^21-2M)
			sf_e <= 1;
			{ e, rs, rw, d, c, b, a } <= { refresh, code };
			
	end // always
//
endmodule