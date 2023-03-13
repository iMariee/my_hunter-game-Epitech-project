/*
** EPITECH PROJECT, 2022
** Hunter
** File description:
** Untitled-1
*/

#include "struct.h"
#include "root.h"
#include "constants.h"
#include <stdio.h>

text_t func(useful_t structure, sprite_t *bkg, sprite_t *cafard, text_t txt)
{
    sfFont *font = sfFont_createFromFile("./thef.ttf");
    text_t counter = init_life(font, sfRed);

    sfRenderWindow_drawSprite(structure.window, bkg->sprite, NULL);
    sfRenderWindow_drawSprite(structure.window, cafard->sprite, NULL);
    sfRenderWindow_drawText(structure.window, txt.text, NULL);
    sfRenderWindow_drawText(structure.window, counter.text, NULL);
    count_life(structure, cafard, counter);
    at_edge(cafard, structure);
    set_pos_txt(counter, 120, 0);
    sfRenderWindow_display(structure.window);
    sfRenderWindow_clear(structure.window, sfWhite);
    move_image(cafard);
    change_positions(cafard, cafard->positions.x, cafard->positions.y);
    return counter;
}
