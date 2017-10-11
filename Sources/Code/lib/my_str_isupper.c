/*
** EPITECH PROJECT, 2017
** my_str_isupper.c
** File description:
** Check if the entire string is uppercase,
**  it return 1 in this case and 0 otherwise.
*/

int my_str_isupper(char const *str)
{
	int i = 0;

	while (str[i] != 0 &&
	       (str[i] <= 'Z'
		&& str[i] >= 'A'))
	       i++;
	if (str[i])
		return (0);
	else
		return (1);
}
