/*
** EPITECH PROJECT, 2019
** check
** File description:
** check
*/

#include "../include/my.h"
#include "../include/my_rush3.h"

int check_rush_1(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != 'o' && str[i] != '-' && str[i] \
!= '|' && str[i] != ' ' && str[i] != ('\n')) {
            my_putstr("none");
            return (0);
        }
    }
    my_putstr("[rush1-1] ");
    return (1);
}

int check_rush_2(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '/' && str[i] != '\\' && str[i] \
!= '*' && str[i] != ' ' && str[i] != ('\n')) {
            my_putstr("none");
            return (0);
        }
    }
    my_putstr("[rush1-2] ");
    return (1);
}

int check_rush_3(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != 'A' && str[i] != 'B' && str[i] \
!= 'C' && str[i] != ' ' && str[i] != ('\n')) {
            my_putstr("none");
            return (0);
        }
    }
    my_putstr("[rush1-3] ");
    return (1);
}

int check_rush_4(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != 'A' && str[i] != 'B' && str[i] \
!= 'C' && str[i] != ' ' && str[i] != ('\n')) {
            my_putstr("none");
            return (0);
        }
    }
    my_putstr("[rush1-4] ");
    return (1);
}

int check_rush_5(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != 'A' && str[i] != 'B' && str[i] \
!= 'C' && str[i] != ' ' && str[i] != ('\n')) {
            my_putstr("none");
            return (0);
        }
    }
    my_putstr("[rush1-5] ");
    return (1);
}