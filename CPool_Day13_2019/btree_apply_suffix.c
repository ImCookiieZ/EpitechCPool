/*
** EPITECH PROJECT, 2019
** s
** File description:
** s
*/

#include "include/btree.h"
#include "include/my.h"

void btree_apply_suffix(btree_t *root, int (*applyf)(void *))
{
    if (root != NULL) {
        btree_apply_suffix(root->left, applyf);
        btree_apply_suffix(root->right, applyf);
        applyf(root->item);
    }
}
