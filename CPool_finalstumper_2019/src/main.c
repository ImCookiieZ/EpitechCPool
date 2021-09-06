/*
** EPITECH PROJECT, 2019
** d
** File description:
** d
*/

#include "../include/my.h"
#include "../include/my_rush3.h"

int main(void)
{
    int offset = 0;
    int len;
    char b;
    int BUFF_SIZE = 30000;
    char buff[BUFF_SIZE + 1];

    while ((len = read(0 , buff + offset , BUFF_SIZE - offset)) > 0) {
        offset = offset + len;
    }
    buff[offset] = '\0';
    if (len < 0)
        return (84);
    rush3(buff);
    return (0);
}