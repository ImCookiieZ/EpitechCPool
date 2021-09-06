/*
** EPITECH PROJECT, 2019
** s
** File description:
** s
*/

#include "include/my.h"
#include "include/btree.h"

btree_t *btree_create_node(void *item)
{
    btree_t *element;

    element->item = item;
    element->left = NULL;
    element->right = NULL;
    return (element);
}
