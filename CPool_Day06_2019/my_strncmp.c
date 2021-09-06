/*
** EPITECH PROJECT, 2019
** task 07
** File description:
** d
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    char character_1;
    char character_2;

    for (int i = 0; i < n; i++) {
        character_1 = s1[i];
        character_2 = s2[i];
        if (character_1 != character_2)
            return (character_1 - character_2);
        if (character_1 == '\0')
            break;
    }
    return (0);
}