/*
** EPITECH PROJECT, 2019
** d
** File description:
** d
*/

#include "../include/my.h"

int bigger_number(char *number1, char *number2)
{
    int len1 = my_strlen(number1);
    int len2 = my_strlen(number2);

    if (len1 > len2)
        return (len1);
    return (len2);
}

int count_minus(char *nb)
{
    int counter = 0;

    for (int i = 0; nb[i] != '\0'; i++)
        if (nb[i] == '-')
            counter++;
    return (counter);
}

int count_signs(char *nb)
{
    int counter = 0;

    for (int i = 0; nb[i] != '\0'; i++)
        if (nb[i] == '+' || nb[i] == '-')
            counter++;
    return (counter);
}