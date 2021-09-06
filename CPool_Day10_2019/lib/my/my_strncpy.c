/*
** EPITECH PROJECT, 2019
** task 01
** File description:
** day 06
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i;
    int len = my_strlen(src);

    for (i = 0; i < n && src[i] != '\0'; ++i)
        dest[i] = src[i];
    if (n > len)
        dest[i] = '\0';
    return (dest);
}