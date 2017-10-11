/*
** EPITECH PROJECT, 2017
** tests-my_compute_factorial_it.c
** File description:
** Recursively compute the factorial of the int passed as an argument and return the result
*/

#include <criterion/criterion.h>

int my_compute_factorial_it(int nb);

Test(utils, tests_my_compute_factorial_0)
{
	int i = -10;
	
	if (i < 0 || i >= 13)
		cr_assert(my_compute_factorial_it(i) == 0);
	else if (i == 0 || i == 1)
		cr_assert(my_compute_factorial_it(i) == 1);
	else if (i == 2)
		cr_assert(my_compute_factorial_it(i) == i);			
	else if (i == 3)
		cr_assert(my_compute_factorial_it(i) == 6);			
	else if (i == 4)
		cr_assert(my_compute_factorial_it(i) == 24);			
	else if (i == 5)
		cr_assert(my_compute_factorial_it(i) == 120);			
	else if (i == 6)
		cr_assert(my_compute_factorial_it(i) == 720);			
	else if (i == 7)
		cr_assert(my_compute_factorial_it(i) == 5040);			
	else if (i == 8)
		cr_assert(my_compute_factorial_it(i) == 40320);			
	else if (i == 9)
		cr_assert(my_compute_factorial_it(i) == 362880);			
	else if (i == 10)
		cr_assert(my_compute_factorial_it(i) == 3628800);
}

Test(utils, tests_my_compute_factorial)
{
	int i = 10;
	
	if (i < 0 || i >= 13)
		cr_assert(my_compute_factorial_it(i) == 0);
	else if (i == 0 || i == 1)
		cr_assert(my_compute_factorial_it(i) == 1);
	else if (i == 2)
		cr_assert(my_compute_factorial_it(i) == i);			
	else if (i == 3)
		cr_assert(my_compute_factorial_it(i) == 6);			
	else if (i == 4)
		cr_assert(my_compute_factorial_it(i) == 24);			
	else if (i == 5)
		cr_assert(my_compute_factorial_it(i) == 120);			
	else if (i == 6)
		cr_assert(my_compute_factorial_it(i) == 720);			
	else if (i == 7)
		cr_assert(my_compute_factorial_it(i) == 5040);			
	else if (i == 8)
		cr_assert(my_compute_factorial_it(i) == 40320);			
	else if (i == 9)
		cr_assert(my_compute_factorial_it(i) == 362880);			
	else if (i == 10)
		cr_assert(my_compute_factorial_it(i) == 3628800);
}

Test(utils, tests_my_compute_factorial_1)
{
	int i = 6;

	if (i < 0 || i >= 13)
		cr_assert(my_compute_factorial_it(i) == 0);
	else if (i == 0 || i == 1)
		cr_assert(my_compute_factorial_it(i) == 1);
	else if (i == 2)
		cr_assert(my_compute_factorial_it(i) == i);			
	else if (i == 3)
		cr_assert(my_compute_factorial_it(i) == 6);			
	else if (i == 4)
		cr_assert(my_compute_factorial_it(i) == 24);			
	else if (i == 5)
		cr_assert(my_compute_factorial_it(i) == 120);			
	else if (i == 6)
		cr_assert(my_compute_factorial_it(i) == 720);			
	else if (i == 7)
		cr_assert(my_compute_factorial_it(i) == 5040);			
	else if (i == 8)
		cr_assert(my_compute_factorial_it(i) == 40320);			
	else if (i == 9)
		cr_assert(my_compute_factorial_it(i) == 362880);			
	else if (i == 10)
		cr_assert(my_compute_factorial_it(i) == 3628800);
}

Test(utils, tests_my_compute_factorial_2)
{
	int i = 9;
	
	if (i < 0 || i >= 13)
		cr_assert(my_compute_factorial_it(i) == 0);
	else if (i == 0 || i == 1)
		cr_assert(my_compute_factorial_it(i) == 1);
	else if (i == 2)
		cr_assert(my_compute_factorial_it(i) == i);			
	else if (i == 3)
		cr_assert(my_compute_factorial_it(i) == 6);			
	else if (i == 4)
		cr_assert(my_compute_factorial_it(i) == 24);			
	else if (i == 5)
		cr_assert(my_compute_factorial_it(i) == 120);			
	else if (i == 6)
		cr_assert(my_compute_factorial_it(i) == 720);			
	else if (i == 7)
		cr_assert(my_compute_factorial_it(i) == 5040);			
	else if (i == 8)
		cr_assert(my_compute_factorial_it(i) == 40320);			
	else if (i == 9)
		cr_assert(my_compute_factorial_it(i) == 362880);			
	else if (i == 10)
		cr_assert(my_compute_factorial_it(i) == 3628800);
}
