/*
** EPITECH PROJECT, 2019
** s
** File description:
** s
*/

int my_strcmp(char const *s1, char const *s2)
{
    int len_s2 = my_strlen2(s2);
    int len_s1 = my_strlen2(s1);

    for (int i = 0; i < len_s1 && i < len_s2; i++) {
        if (s1[i] != s2[i] ) {
            if (s1[i] > s2[i] )
                return (-1);
            return (1);
        }
    }
    if (len_s1 < len_s2)
        return (1);
    if (len_s2 < len_s1)
        return (-1);
    return (0);
}