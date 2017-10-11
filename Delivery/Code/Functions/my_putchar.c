/*
** EPITECH PROJECT, 2017
** my_putchar.c
** File description:
** display a char in the stdoutput
*/

#ifndef UNISTD_H
#include <unistd.h>
#endif

int my_putchar(char const c)
{
	write(1, &c, 1);
	return (0);
}
