/*
** EPITECH PROJECT, 2019
** 
** File description:
** 
*/

char    *my_strlowercase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }
    return (str);
}