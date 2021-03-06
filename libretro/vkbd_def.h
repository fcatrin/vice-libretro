#ifndef VKBD_DEF_H
#define VKBD_DEF_H

#include "libretro.h"

typedef struct {
	char norml[NLETT];
	char shift[NLETT];
	int val;	
} Mvk;

Mvk MVk[NPLGN*NLIGN*2] = {

	// 0
	{ "1"  ,"!"   ,RETROK_1},
	{ "2"  ,"\""  ,RETROK_2},
	{ "3"  ,"#"   ,RETROK_3},
	{ "4"  ,"$"   ,RETROK_4},
	{ "5"  ,"%%"  ,RETROK_5},
	{ "6"  ,"&"   ,RETROK_6},
	{ "7"  ,"'"   ,RETROK_7},
	{ "8"  ,"("   ,RETROK_8},
	{ "9"  ,")"   ,RETROK_9},
	{ "0"  ,"0"   ,RETROK_0},
	{ "f1" ,"f2"  ,RETROK_F1},

	// 11
	{ "Q"  ,"Q"   ,RETROK_q},
	{ "W"  ,"W"   ,RETROK_w},
	{ "E"  ,"E"   ,RETROK_e},
	{ "R"  ,"R"   ,RETROK_r},
	{ "T"  ,"T"   ,RETROK_t},
	{ "Y"  ,"Y"   ,RETROK_y},
	{ "U"  ,"U"   ,RETROK_u},
	{ "I"  ,"I"   ,RETROK_i},
	{ "O"  ,"O"   ,RETROK_o},
	{ "P"  ,"P"   ,RETROK_p},
	{ "f3" ,"f4"  ,RETROK_F3},

	// 22
	{ "A"  ,"A"   ,RETROK_a},
	{ "S"  ,"S"   ,RETROK_s},
	{ "D"  ,"D"   ,RETROK_d},
	{ "F"  ,"F"   ,RETROK_f},
	{ "G"  ,"G"   ,RETROK_g},
	{ "H"  ,"H"   ,RETROK_h},
	{ "J"  ,"J"   ,RETROK_j},
	{ "K"  ,"K"   ,RETROK_k},
	{ "L"  ,"L"   ,RETROK_l},
	{ {31} ,{31}  ,RETROK_INSERT}, // £
	{ "f5" ,"f6"  ,RETROK_F5},

	// 33
	{ "Z"  ,"Z"   ,RETROK_z},
	{ "X"  ,"X"   ,RETROK_x},
	{ "C"  ,"C"   ,RETROK_c},
	{ "V"  ,"V"   ,RETROK_v},
	{ "B"  ,"B"   ,RETROK_b},
	{ "N"  ,"N"   ,RETROK_n},
	{ "M"  ,"M"   ,RETROK_m},
	{ ","  ,"<"   ,RETROK_COMMA},
	{ "."  ,">"   ,RETROK_PERIOD},
	{ "/"  ,"?"   ,RETROK_SLASH},
	{ "f7" ,"f8"  ,RETROK_F7},

	// 44
	{ {25} ,{25}  ,RETROK_BACKQUOTE}, // Left arrow
	{ "CTR","CTR" ,RETROK_TAB},
	{ "+"  ,"+"   ,RETROK_MINUS},
	{ "-"  ,"-"   ,RETROK_EQUALS},
	{ "@"  ,"@"   ,RETROK_LEFTBRACKET},
	{ "*"  ,"*"   ,RETROK_RIGHTBRACKET},
	{ {26} ,{7}   ,RETROK_DELETE}, // Up arrow / Pi
	{ ":"  ,"["   ,RETROK_SEMICOLON},
	{ ";"  ,"]"   ,RETROK_QUOTE},
	{ "="  ,"="   ,RETROK_BACKSLASH},
	{ "STB","STB" ,-3},  // Statusbar

	// 55
	{ {24} ,{24}  ,RETROK_LCTRL},
	{ "R/S","R/S" ,RETROK_ESCAPE},	
	{ "S/L","S/L" ,-5},  // ShiftLock
	{ "LSH","LSH" ,RETROK_LSHIFT},
	{ "RSH","RSH" ,RETROK_RSHIFT},
	{ "RST","RST" ,RETROK_PAGEUP},
	{ "CLR","CLR" ,RETROK_HOME},
	{ "DEL","DEL" ,RETROK_BACKSPACE},
	{ {30} ,{30}  ,RETROK_UP},
	{ "RET","RET" ,RETROK_RETURN},
	{ "JOY","JOY" ,-4},  // Switch joyport

	// 66
	{ {17} ,{17}  ,-2},  // Reset
	{ {19} ,{19}  ,-15}, // Datasette RESET
	{ {20} ,{20}  ,-12}, // Datasette PLAY
	{ {21} ,{21}  ,-14}, // Datasette RWD
	{ {22} ,{22}  ,-13}, // Datasette FWD
	{ {23} ,{23}  ,-11}, // Datasette STOP
	{ {18} ,{18}  ,RETROK_SPACE},
	{ {27} ,{27}  ,RETROK_LEFT},
	{ {28} ,{28}  ,RETROK_DOWN},
	{ {29} ,{29}  ,RETROK_RIGHT},
	{ "TTF","TTF" ,-20}, // Toggle turbo fire
};

#endif
