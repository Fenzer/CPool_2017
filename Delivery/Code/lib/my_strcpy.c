/*
** EPITECH PROJECT, 2017
** my_strcpy.c
** File description:
** Copy the src string in the dest string and return a pointer on the dest string. 
*/



char *my_strcpy(char *dest, char const *src)
{
	int i = 0;

	while (src[i] == '\0')
		dest[i] = src[i++];
	dest[i] = '\0';
	return (dest);

}
