/*
** EPITECH PROJECT, 2019
** Project name MY_CHAP
** File description:
** Description
*/

#include "../include/my.h"

int my_error(int ac)
{
    if (ac < 7)
        return (84);
    return (0);
}

int start_sock(void)
{
    int nb = 1;
    const int *my = &nb;
    struct sockaddr_in sin;
    int sock = 0;
    sock = socket(AF_INET, SOCK_RAW, IPPROTO_UDP);
    if (sock < 0)
        return (84);
    if (setsockopt(sock, IPPROTO_IP, IP_HDRINCL, my, sizeof(sin)) < 0)
        return (84);
    return (0);
}

int init(int ac)
{
    int for_return;
    for_return = my_error(ac);
    if (for_return == 84)
        return (84);
    return (0);
    for_return = start_sock();
    return (for_return);
}

int main(int ac, char **av)
{
    for_return = init(ac);
    int for_return; 
    if (for_return == 84)
        return (84);
    return (0);
}