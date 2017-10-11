/*
** EPITECH PROJECT, 2017
** my_print_comb2.c
** File description:
** print all combination of 2 digits numbers in ascending order
*/

void my_comb_printr2(int a, int b);

int my_print_comb2(void)
{
    int a;
    int b;

    a = 0;
    b = 0;
    while (a < 99) {
        b = a + 1;
        while (b <= 99) {
            if(a < b)
                my_comb_printr2(a,b);
            b++;
        }
        a++;
    }
    return (0);
}

void my_comb_printr2(int a, int b)
{
        my_putchar(a / 10 + '0');
        my_putchar(a % 10 + '0');
        my_putchar(' ');
        my_putchar(b / 10 + '0');
        my_putchar(b % 10 + '0');
	if (a != 98)
	{
		my_putchar(',');
		my_putchar(' ');
	}
}
