/*
** EPITECH PROJECT, 2018
** task
** File description:
** task
*/

#include "palindrome.h"

int my_revert_nb(int nb, int base)
{
    int revert = 0;

    while (nb != 0) {
        revert = revert * base;
        revert = revert + nb % base;
        nb = nb / base;
    }

    return revert;
}

int is_nb(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] > '9' || str[i] < '0') {
            return 1;
        }
        i++;
    }
    return 0;
}