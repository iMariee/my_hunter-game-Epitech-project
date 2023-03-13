/*
** EPITECH PROJECT, 2022
** count
** File description:
** count
*/

#include <stdlib.h>

int int_len(int str)
{
    int i = 0;
    int count = 0;

    while (str > 0) {
        str = str / 10;
        count++;
        i++;
    }
    return count;
}
