///////////////////////////////////////////////////////////////////////////////////
// KEYBOARD FUNCTIONS
///////////////////////////////////////////////////////////////////////////////////

#include "keyboard.h"
#include "screen.h"
#include <cpctelera.h> 

#include "../gfx/tiles.h"			// tiles to compose the map (4x4 px)
#include "../gfx/font.h"			// letters and numbers (6x8 px)
#include "../gfx/logo.h"			// game logo for the main menu (106x36 px)
#include "../gfx/goldframe.h"		// three pieces to create decorative frames (6x6 px) 
#include "../gfx/objects.h"		// 16 objects (8x8 px)
#include "../gfx/magic.h"			// magic shots; red, blue, green and yellow (8x8 px)

// returns the key pressed
cpct_keyID ReturnKeyPressed() {
    u8 i = 10, *keys = cpct_keyboardStatusBuffer + 9;
    u16 keypressed;
    // We wait until a key is pressed
    do { cpct_scanKeyboard(); } while ( ! cpct_isAnyKeyPressed() );
    // We detect which key has been pressed
    do {
        keypressed = *keys ^ 0xFF;
        if (keypressed)
            return (keypressed << 8) + (i - 1); 
        keys--;
    } while(--i);    
	return 0;
}


// wait for the full press of a key
// useful to empty the keyboard buffer
void Wait4Key(cpct_keyID key) {
    do cpct_scanKeyboard_f();
    while(!cpct_isKeyPressed(key));
    do cpct_scanKeyboard_f();
    while(cpct_isKeyPressed(key));
}


// asks for a key and returns the key pressed
cpct_keyID RedefineKey(u8 *info) {
    cpct_keyID key; 
    //PrintText(info, 28, 120, 1);       
    key = ReturnKeyPressed();
    Wait4Key(key);
	cpct_akp_SFXPlay (1, 12, 59, 0, 0, AY_CHANNEL_A);    
    return key;    
}
