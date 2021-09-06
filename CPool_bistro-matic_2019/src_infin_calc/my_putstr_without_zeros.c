/*
** EPITECH PROJECT, 2019
** s
** File description:
** s
*/

#include "../include/my.h"

void my_putstr2(char *result)
{
    int i = 0;

    while (result[i] == '0')
        i++;
    for (; result[i] != '\0'; i++)
        my_putchar(result[i]);
}