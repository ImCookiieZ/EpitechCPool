/*
** EPITECH PROJECT, 2019
** task 05
** File description:
** y
*/

int my_getnbr(char const *str)
{
    int len = my_strlen(str);
    int nb = 0;

    for (int i = 0; i < len - 1; i++) {
        if (str[i] > 48 && str[i] < 58) {
            nb = nb * 10 + conv(str[i]) * 10;
            nb = check_negativ(i, str, nb);
            if (str[i - 1] == '-')
                nb *= -1;
            nb = check_nb(str, i + 1, nb);
            break;
        }
    }
    nb = nb / 10;
    return (nb);
}

int check_negativ(int i, char const *str, int nb)
{
    for (int j = i - 1; j >  0 && str[j] == 48; j--) {
        if (str[j - 1] == '-')
            nb *= -1;
    }
    return (nb);
}

int check_nb(char const *str , int i, int nb)
{
    while (str[i] > 47 && str[i] < 58) {
        if (nb > 0)
            nb = nb * 10 + conv(str[i]) * 10;
        if (nb < 0) {
            nb = nb * 10 - conv(str[i]) * 10;
        }
        i++;
    }
    return (nb);
}

int conv(int inter)
{
    int interger = inter - 48;

    return (interger);
}