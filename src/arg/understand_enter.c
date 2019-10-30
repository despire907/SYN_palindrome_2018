/*
** EPITECH PROJECT, 2018
** task
** File description:
** task
*/

#include "palindrome.h"

void transformed_integer(argu_t *arg)
{
    arg->num_end = arg->num;
    while (arg->iteration <= arg->imax && arg->iteration != arg->imin) {
        arg->num_end = arg->num_end + my_revert_nb(arg->num_end, arg->base);
        arg->iteration = arg->iteration + 1;
    }
    while (arg->num_end != my_revert_nb(arg->num_end, arg->base) &&
    arg->iteration < arg->imax) {
        arg->num_end = arg->num_end + my_revert_nb(arg->num_end, arg->base);
        arg->iteration = arg->iteration + 1;
    }
    if (arg->iteration == arg->imax &&
    arg->num_end != my_revert_nb(arg->num_end, arg->base))
        printf("no solution\n");
    else
        printf("%i leads to %i in %i iteration(s) in base %i\n", arg->num,
            arg->num_end, arg->iteration, arg->base);
}

int check_integer(argu_t *arg, int nb)
{
    int check = nb;
    int iteration = 0;

    while (iteration < arg->imin) {
        check = check + my_revert_nb(check, arg->base);
        iteration = iteration + 1;
    }
    while (check != arg->pal &&
            iteration < arg->imax) {
        check = check + my_revert_nb(check, arg->base);
        iteration = iteration + 1;
    }
    if (iteration == arg->imax &&
        check != my_revert_nb(check, arg->base))
        return 1;
    else if (check == arg->pal){
        printf("%i leads to %i in %i iteration(s) in base %i\n", nb,
                check, iteration, arg->base);
        return 0;
    }
    return 1;
}

void obtained_palindromic_number(argu_t *arg)
{
    int test = 0;
    int i = 0;

    while (test <= arg->pal) {
        if (check_integer(arg, test) == 1)
            i = i + 1;
        test = test + 1;
    }
    if (test == i)
        printf("no solution\n");
}

void display_help(void)
{
    printf("USAGE\n"
            "\t./palindrome -n number -p palindrome [-b base] [-imin i] "
            "[-imax i]\n\nDESCRIPTION\n"
            "\t-n n      integer to be transformed (>=0)\n"
            "\t-p pal    palindromic number to be obtained (incompatible with"
            " the -n option) (>=0)\n"
            "\t\tif defined, all fitting values of n will be output\n"
            "\t-b base   base in which the procedure will be executed "
            "(1<b<=10) [def: 10]\n\t-imin i   "
            "minimum number of iterations, included (>=0) [def: 0]\n\t-imax i "
            "  maximum number of iterations, included (>=0) [def: 100]\n");
}

void understand_dispatch(argu_t *arg)
{
    if (arg->check_num == 1 && arg->num != 0)
        transformed_integer(arg);
    if (arg->check_pal == 1 && arg->pal != 0 &&
    arg->pal == my_revert_nb(arg->pal, arg->base))
        obtained_palindromic_number(arg);
}