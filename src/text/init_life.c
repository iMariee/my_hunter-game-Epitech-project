/*
** EPITECH PROJECT, 2022
** Hunter
** File description:
** Untitled-1
*/

#include <SFML/Graphics/Font.h>
#include <SFML/Graphics/Types.h>
#include "struct.h"

text_t init_life(sfFont *font, sfColor col)
{
    text_t txt;

    txt.text = sfText_create();
    txt.life = 3;
    char *char_life = int_to_char_star(txt.life);
    sfText_setString(txt.text, char_life);
    sfText_setFont(txt.text, font);
    sfText_setColor(txt.text, col);
    sfText_setOutlineThickness(txt.text, 2);
    sfText_setCharacterSize(txt.text, 40);
    sfText_setPosition(txt.text, txt.posi_text);
    return txt;
}
