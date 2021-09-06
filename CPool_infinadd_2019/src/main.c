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

int main(int argc, char **argv)
{
    if (error_check(argc, argv[1], argv[2]) == 1)
        return (0);
    my_pre_query(argv);
    return (0);
}
