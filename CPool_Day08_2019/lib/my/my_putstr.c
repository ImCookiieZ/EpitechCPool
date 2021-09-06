/*
** EPITECH PROJECT, 2019
** task 02
** File description:
** 
*/

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return (0);
}