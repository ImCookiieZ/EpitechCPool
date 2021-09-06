/*
** EPITECH PROJECT, 2019
** d
** File description:
** d
*/

char get_opp(char *str)
{
    for (int i = 0; str[i] != '\0';i++) {
        if (str[i] == '+' || str[i] == '/')
            return (str[i]);
        if (str[i] == '-' || str[i] == '*')
            return (str[i]);
        if (str[i] == '%')
            return (str[i]);
    }
    return (0);
}

int special(int nb1, int nb2, char op)
{
    if (nb2 == 0) {
        if (op == '/') 
            my_putstr("Stop: division by zero");
        else
            my_putstr("Stop: modulo by zero");
        return (84);
    } else {
        if (op == '/')
            my_put_nbr(nb1 / nb2);
        else
            my_put_nbr(nb1 % nb2);
        return (0);
    }
}

int my_nbr(char *nb)
{
    int i = 0;

    if ((nb[0] >= '0' && nb[0] <= '9') || nb[0] == '-')
        return (my_getnbr(nb));
    return (9675);
}

int exit(int nb1, int nb2)
{
    if (nb1 == 9675 && nb2 == 9675) {
        my_put_nbr(0); 
        return (1);
    }
    return (0);
}

int do_op(int ac, char **av)
{
    int nb1 = my_nbr(av[1]);
    int nb2 = my_nbr(av[3]);
    char opperator = get_opp(av[2]);

    if (exit(nb1, nb2) == 1)
        return (84);
    if (opperator == '+')
        my_put_nbr(nb1 + nb2);
    if (opperator == '-')
        my_put_nbr(nb1 - nb2);
    if (opperator == '*')
        my_put_nbr(nb1 * nb2);
    if (opperator == '/' || opperator == '%')
        return (special(nb1, nb2, opperator));
    if (opperator == 0) {
        my_put_nbr(0);
        return (84);
    }
    return(0);
}

int main(int argc, char **argv)
{
    //my_put_nbr(argc);
    if (argc == 4)
        return (do_op(argc, argv));
    my_put_nbr(1);
    return (84);
}