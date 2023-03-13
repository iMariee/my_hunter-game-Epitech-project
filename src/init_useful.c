/*
** EPITECH PROJECT, 2022
** Hunter
** File description:
** init_useful.c
*/

#include <SFML/Graphics.h>
#include "struct.h"

useful_t init_useful(int width, int height)
{
    useful_t win;

    char *ti = "KILL THE COCKROACHES, THEY'RE DIRTY!!!!";
    sfVideoMode mode = {width, height, 32};
    win.mode = mode;
    win.window = sfRenderWindow_create(win.mode, ti, sfClose, NULL);
    win.win = win.window;
    return win;
}
