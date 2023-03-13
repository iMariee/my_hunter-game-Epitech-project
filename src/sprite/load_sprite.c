/*
** EPITECH PROJECT, 2022
** Hunter
** File description:
** init_sprite.c
*/

#include <stdlib.h>
#include "struct.h"

static sfVector2f init_2f(float x, float y)
{
    sfVector2f a;
    a.x = x;
    a.y = y;
    return a;
}

static sfVector2i init_2i(int x, int y)
{
    sfVector2i a;
    a.x = x;
    a.y = y;
    return a;
}

static sfIntRect init_rect(int x, int y, int c, int r)
{
    sfIntRect a;
    a.left = x;
    a.top = y;
    a.width = c;
    a.height = r;
    return a;
}

sprite_t *load_sprite(char *path)
{
    sprite_t *spr = malloc(sizeof(sprite_t));
    spr->path = path;
    spr->texture = sfTexture_createFromFile(path, NULL);
    if (!spr->texture) {
        spr->status = 84;
        return spr;
    }
    spr->sprite = sfSprite_create();
    sfSprite_setTextureRect(spr->sprite, spr->image);
    sfSprite_setTexture(spr->sprite, spr->texture, sfFalse);
    spr->clock = sfClock_create();
    spr->seconds = get_time(spr->clock);
    spr->time = sfClock_getElapsedTime(spr->clock);
    spr->image = init_rect(0, 0, 50, 50);
    spr->positions = init_2f(0, 0);
    spr->mouse_pos = init_2i(0, 0);
    spr->caf_pos = init_2f(0, 0);
    spr->status = 0;
    return spr;
}
