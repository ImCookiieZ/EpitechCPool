/*
** EPITECH PROJECT, 2019
** task 03
** File description:
** 
*/

char *my_revstr(char *str)
{
    int     loop;
    int     strlen = my_strlen(str);
    int     ende;
    char    temp;
    char    string;

    strlen = my_strlen(str);
    loop = strlen / 2;
    for (int i = 0; i != loop; i++) {
        temp = str[i];
        str[i] = str[strlen - i - 1];
        str[strlen - i - 1] = temp;
    }
    return (str);
}