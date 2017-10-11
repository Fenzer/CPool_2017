/*
** EPITECH PROJECT, 2017
** my_evil_str.c
** File description:
** Swap each character of the string two by two. The first is swapped with the last and so on.
*/

int my_strlen(char const *str)
{
	int n = 0;

	while (*str++)
		n++;
	return (n);
}

void my_char_swap(char *a, char *b)
{
	char buffer;

	buffer = *a;
	*a = *b;
	*b = buffer;
}

char *my_evil_str(char *str)
{
	int end_ctr = my_strlen(str);
	int beg_ctr = 0;

	end_ctr--;
	while (beg_ctr < end_ctr) {
		my_char_swap(str + beg_ctr,str + end_ctr);
		beg_ctr++;
		end_ctr--;
	}
	return (str);
}
