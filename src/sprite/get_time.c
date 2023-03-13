/*
** EPITECH PROJECT, 2022
** Hunter
** File description:
** get_time.c
*/

#include <SFML/System/Time.h>
#include <SFML/System/Clock.h>
#include "struct.h"

float get_time(sfClock *clock)
{
    sfTime microseconds = sfClock_getElapsedTime(clock);
    float res = (microseconds.microseconds / 1000000.0);
    return res;
}
