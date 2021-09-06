/*
** EPITECH PROJECT, 2019
** s
** File description:
** s
*/

#include "include/btree.h"
#include "include/my.h"

void btree_apply_infix(btree_t *root, int (*applyf)(void *))
{
    if (root != NULL) {
        btree_apply_infix(root->left, applyf);
        applyf(root->item);
        btree_apply_infix(root->right, applyf);
    }
}
