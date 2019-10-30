/*
** EPITECH PROJECT, 2018
** task
** File description:
** task
*/

#include "test.h"

Test(double_option_1, test_double_option_1, .init = redirect_all_std)
{
    char *str[] = {"./palindrome", "-h", "-h"};
    int nb = palindrome(str);
    cr_assert_eq(nb, 84);
}

Test(double_option_2, test_double_option_2, .init = redirect_all_std)
{
    char *str[] = {"./palindrome", "-n", "-n"};
    int nb = palindrome(str);
    cr_assert_eq(nb, 84);
}

Test(double_option_3, test_double_option_3, .init = redirect_all_std)
{
    char *str[] = {"./palindrome", "-p", "-p"};
    int nb = palindrome(str);
    cr_assert_eq(nb, 84);
}

Test(double_option_4, test_double_option_4, .init = redirect_all_std)
{
    char *str[] = {"./palindrome", "-b", "-b"};
    int nb = palindrome(str);
    cr_assert_eq(nb, 84);
}

Test(double_option_5, test_double_option_5, .init = redirect_all_std)
{
    char *str[] = {"./palindrome", "-imin", "-imin"};
    int nb = palindrome(str);
    cr_assert_eq(nb, 84);
}