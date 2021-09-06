/*
** EPITECH PROJECT, 2019
** d
** File description:
** d
*/

#include "../include/my.h"
#include "../include/my_rush3.h"

int rush3(char *str)
{
    int width = get_width(str);
    int height = get_height(str, width);
    char *edges = malloc(sizeof(char) * 5);

    if (width == 0 || height == 0) {
        my_putstr("none\n");
        return (0);
    }
    edges = get_edges(str, width, height);
    check_rush_number(str, edges, width, height);
    my_putchar('\n');
}

int my_output(char *str, int width, int height)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] != 'B' && str[i] != '\n') {
            my_putstr("none");
            return (0);
        }
    my_putstr("[rush1-3] ");
    my_print_nbrs(width, height);
    my_putstr(" || [rush1-4] ");
    my_print_nbrs(width, height);
    my_putstr(" || [rush1-5] ");
    return (1);
}
