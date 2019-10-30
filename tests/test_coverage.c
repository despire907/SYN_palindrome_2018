/*
** EPITECH PROJECT, 2018
** task
** File description:
** task
*/

#include "test.h"

Test(double_option_6, test_double_option_6, .init = redirect_all_std)
{
    char *str[] = {"./palindrome", "-imax", "-imax", "50"};
    int nb = palindrome(str);
    cr_assert_eq(nb, 84);
}

Test(double_option_7, test_double_option_7, .init = redirect_all_std)
{
    char *str[] = {"./palindrome", "-n", "-p"};
    int nb = palindrome(str);
    cr_assert_eq(nb, 84);
}

Test(double_option_8, test_double_option_8, .init = redirect_all_std)
{
    char *str[] = {"./palindrome", "-n", "15", "-b", "za!fds"};
    int nb = palindrome(str);
    cr_assert_eq(nb, 84);
}

Test(double_option_9, test_double_option_9, .init = redirect_all_std)
{
    char *str[] = {"./palindrome", "-n", "15", "-b", "0"};
    int nb = palindrome(str);
    cr_assert_eq(nb, 84);
}

Test(double_option_10, test_double_option_10, .init = redirect_all_std)
{
    char *str[] = {"./palindrome", "-n", "15", "-b", "15"};
    int nb = palindrome(str);
    cr_assert_eq(nb, 84);
}