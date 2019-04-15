/*
** EPITECH PROJECT, 2019
** Project name MY_CHAP
** File description:
** Description
*/

#include "../include/my.h"

void check_errors(int ac, char **av)
{
    if (ac != 7)
        exit (84);
    else
        printf("ok");
}

int main (int ac, char **av)
{
    check_errors(ac, av);
    return (0);

}