/*
** EPITECH PROJECT, 2018
** task
** File description:
** task
*/

#include "palindrome.h"

argu_t *init_arg(void)
{
    argu_t *new = malloc(sizeof(argu_t));

    new->check_help = 0;
    new->check_num = 0;
    new->num = 0;
    new->num_end = 0;
    new->check_pal = 0;
    new->pal = 0;
    new->check_base = 0;
    new->base = 10;
    new->check_imin = 0;
    new->imin = 0;
    new->check_imax = 0;
    new->imax = 100;
    new->iteration = 0;

    return new;
}

int check_rest(char *str)
{
    int i = 0;
    size_t j = 0;

    while (str[i] != '\0') {
        if ((str[i] >= '0' && str[i] <= '9')) {
            j++;
        }
        i++;
    }
    if (j == strlen(str))
        return 1;
    return 0;
}

void check_help_num(char **str, argu_t *arg, int i)
{
    if (str[i + 1] == NULL && !strcmp(str[i], "-h"))
        arg->check_help = 1;
    else if (str[i + 1] != NULL && !strcmp(str[i], "-n") &&
    check_rest(str[i + 1]) == 1) {
        arg->check_num = 1;
        arg->num = atoi(str[i + 1]);
    }
}

void check_pal_base(char **str, argu_t *arg, int i)
{
    if (str[i + 1] != NULL && !strcmp(str[i], "-p") &&
    check_rest(str[i + 1]) == 1) {
        arg->check_pal = 1;
        arg->pal = atoi(str[i + 1]);
    } else if (str[i + 1] != NULL && !strcmp(str[i], "-b") &&
    check_rest(str[i + 1]) == 1) {
        arg->check_base = 1;
        arg->base = atoi(str[i + 1]);
    }
}

void check_imin_imax(char **str, argu_t *arg, int i)
{
    if (str[i + 1] != NULL && !strcmp(str[i], "-imin") &&
    check_rest(str[i + 1]) == 1) {
        arg->check_imin = 1;
        arg->imin = atoi(str[i + 1]);
    } else if (str[i + 1] != NULL && !strcmp(str[i], "-imax") &&
    check_rest(str[i + 1]) == 1) {
        arg->check_imax = 1;
        arg->imax = atoi(str[i + 1]);
    }
}