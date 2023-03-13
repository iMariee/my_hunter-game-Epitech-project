/*
** EPITECH PROJECT, 2022
** Hunter
** File description:
** struct.h
*/

#ifndef STRUCT_H_
    #define STRUCT_H_
    #include <SFML/Graphics/RenderWindow.h>
    #include <SFML/Graphics.h>
    #include <SFML/Config.h>
    #include <SFML/Window.h>
    #include <SFML/System/Export.h>
    #include <SFML/System/Time.h>
    #include <SFML/System/Types.h>
    #include <SFML/System/Vector2.h>
    #include <SFML/Graphics/Rect.h>
    #include "root.h"
    #include <stdbool.h>

typedef struct useful_s {
    sfVideoMode mode;
    sfRenderWindow *window;
    sfEvent event;
    sfWindow *win;
    int life;
} useful_t;

typedef struct sprite_s {
    char *path;
    sfTexture *texture;
    sfSprite *sprite;
    sfClock *clock;
    float seconds;
    sfTime time;
    sfIntRect image;
    sfVector2f positions;
    int status;
    sfVector2i mouse_pos;
    sfVector2f caf_pos;
} sprite_t;

typedef struct text_s {
    sfFont *font;
    sfText *text;
    sfVector2f posi_text;
    sfUint32 life;
}text_t;

void destroy_things(useful_t structu, sprite_t *sp, sprite_t *bkg, text_t txt);
useful_t init_useful(int width, int height);
sprite_t *load_sprite(char *path);
void move_image(sprite_t *cafard);
void event_type(useful_t structure, sprite_t *ev);
float get_time(sfClock *clock);
void change_positions(sprite_t *cafard, int x, int y);
int at_edge(sprite_t *cafard, useful_t win);
void set_scale(sfSprite *sp, float x , float y);
void mouse_pos(useful_t win, sprite_t *event);
text_t init_text(char *str, sfFont *font, sfColor col);
void set_pos_txt(text_t txt, float x, float y);
text_t init_life(sfFont *font, sfColor col);
int count_life(useful_t structure, sprite_t *cafard, text_t life);
text_t func(useful_t structure, sprite_t *bkg, sprite_t *cafard, text_t txt);

#endif
