/*
** EPITECH PROJECT, 2019
** task 03
** File description:
** 
*/

int my_strlen2(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}

char        *my_revstr(char *str)
{
    int     loop;
    int     strlen = my_strlen2(str);
    int     ende;
    char    temp;
    char    string;

    strlen = my_strlen2(str);
    loop = strlen / 2;
    for (int i = 0; i != loop; i++) {
        temp = str[i];
        str[i] = str[strlen - i - 1];
        str[strlen - i - 1] = temp;
    }
    return (str);
}