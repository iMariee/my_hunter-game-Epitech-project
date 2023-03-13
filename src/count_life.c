/*
** EPITECH PROJECT, 2022
** Hunter
** File description:
** Untitled-1
*/

#include "struct.h"
#include "root.h"
#include <stdio.h>

int count_life(useful_t structure, sprite_t *cafard, text_t life)
{
    sprite_t *lost;

    if (cafard->caf_pos.x >= 600 || cafard->caf_pos.y >= 800) {
        life.life = life.life - 1;
        char *char_life = int_to_char_star(life.life);
        sfText_setString(life.text, char_life);
    }

    if (life.life == 0) {
        set_scale(cafard, 10, 10);
    }
    return life.life;
}
