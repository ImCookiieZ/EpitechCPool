/*
** EPITECH PROJECT, 2019
** check_rush_number
** File description:
** check_rush_number
*/

#include "../include/my.h"
#include "../include/my_rush3.h"

void check_rush_number(char *str, char *edge, int width, int height)
{
    int my_error = 0;

    if (edge[0] == 'o')
        my_error = check_rush_1(str);
    if (edge[0] == '/' || edge[0] == '*')
        my_error = check_rush_2(str);
    if (edge[0] == 'A' || edge[0] == 'B') {
        if (edge[0] == 'B')
            my_error = my_output(str, width, height);
        if (edge[0] == edge[1])
            my_error = check_rush_3(str);
        if (edge[0] == edge[2])
            my_error = check_rush_4(str);
        if (edge[0] == edge[3])
            my_error = check_rush_5(str);
    }
    if (my_error == 1)
        my_print_nbrs(width, height);
}

void my_print_nbrs(int width, int height)
{
    my_put_nbr(width);
    my_putchar(' ');
    my_put_nbr(height);
}
