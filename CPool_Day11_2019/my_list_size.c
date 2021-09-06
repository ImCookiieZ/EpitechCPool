/*
** EPITECH PROJECT, 2019
** s
** File description:
** s
*/

#include "include/my.h"
#include "include/mylist.h"

int my_list_size(linked_list_t const *begin)
{
    int size = 0;
    linked_list_t *temp = begin;

    for (; temp != NULL; temp = temp->next)
        size++;
    return (size);
}
