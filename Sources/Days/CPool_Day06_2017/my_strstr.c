/*
** EPITECH PROJECT, 2017
** my_strstr.c
** File description:
** Find the first occurence of the string to_find in str 
** and return a pointer to the beginning of the located string.
*/

char *my_strstr(char *str, char *to_find)
{
	int i = 0;
	int j = 0;

	while (str[i] != to_find[j]
	       && str[i]) {
		i++;
		while (str[i] == to_find[j]
		       && (to_find[j]
			   && str[i])) {
			if(!to_find[j + 1])
				return(&str[i]);
			j++;
			i += j;
		}
		if (!str[i])
			return (0);
	}
}
