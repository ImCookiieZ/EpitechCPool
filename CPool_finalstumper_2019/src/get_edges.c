/*
** EPITECH PROJECT, 2019
** f
** File description:
** f
*/

#include "../include/my.h"
#include "../include/my_rush3.h"

char *get_edges(char *str, int width, int height)
{
    char *edges = malloc(sizeof(char) * 5);
    int len = my_strlen(str);

    edges[0] = str[0];
    for (int i = 1; i < 4; i++)
        edges[i] = '0';
    edges[4] = '\0';
    if (width == 1 || height == 1) {
        return (edges);
    }
    edges[1] = str[width - 1];
    if (len == width + 1) {
        return (edges);
    }
    edges[2] = str[len - 1 - width];
    edges[3] = str[len - 2];
    return (edges);
}
