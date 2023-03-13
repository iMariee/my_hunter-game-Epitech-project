/*
** EPITECH PROJECT, 2022
** Hunter
** File description:
** Untitled-1
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "struct.h"

void mouse_pos(useful_t win, sprite_t *ev)
{
    sfMouse_getPosition(win.win);
    int cf = ev->positions.y;
    int mou = win.event.mouseButton.y;
    int cfx = ev->positions.x;
    int moux = win.event.mouseButton.x;
    int m_w = cfx + ev->image.width + 10;
    int m_h = cf + ev->image.height + 10;

    if ((moux >= cfx && moux <= m_w + 50) && (mou >= cf && mou <= m_h + 50)) {
        ev->positions.x = 0;
        ev->positions.y += 10;
        sfSprite_setPosition(ev->sprite, ev->positions);
    }
}
