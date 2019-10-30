/*
** EPITECH PROJECT, 2018
** task
** File description:
** task
*/

#include "test.h"

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(check_rest, test_check_rest, .init = redirect_all_std)
{
    int nb = check_rest("1568972");
    cr_assert_eq(nb, 1);
}

Test(checkrest_palindrome, test_checkrest_palindrome, .init = redirect_all_std)
{
    int nb = check_rest("1568zqsfd\t972");
    cr_assert_eq(nb, 0);
}

Test(my_revert_nb, test_my_revert_nb, .init = redirect_all_std)
{
    int nb = my_revert_nb(1567, 10);
    cr_assert_eq(nb, 7651);
}

Test(is_nb, test_is_nb, .init = redirect_all_std)
{
    int nb = is_nb("1568972");
    cr_assert_eq(nb, 0);
}