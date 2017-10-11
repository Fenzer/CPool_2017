/*
** EPITECH PROJECT, 2017
** tests-rush.c
** File description:
** Main test for the rush!
*/

void my_putchar(char c);

int my_putstr(char const *str);

void my_put_nbr(int n);

void rush(int x, int y);

int main(void)
{
	for (int i = 0; i <= 10; i++) {
		for(int j = 0; j <= 10; j++) {
			my_putchar('(');
			my_putchar('x');
			my_putchar('=');
			my_put_nbr(i);
			my_putchar(',');
			my_putchar('y');
			my_putchar('=');
			my_put_nbr(j);
			my_putchar(')');
			my_putchar('\n');
			rush(i,j);
		}
	}
	return (0);
}
