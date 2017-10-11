/*
** EPITECH PROJECT, 2017
** my_str_islower.c
** File description:
** Return 0 if the string if the string countains only numeric 
** characters or 0 otherwise.
*/

int my_str_islower(char const *str)
{
	int i = 0;

	while (str[i] != '\0'
	       && (str[i] <= 'z'
		   && str[i] >= 'a'))
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (2);
}
