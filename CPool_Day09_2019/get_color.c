/*
** EPITECH PROJECT, 2019
** d
** File description:
** d
*/

#include <stdio.h>

int get_color(unsigned char red, unsigned char green, unsigned char blue)
{
    int color;

    color = red;
    color = color << 8;
    color += green;
    color = color << 8;
    color += blue;
    return (color);
}