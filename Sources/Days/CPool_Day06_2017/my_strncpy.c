/*
** EPITECH PROJECT, 2017
** my_strncpy.c
** File description:
** Copy the src str in the dest one until n char.
*/

char *my_strncpy(char dest, char const src, int n)
{
	int i = 0;

	while (i < n) {
		if (!src[i])
			dest[i] = src[i];
		else
			dest[i] = '\0';
	}
	return (dest);
}
