///////////////////////////////////////////////////////////////////////////////////
// DEFINITIONS AND VARIABLES
///////////////////////////////////////////////////////////////////////////////////

#define TRUE	1
#define FALSE	0

#define GLOBAL_MAX_X  80 	// X maximum value for the screen (bytes)
#define GLOBAL_MAX_Y  200	// Y maximun value for the screen (px)

#define FNT_W 3 // width of text characters (bytes)
#define FNT_H 8 // height of text characters (px)

#define SPR_W 5 // sprite width (bytes)
#define SPR_H 12 // sprite height (px)

#define SHT_W 4 // shot width (bytes)
#define SHT_H 8 // shot height (px)

// character types
#define SORCERER1	0

#define SENTINEL	2
#define KNIGHT		3
#define GHOST		4
#define BAT			5
#define WITCH		6
#define WIZARD		7
#define NOBODY		9

#define OBJ_W 4 // object width (bytes)
#define OBJ_H 8 // object height (px)

#define TILESET_WELL 38 // the well is detected in this tile number
#define TILESET_DOOR 14 // the door is detected in this tile number
#define TILESET_STORE 39 // in this tile and the next two the store is detected
#define TILESET_BLOCKERS 45 // tile number where the blocking tiles begin

#define BG_COLOR 1 // background color (1 = black)

// maps
#define MAP_W 40 // game screen size in tiles
#define MAP_H 42
#define ORIG_MAP_Y 32 // the map starts at position 32 of the vertical coordinates
#define UNPACKED_MAP_END (u8*)(0x1600) // the program starts at 0x1601
#define UNPACKED_MAP_INI (u8*)(0x0F71)