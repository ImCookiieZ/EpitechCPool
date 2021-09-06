/*
** EPITECH PROJECT, 2019
** s
** File description:
** s
*/

#include "include/my.h"
#include "include/mylist.h"

int my_delete_nodes(linked_list_t **begin, \
void const *data_ref, int (*cmp)())
{
    linked_list_t *list_begin = *begin;
    linked_list_t *next_list = list_begin->next;

    for (; next_begin != NULL; list_begin = list_begin->next) {
        if (cmp(data_ref, next_begin->data) == 0)
            list_begin->next = next_begin->next;
    }
}
