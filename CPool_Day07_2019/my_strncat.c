/*
** EPITECH PROJECT, 2019
** 
** File description:
** 
*/

char    *my_strncat(char *dest, const char *src, int n)
{
    int dest_len = my_strlen(dest);
    int i;

    for (i = 0 ; i < n && src[i] != '\0' ; i++)
        dest[dest_len + i] = src[i];
    dest[dest_len + i] = '\0';
    return (dest);
}