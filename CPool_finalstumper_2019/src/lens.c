/*
** EPITECH PROJECT, 2019
** f
** File description:
** f
*/

#include "../include/my.h"
#include "../include/my_rush3.h"

int get_width(char *str)
{
    int with_counter = 0;

    while (str[with_counter] != '\n')
        with_counter += 1;
    return (with_counter);
}

int get_height(char *str, int width)
{
    int height = 0;

    height = my_strlen(str) / (width+1);
    return (height);
}