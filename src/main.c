#include <gb/gb.h>
#include <stdio.h>
#include "sprites/sprite.c"

void main(){
    UINT8 currentSprite = 0;
    set_sprite_data(0, 1, sprite);
    set_sprite_tile(0, 0);
    move_sprite(0, 88, 78);
    SHOW_SPRITES;

    // while (1)
    // {
    //     currentSprite = (currentSprite == 1 ? 0 : 1);
    //     set_sprite_tile(0, currentSprite);
    //     delay(1000);
    // }
    
}
