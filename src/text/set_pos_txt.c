/*
** EPITECH PROJECT, 2022
** Hunter
** File description:
** set_pos_txt.c
*/

#include "struct.h"

void set_pos_txt(text_t txt, float x, float y)
{
    sfVector2f pos = {x, y};
    sfText_setPosition(txt.text, pos);
}
