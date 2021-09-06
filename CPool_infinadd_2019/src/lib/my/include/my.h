/*
** EPITECH PROJECT, 2019
** o
** File description:
** o
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int my_int_arraylen(int * const *array);

int my_showmem(char const *str, int size);

int my_str_isupper(char const *str);

int my_compute_power_rec(int nb, int p);

int my_showstr(char const *str);

int my_strlen(char const *str);

void my_sort_int_array(int *array2, int size);

char *my_strlowcase(char *str);

int my_find_prime_sup(int nb);

char *my_strcapitalize(char *str);

char *my_strncat(char *dest, char const *src, int nb);

int my_getnbr(char const *str);

char *my_strcat(char *dest, char const *src);

char *my_strncpy(char *dest, char const *src, int n);

int my_strncmp(char const *s1, char const *s2, int n);

int my_isneg(int n);

int my_strcmp(char const *s1, char const *s2);

int my_is_prime (int nb);

char *my_strcpy(char *dest, char const *src);

char *my_strstr(char *str, char const *to_find);

void my_putchar(char c);

int my_str_isalpha(char const *str);

int *my_strupcase(char *str);

int my_put_nbr(int nb);

int my_str_islower(char const *str);

void my_swap(int *a, int *b);

int my_putstr(char const *str);

int my_str_isnum(char const *str);

char *my_revstr(char *str);

int my_str_isprintable(char const *str);

char *concat_params(int argc, char **argv);

int my_show_word_array(char * const *tab);

char *my_strdup(char const *src);

char **my_str_to_word_array(char const *str);

int my_compute_square_root(int nb);

int get_len(int argc, char **argv);

int check_negativ(int i, char const *str, int nb);

int check_nb(char const *str , int i, int nb);

int is_alnum(char character);

int counts_words(char const *str);

int counts_character(char const *str, int toto);

int count_digits(int nb);

int conv(int inter);
