/*
** EPITECH PROJECT, 2019
** task o3
** File description:
** power if
*/

int my_compute_power_it (int nb,int p) {
    int result = 1;
    if (p < 0) {
        return(0);
    }
    if (p == 0) {
        return (1);
    }
    for ( int count = 0; count < p; count++) {
        result = result*nb;
    }
    return (result);
}
