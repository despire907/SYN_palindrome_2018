/*
** EPITECH PROJECT, 2018
** task
** File description:
** task
*/

#include "test.h"

Test(n_option_1, test_n_option_1, .init = redirect_all_std)
{
    char *str[] = {"./palindrome", "-n", "4782", "-b", "10"};
    palindrome(str);
    fflush(stdout);
    cr_assert_stdout_eq_str("4782 leads to 46464 in 3 iteration(s) in base 10"
                            "\n");
}

Test(n_option_2, test_n_option_2, .init = redirect_all_std)
{
    char *str[] = {"./palindrome", "-n", "64", "-b", "2"};
    palindrome(str);
    fflush(stdout);
    cr_assert_stdout_eq_str("64 leads to 65 in 1 iteration(s) in base 2\n");
}

Test(n_option_3, test_n_option_3, .init = redirect_all_std)
{
    char *str[] = {"./palindrome", "-n", "4782", "toto"};
    palindrome(str);
    fflush(stdout);
    cr_assert_stdout_eq_str("invalid argument\n");
}

Test(n_option_4, test_n_option_4, .init = redirect_all_std)
{
    char *str[] = {"./palindrome", "-n", "562", "-b", "5", "-imin", "3"};
    palindrome(str);
    fflush(stdout);
    cr_assert_stdout_eq_str("562 leads to 3024 in 3 iteration(s) in base 5\n");
}

Test(n_option_5, test_n_option_5, .init = redirect_all_std)
{
    char *str[] = {"./palindrome", "-n", "3675", "-b", "10", "-imax", "50"};
    palindrome(str);
    fflush(stdout);
    cr_assert_stdout_eq_str("no solution\n");
}