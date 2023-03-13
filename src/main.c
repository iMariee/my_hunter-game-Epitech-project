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
#include <SFML/System/Export.h>
#include <SFML/System/Time.h>
#include <SFML/System/Types.h>
#include "root.h"
#include <unistd.h>
#include <stdio.h>
#include "struct.h"
#include <stdlib.h>
#include "constants.h"

int main(void)
{
    useful_t structure = init_useful(window_w, window_h);
    sprite_t *cafard = load_sprite("./cockroach.png");
    sprite_t *bkg = load_sprite("./plancher.png");
    sfFont *font = sfFont_createFromFile("./thef.ttf");
    text_t txt = init_text("Lives :", font, sfBlack);
    text_t counter = init_life(font, sfRed);
    sprite_t *lost = load_sprite("./youlost.png");
    set_scale(cafard->sprite, 4, 4);
    sfRenderWindow_setFramerateLimit(structure.window, 30);

    while (sfRenderWindow_isOpen(structure.window)) {
        while (sfRenderWindow_pollEvent(structure.window, &structure.event)) {
            event_type(structure, cafard);
        }
        counter = func(structure, bkg, cafard, txt);
    }
    destroy_things(structure, cafard, bkg, txt);
    return 0;
}
