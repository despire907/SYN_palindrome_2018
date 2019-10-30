/*
** EPITECH PROJECT, 2018
** task
** File description:
** task
*/

#include "palindrome.h"

int main(int ac, char **av)
{
    (void)ac;
    argu_t *arg;
    int i = 1;

    if (av[1] == NULL || (arg = check_enter(av)) == NULL)
        return 84;
    while (av[i] != NULL) {
        if (strcmp(av[i], "-i") && strcmp(av[i], "-n") && strcmp(av[i], "-p")
            && strcmp(av[i], "-b") && strcmp(av[i], "-imin")
            && strcmp(av[i], "-imax") && is_nb(av[i]) == 1) {
            printf("invalid argument\n");
            return 84;
        }
        i++;
    }
    if (arg->check_help == 1) {
        display_help();
        return 0;
    }
    understand_dispatch(arg);
    free(arg);
}