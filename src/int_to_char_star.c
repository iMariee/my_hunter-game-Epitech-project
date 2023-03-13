/*
** EPITECH PROJECT, 2022
** Hunter
** File description:
** Untitled-1
*/

#include <stdlib.h>
#include "root.h"

char *int_to_char_star(int num)
{
    int i = 0;
    char *star = malloc(sizeof(int) * num);
    int len = int_len(num);

    while (i != len) {
        star[i] = num + 48;
        i++;
    }
    star[i] = '\0';
    return star;
}
