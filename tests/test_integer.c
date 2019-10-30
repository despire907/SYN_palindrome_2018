/*
** EPITECH PROJECT, 2018
** task
** File description:
** task
*/

#include "test.h"

Test(p_option_1, test_p_option_1, .init = redirect_all_std)
{
    char *str[] = {"./palindrome", "-p", "363", "-b", "10"};
    palindrome(str);
    fflush(stdout);
    cr_assert_stdout_eq_str("3 leads to 363 in 6 iteration(s) in base 10\n"
    "6 leads to 363 in 5 iteration(s) in base 10\n12 leads to 363 in 4 "
    "iteration(s) in base 10\n15 leads to 363 in 3 iteration(s) in base 10\n"
    "21 leads to 363 in 4 iteration(s) in base 10\n24 leads to 363 in 3 "
    "iteration(s) in base 10\n30 leads to 363 in 4 iteration(s) in base 10\n"
    "33 leads to 363 in 3 iteration(s) in base 10\n39 leads to 363 in 2 "
    "iteration(s) in base 10\n42 leads to 363 in 3 iteration(s) in base 10\n"
    "48 leads to 363 in 2 iteration(s) in base 10\n51 leads to 363 in 3 "
    "iteration(s) in base 10\n57 leads to 363 in 2 iteration(s) in base 10\n"
    "60 leads to 363 in 3 iteration(s) in base 10\n66 leads to 363 in 2 "
    "iteration(s) in base 10\n75 leads to 363 in 2 iteration(s) in base 10\n"
    "84 leads to 363 in 2 iteration(s) in base 10\n93 leads to 363 in 2 "
    "iteration(s) in base 10\n132 leads to 363 in 1 iteration(s) in base 10\n"
    "231 leads to 363 in 1 iteration(s) in base 10\n330 leads to 363 in 1 i"
    "teration(s) in base 10\n363 leads to 363 in 0 iteration(s) in base 10\n");
}

Test(p_option_2, test_p_option_2, .init = redirect_all_std)
{
    char *str[] = {"./palindrome", "-p", "363", "-b", "10", "-imax", "2"};
    palindrome(str);
    fflush(stdout);
    cr_assert_stdout_eq_str("39 leads to 363 in 2 iteration(s) in base 10\n"
    "48 leads to 363 in 2 iteration(s) in base 10\n"
    "57 leads to 363 in 2 iteration(s) in base 10\n"
    "66 leads to 363 in 2 iteration(s) in base 10\n"
    "75 leads to 363 in 2 iteration(s) in base 10\n"
    "84 leads to 363 in 2 iteration(s) in base 10\n"
    "93 leads to 363 in 2 iteration(s) in base 10\n"
    "132 leads to 363 in 1 iteration(s) in base 10\n"
    "231 leads to 363 in 1 iteration(s) in base 10\n"
    "330 leads to 363 in 1 iteration(s) in base 10\n"
    "363 leads to 363 in 0 iteration(s) in base 10\n");
}

Test(p_option_3, test_p_option_3, .init = redirect_all_std)
{
    char *str[] = {"./palindrome", "-p", "363", "-b", "10", "-imin", "6"};
    palindrome(str);
    fflush(stdout);
    cr_assert_stdout_eq_str("3 leads to 363 in 6 iteration(s) in base 10\n");
}

Test(p_option_4, test_p_option_4, .init = redirect_all_std)
{
    char *str[] = {"./palindrome", "-p", "363", "-b", "10", "-imin", "7"};
    palindrome(str);
    fflush(stdout);
    cr_assert_stdout_eq_str("no solution\n");
}

Test(p_option_5, test_p_option_5, .init = redirect_all_std)
{
    char *str[] = {"./palindrome", "-p", "363", "-b", "5"};
    int nb = palindrome(str);
    fflush(stdout);
    cr_assert_eq(nb, 0);
}