/*
** EPITECH PROJECT, 2019
** my_header
** File description:
** bistromatic
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int check_len(int ac, char *av0);

int base_error(char *base, char *ops);
int check_double(char *base);
int expr_error(char *expr);
int unknown_number(char *base, char *ops, char *expr);

int nb_test_swap(char *nb1, char *nb2);
int check_fin(char *nb1, char *res, char *nb2);
void my_free(char *tmp_sub, char *tmp_res);

int neg_point(char *nbr1, char *nbr2);
int neg_add(char *nbr1, char *nbr2);
int neg_sub(char *nbr1, char *nbr2);

char *switch_neg(char *str);
char *to_neg(char *str);
int is_neg(char *str);
char *my_abs(char *str);

char    *my_infin_mod(char *, char *, int);
char    *my_strcat_char(char *src, char c);
char *base_convert(char *expr, char *base, char *dest);

char    *my_infin_mult(char *nb1, char *nb2, int size);
char *my_delete_zeros(char *str);
char    *my_infin_div(char *nb1, char *nb2, int size);
char    *my_division(char *nb1, char *nb2, char *res, int *params);
char    *my_part_div(char *nb1, char *nb2);

char *my_zero_adding(char *str, int const i, int const j);
char *do_op_point(char *nb1, char op, char *nb2);
char *do_op_line(char *nb1, char op, char *nb2);
char *do_op_mod(char *nbr1, char op, char *nbr2);
int div_mod_zero(char *nbr2);

char    *my_mult_digit(char nb1, char nb2, int *params);

char    *my_multiplication(char *nb1, char *nb2, int *params);

char *eval_expr(char **str);

char *point_calc(char **str);

char *parse(char **str);

int my_int_arraylen(int * const *array);

int my_char_arraylen(char * const *array);

int check_zero(char *res);

char **my_swap_argv(char **argv);

char **check_argv_swap(char **argv);

void my_putstr2(char *str);

int count_signs(char *nb);

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

void my_putstr(char const *str);

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

int counts_words(char *str);

int counts_character(char *str);

int conv(int inter);

int bigger_number(char *number1, char *number2);

char *my_infin_add(char *number1, char *number2, int size, int mult);

int error_check(int ac, char *nb1, char *nb2);

int my_check_nbr(char *nb);

int preeloop(char *nb, int len);

int my_pre_query(char **argv);

char *my_infin_sub(char *number1, char *number2, int size, int div);

int my_count_signs(char *nb);
