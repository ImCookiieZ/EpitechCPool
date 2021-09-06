/*
** EPITECH PROJECT, 2019
** task 02
** File description:
** fac rec
*/

int my_compute_factorial_rec (int nb)
{
    if (nb > 12) {
        return 0;
    }
    if (nb < 0) {
        return (0);
    }
    if (nb == 0) {
        return (1);
    }
    if (nb == 1) {
        return (nb);
    }
    if (nb != 1) {
        int fak = nb-1;
        return(nb * my_compute_factorial_rec(fak));
    }
}
