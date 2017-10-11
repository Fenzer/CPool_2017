/*
** EPITECH PROJECT, 2017
** my_getnbr.c
** File description:
** Convert a string into an interger
*/

#define printn my_put_nbr
#define printc my_putchar
#define prints my_putstr
#define len my_strlen
#define INT_MAX 2147483647
#define INT_MIN -2147483648

void my_put_nbr(char const *str);

int my_putchar(char const c);

int my_putstr(char const *str);

int my_strlen(char const *str);

int my_getnbr (char const *str)
{
	int result = 0;
	int sign = 0;
	int i = 0;
	
	
	while (str[i] <= ' ')
		i++;
	while (str[i] == '-' || str[i] == '+') {
		if (str[i++] == '-')
			sign++;
      	}
	if (sign % 2)
		sign = -1;
	else
		sign = 1;
	while (str[i] <= '9' && str[i] >= '0') {
		if (result * 10 + (str[i] - '0') <= INT_MAX
		    || (sign == -1
			&& result * 10 + (str[i] - '0') <= -INT_MIN)) {
			result *= 10;
			result += str[i] - '0';
			i++;
		} else {
			return (0);
		}
       	}
	return (sign * result);
}

int main(void)
{
	char *str = "-----+--++---+----+--+-422222";

	printn(my_getnbr(str)); //~> -42
	printc('\n');
	printn(my_getnbr("42a43")); //~> 42
	printc('\n');
	printn(my_getnbr("11000000000000000000000042")); //~> 0
	printc('\n');
	printn(my_getnbr("-11000000000000000000000042")); //~> 0
	printc(my_getnbr('\n'));
	printn(my_getnbr("   -42")); //~> -42
	printc('\n');
	printn(my_getnbr("42a43")); //~> 42
	printc('\n');
	printn(my_getnbr("110000042")); //~> 110000042
	printc('\n');
	printn(my_getnbr("-110000042")); //~> -11000000042
	printc('\n');
	printn(my_getnbr("2147483647")); //~> 2147483647
	printc('\n');
	printn(my_getnbr("-2147483648")); //~> -2147483648
	printc('\n');
}

/*_***************************************************************_**
** _______________________________________________________________ **
** ___/\\\\\\\\\\\\\\\__/\\\\\\\\\\\\\\\__/\\\\\_____/\\\_________ **
** ___\/\\\///////////__\/\\\///////////__\/\\\\\\___\/\\\________ **
** ____\/\\\_____________\/\\\_____________\/\\\/\\\__\/\\\_______ **
** _____\/\\\\\\\\\\\_____\/\\\\\\\\\\\_____\/\\\//\\\_\/\\\______ **
** ______\/\\\///////______\/\\\///////______\/\\\\//\\\\/\\\_____ **
** _______\/\\\_____________\/\\\_____________\/\\\_\//\\\/\\\____ **
** ________\/\\\_____________\/\\\_____________\/\\\__\//\\\\\\___ **
** _________\/\\\_____________\/\\\\\\\\\\\\\\\_\/\\\___\//\\\\\__ **
** __________\///______________\///////////////__\///_____\/////__ **
** _______________________________________________________________ **
**_***************************************************************_* 

int     ft_atoi(char *a)
{
    int r,s;

    s = 1;
    r = 0; 
    while (*a <= ' ')
        a++;
    if (*a == '-' || *a == '+')
    {
        if (*a == '-')
            s = -1;
        a++;
        if (!(*a >= '0' && *a <= '9'))
            return (r);
    }
    while (*a >= '0' && *a <= '9')
    {
        r *= 10;
        r += *a++ - '0';
    }
    return (s * r);
}

*/
