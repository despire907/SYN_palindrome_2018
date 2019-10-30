/*
** EPITECH PROJECT, 2018
** task
** File description:
** task
*/

#ifndef SYN_PALINDROME_2018_PALINDROME_H
#define SYN_PALINDROME_2018_PALINDROME_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct argu_s {
    int check_help;
    int check_num;
    int num;
    int num_end;
    int check_pal;
    int pal;
    int check_base;
    int base;
    int check_imin;
    int imin;
    int check_imax;
    int imax;
    int iteration;
}argu_t;

int my_revert_nb(int nb, int base);
argu_t *init_arg(void);
int check_rest(char *str);
void check_help_num(char **str, argu_t *arg, int i);
void check_pal_base(char **str, argu_t *arg, int i);
void check_imin_imax(char **str, argu_t *arg, int i);
argu_t *check_enter(char **av);
argu_t *check_arg(char **av);
void understand_dispatch(argu_t *arg);
void display_help(void);
int is_nb(char const *str);

#endif //SYN_PALINDROME_2018_PALINDROME_H