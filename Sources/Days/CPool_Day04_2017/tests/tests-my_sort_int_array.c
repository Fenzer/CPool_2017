/*
** EPITECH PROJECT, 2017
** tests-my_sort_int_array.c
** File description:
** Main to test my sort int array function.
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

int main(void)
{
	int array[2][11] = {{11,10,9,8,7,6,5,4,3,2,1},
			    {20,53,2,1,2,7,68,13,0,-17,98}};

	printf(">---BEFORE SORTING---<\n");
	printf("\n -->>First array<<--\n");
	for (int i = 0; i < 11; i++)
		printf("    T[%d] = %d\n",i,array[0][i]);
	printf("\n -->>Second array<<--\n");
	for (int i = 0; i < 11; i++)
		printf("    T[%d] = %d\n",i,array[1][i]);
	my_sort_int_array(array[0], 11);
	my_sort_int_array(array[1], 11);
	printf("\n>>--AFTER SORTING--<<\n");
	printf("\n -->>First array<<--\n");
	for (int i = 0; i < 11; i++)
		printf("    T[%d] = %d\n",i,array[0][i]);
	printf("\n -->>Second array<<--\n");
	for (int i = 0; i < 11; i++)
		printf("    T[%d] = %d\n",i,array[1][i]);
	
	return (0);
}
