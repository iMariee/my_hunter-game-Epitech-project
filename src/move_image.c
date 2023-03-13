/*
** EPITECH PROJECT, 2022
** Hunter
** File description:
** Untitled-1
*/

#include "struct.h"
#include "root.h"

void move_image(sprite_t *cafard)
{
    float sec = get_time(cafard->clock);
    if (sec > 0.25) {
        if (cafard->image.left > 100) {
            cafard->image.left = 0;
        } else {
            cafard->image.left += 50;
        }
        sfClock_restart(cafard->clock);
        sfSprite_setTextureRect(cafard->sprite, cafard->image);
    }
}
