/*
** EPITECH PROJECT, 2018
** task
** File description:
** task
*/

#include "palindrome.h"

argu_t *check_arg(char **av)
{
    argu_t *arg = init_arg();
    int i = 1;

    while (av[i] != NULL) {
        check_help_num(av, arg, i);
        check_pal_base(av, arg, i);
        check_imin_imax(av, arg, i);
        i++;
    }
    return arg;
}

argu_t *check_enter(char **av)
{
    argu_t *arg = check_arg(av);

    if (arg->check_num == 1 && arg->check_pal == 1)
        return NULL;
    else if (arg->check_num == 0 && arg->check_pal == 0)
        return NULL;
    if (arg->num < 0 || arg->pal < 0 || arg->base <= 1 || arg->base > 10
        || arg->imin < 0 || arg->imax < 0 || arg->imin > arg->imax)
        return NULL;
    return arg;
}