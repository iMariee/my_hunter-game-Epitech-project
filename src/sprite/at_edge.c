/*
** EPITECH PROJECT, 2022
** Hunter
** File description:
** Untitled-1
*/

#include <stdbool.h>
#include "struct.h"
#include "constants.h"
#include <stdio.h>

int at_edge(sprite_t *cafard, useful_t win)
{
    win.life = 3;

    if (cafard->positions.x >= window_w) {
        cafard->positions.x = -10;
        cafard->positions.y = 0;
        win.life--;
        return win.life;
    } else {
        cafard->positions.x += 10;
        cafard->positions.y += 5;
        return win.life;
    }
}
