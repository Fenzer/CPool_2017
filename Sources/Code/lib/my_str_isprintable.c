/*
** EPITECH PROJECT, 2017
** my_str_isprintable.c
** File description:
** Check if the characters of the string are printable and return 1 in this case and 0 otherwise.
*/

int my_str_isprintable(char const *str)
{
	int i = 0;

	while (str[i] != '\0' && str[i] >= ' ')
		i++;
	if (str[i])
		return (0);
	else
		return (1);
}
