/*
** EPITECH PROJECT, 2018
** task
** File description:
** task
*/

#include "test.h"

Test(double_option_12, test_double_option_12, .init = redirect_all_std)
{
    char *str[] = {"./palindrome"};
    int nb = palindrome(str);
    cr_assert_eq(nb, 84);
}

Test(double_option_13, test_double_option_13, .init = redirect_all_std)
{
    char *str[] = {"./palindrome", "-n", "15", "-b", "!zafds"};
    int nb = palindrome(str);
    cr_assert_eq(nb, 84);
}

Test(double_option_14, test_double_option_14, .init = redirect_all_std)
{
    char *str[] = {"./palindrome", "-n", "57", "-imax"};
    int nb = palindrome(str);
    cr_assert_eq(nb, 0);
}

Test(double_option_15, test_double_option_15, .init = redirect_all_std)
{
    char *str[] = {"./palindrome", "-n", "15", "-b", "10", "-imin", "50",
                    "-imax", "25"};
    int nb = palindrome(str);
    cr_assert_eq(nb, 84);
}