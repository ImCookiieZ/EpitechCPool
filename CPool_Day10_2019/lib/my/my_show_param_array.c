/*
** EPITECH PROJECT, 2019
** o
** File description:
** o
*/

#include "include/my.h"
#include <unistd.h>
#include <stdlib.h>

int my_show_param_array(struct info_param const *par)
{
    int i;

    for (i = 0; par[i].str; i++) {
        my_putstr(par[i].copy);
        my_putchar('\n');
        my_put_nbr(par[i].length);
        my_putchar('\n');
        for (int j = 0; par[i].word_array[j] != NULL; j++) {
            my_putstr(par[i].word_array[j]);
            my_putchar('\n');
        }
    }
}