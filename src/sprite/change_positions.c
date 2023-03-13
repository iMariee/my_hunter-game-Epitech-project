/*
** EPITECH PROJECT, 2022
** Hunter
** File description:
** Untitled-1
*/

#include "struct.h"
#include "constants.h"

void change_positions(sprite_t *cafard, int x, int y)
{
    cafard->positions.x = x;
    cafard->positions.y = y;
    sfSprite_setPosition(cafard->sprite, cafard->positions);
}
