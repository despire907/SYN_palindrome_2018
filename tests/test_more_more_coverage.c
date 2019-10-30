/*
** EPITECH PROJECT, 2018
** task
** File description:
** task
*/

#include "test.h"

Test(double_option_16, test_double_option_16, .init = redirect_all_std)
{
    char *str[] = {"./palindrome", "-b", "10"};
    int nb = palindrome(str);
    cr_assert_eq(nb, 84);
}

Test(double_option_17, test_double_option_17, .init = redirect_all_std)
{
    char *str[] = {"./palindrome", "-n", "453", "-b", "10", "-imax", "3"};
    int nb = palindrome(str);
    cr_assert_eq(nb, 0);
}

Test(double_option_18, test_double_option_18, .init = redirect_all_std)
{
    char *str[] = {"./palindrome", "-n", "-b", "10", "-imax", "50"};
    int nb = palindrome(str);
    cr_assert_eq(nb, 84);
}

Test(double_option_19, test_double_option_19, .init = redirect_all_std)
{
    char *str[] = {"./palindrome", "-p", "-b", "10", "-imax", "3"};
    int nb = palindrome(str);
    cr_assert_eq(nb, 84);
}

int palindrome(char **av)
{
    argu_t *arg;
    int i = 1;

    if (av[1] == NULL || (arg = check_enter(av)) == NULL)
        return 84;
    while (av[i] != NULL) {
        if (strcmp(av[i], "-h") && strcmp(av[i], "-n") && strcmp(av[i], "-p")
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
    return 0;
}