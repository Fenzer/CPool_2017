/*
** EPITECH PROJECT, 2017
** tests-my_compute_square_root.c
** File description:
** Criterion tests for  my_compute_square_root.c
*/

#include <criterion/criterion.h>
#include <math.h>
#define INT_MAX 2147483647

int my_compute_square_root(int nb);

TestSuite(Sqrt, .timeout=2);

Test(Sqrt, Sqrt0)
{
	int i = 2;
	int sqri = 0;

	cr_assert_eq(my_compute_square_root(i), sqri,
		     "\n Our Function returned : %d\nWhen it should return %d",
		     my_compute_square_root(i), sqri);
}

Test(Sqrt, Sqrt1)
{
	int i = 4;
	int sqri = 2;

	cr_assert_eq(my_compute_square_root(i), sqri,
		     "\n Our Function returned : %d\nWhen it should return %d",
		     my_compute_square_root(i), sqri);
}

Test(Sqrt, Sqrt2)
{
	int i = 4848 * 4848;
	int sqri = 4848;

	cr_assert_eq(my_compute_square_root(i), sqri,
		     "\n Our Function returned : %d\nWhen it should return %d",
		     my_compute_square_root(i), sqri);
}

Test(Sqrt, Sqrt3)
{
	int i = 46340 * 46340;
	int sqri = 46340;

	cr_assert_eq(my_compute_square_root(i), sqri,
		     "\n Our Function returned : %d\nWhen it should return %d",
		     my_compute_square_root(i), sqri);
}

Test(Sqrt, SqrtMax)
{
	int i = INT_MAX;
	int sqri = 0;

	cr_assert_eq(my_compute_square_root(i), sqri,
		     "\n Our Function returned : %d\nWhen it should return %d",
		     my_compute_square_root(i), sqri);
}