/*
** EPITECH PROJECT, 2022
** Hunter
** File description:
** Untitled-1
*/

#include "root.h"
#include "struct.h"
#include <stdio.h>

void event_type(useful_t structure, sprite_t *ev)
{
    if (structure.event.type == sfEvtClosed) {
        sfRenderWindow_close(structure.window);
    }

    if (structure.event.type == sfEvtMouseButtonPressed) {
        mouse_pos(structure, ev);
    }
}
