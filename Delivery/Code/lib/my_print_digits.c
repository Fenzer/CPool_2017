/*
** EPITECH PROJECT, 2017
** my_print_digits.c
** File description:
** print all digits number in raw
*/

int my_print_digits(void)
{
	for (int a = 0; a < 10; a++)
		my_putchar(a + '0');
	return (0);
}
