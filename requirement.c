/*
** EPITECH PROJECT, 2018
** task
** File description:
** task
*/

#include <stdlib.h>
#include <stdio.h>

int my_factrec_synthesis(int nb)
{
    if (nb == 0)
        return 1;
    else if (nb < 0 || nb > 2147483647 || nb > 12)
        return 0;
    return nb * my_factrec_synthesis(nb - 1);
}

int my_squareroot_synthesis(int nb)
{
    int check = 0;

    if (nb == 0)
        return 0;
    if (nb == 1)
        return 1;
    if (nb < 0 || nb > 2147483647)
        return -1;
    while ((nb / 2) != check) {
        if ((check * check) != nb)
            check++;
        if ((check * check) == nb)
            return check;
    }
    return -1;
}