/*
** EPITECH PROJECT, 2019
** negative
** File description:
** sign handling
*/

#include "../../include/my.h"

char *to_neg(char *str)
{
    char *new = malloc(sizeof(char) * my_strlen(str) + 2);
    int i = 0;

    if (!is_neg(str) && str[0] != '\0') {
        new[0] = '-';
        while (str[i] != '\0') {
            new[i + 1] = str[i];
            i++;
        }
        new[i + 1] = '\0';
        }
    return (new);
}

char *switch_neg(char *str)
{
    if (!is_neg(str))
        return (to_neg(str));
    return (my_abs(str));
}

int is_neg(char *str)
{
    if (str[0] == '-')
        return (1);
    return (0);
}

char *my_abs(char *str)
{
    char *new = malloc(sizeof(char) * my_strlen(str) + 1);
    int i = 0;

    if (is_neg(str)) {
        while (str[i] != '\0') {
            new[i] = str[i + 1];
            i += 1;
        }
        return (new);
    }
    free(new);
    return (str);
}
