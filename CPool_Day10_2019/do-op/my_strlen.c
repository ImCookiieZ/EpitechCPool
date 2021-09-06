/*
** EPITECH PROJECT, 2019
** task 05
** File description:
** y
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}