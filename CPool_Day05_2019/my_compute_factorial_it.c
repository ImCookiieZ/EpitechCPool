/*
** EPITECH PROJECT, 2019
** task 01
** File description:
** fakultät
*/

int my_compute_factorial_it (int nb)
{
    if (nb >12) {
        return (0);
    }
    if (nb == 0) {
        return (1);
    }
    if (nb < 0) {
        return (0);
    }
    for (int faku = nb-1; faku > 1 ; faku--) {
        nb = nb * (faku);
    }
    return (nb);
}
