/*
** EPITECH PROJECT, 2022
** Hunter
** File description:
** Untitled-1
*/

#include <SFML/Graphics/Font.h>
#include <SFML/Graphics/Types.h>
#include "struct.h"

text_t init_text(char *str, sfFont *font, sfColor col)
{
    text_t txt;

    txt.text = sfText_create();
    txt.posi_text.x = 0;
    txt.posi_text.y = 0;
    sfText_setString(txt.text, str);
    sfText_setFont(txt.text, font);
    sfText_setColor(txt.text, col);
    sfText_setOutlineThickness(txt.text, 2);
    sfText_setCharacterSize(txt.text, 40);
    sfText_setPosition(txt.text, txt.posi_text);
    return txt;
}
