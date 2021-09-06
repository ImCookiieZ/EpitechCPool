/*
** EPITECH PROJECT, 2019
** task 04
** File description:
** nop
*/

#include <string.h>

char        *my_evil_str(char *str)
{
    int     loop;
    int     len = my_strlen(str);
    int     ende;
    char    temp;
    char    string;

    loop = len / 2;
    for (int i = 0; i != loop; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    return (str);
}