/*
** EPITECH PROJECT, 2019
** s
** File description:
** s
*/

#include "include/my.h"
#include "include/mylist.h"

void my_rev_list(linked_list_t **begin)
{
    linked_list_t *temp = 0;
    linked_list_t *previous = 0;
    linked_list_t *next;

    for (previous = *begin; previous->next != NULL; previous = next) {
        next = previous->next;
        previous->next = temp;
        temp = previous;
    }
    previous->next = temp;
    *begin = previous;
    return (NULL);
}
