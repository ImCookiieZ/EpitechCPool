/*
** EPITECH PROJECT, 2019
** zeros
** File description:
** addition
*/

#include "../include/my.h"

char *my_zero_adding(char *str, int const i, int const j)
{
    int len = my_strlen(str);
    char *new = malloc(sizeof(char) * (len + i + j + 1));

    new = my_strcpy(new, str);
    for (int l = 0; l < i + j; l++) {
        new[len] = '0';
        len++;
    }
    free(str);
    new[len] = '\0';
    return (new);
}