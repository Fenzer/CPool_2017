/*
** EPITECH PROJECT, 2017
** my_sort_int_array.c
** File description:
** Take an array of int as argument and sort in ascending order
*/

void swap(int *a, int *b)
{
	int buffer;

	buffer = *a;
	*a = *b;
	*b = buffer;
}

void my_sort_int_array(int *array, int size)
{
	int i = 0;
	
	while (i <= size){
		if (array[i] > array[i + 1]) {
			swap(array + i, array + i + 1);
			i = 0;
		} else {
			i++;
		}
	}
}

