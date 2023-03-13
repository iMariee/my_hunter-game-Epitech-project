/*
** EPITECH PROJECT, 2022
** Hunter
** File description:
** Untitled-1
*/

#include "struct.h"
#include "constants.h"

void set_scale(sfSprite *sp, float x , float y)
{
    sfVector2f vec = {x, y};
    sfSprite_setScale(sp, vec);
}
