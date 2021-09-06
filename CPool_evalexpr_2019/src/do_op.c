/*
** EPITECH PROJECT, 2019
** do_op
** File description:
** simple version
*/

int do_op(int nb1, char op, int nb2)
{
    int res = 0;

    if (op == '+')
        res = nb1 + nb2;
    if (op == '-')
        res = nb1 - nb2;
    if (op == '*')
        res = nb1 * nb2;
    if (op == '/')
        res = nb1 / nb2;
    if (op == '%')
        res = nb1 % nb2;
    return (res);
}
