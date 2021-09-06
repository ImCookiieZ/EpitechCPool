/*
** EPITECH PROJECT, 2019
** my_rush3.h
** File description:
** my_rush3.h
*/

void my_print_nbrs(int width, int height);
void check_rush_number(char *str, char *edge, int width, int height);
char *get_edges(char *str, int width, int height);
int get_width(char *str);
int get_height(char *str, int width);
int rush3(char *str);
int my_output(char *str, int width, int height);
int check_rush_5(char *str);
int check_rush_4(char *str);
int check_rush_3(char *str);
int check_rush_2(char *str);
int check_rush_1(char *str);