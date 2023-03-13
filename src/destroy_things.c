/*
** EPITECH PROJECT, 2022
** Hunter
** File description:
** Untitled-1
*/

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics.h>
#include <SFML/Config.h>
#include <SFML/Window.h>
#include "struct.h"
#include "root.h"

void destroy_things(useful_t structu, sprite_t *sp, sprite_t *bkg, text_t txt)
{
    sfSprite_destroy(sp->sprite);
    sfTexture_destroy(sp->texture);
    sfClock_destroy(sp->clock);
    sfSprite_destroy(bkg->sprite);
    sfTexture_destroy(bkg->texture);
    sfText_destroy(txt.text);
    sfRenderWindow_destroy(structu.window);
}
