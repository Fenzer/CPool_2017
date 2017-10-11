/*
** EPITECH PROJECT, 2017
** tests-my_compute_power_it.c
** File description:
** Criterion tests for my iterative algo that compute power.
*/

#include<criterion/criterion.h>
#include<math.h>

int my_compute_power_it(int nb, int p);

TestSuite(Power_IT, .timeout=2);

Test(Power_IT, Test1, .timeout=2)
{
	int nb = 3;
	int pow = 5;
	int nb_expow = 243;

	cr_assert_eq(my_compute_power_it(nb,pow),nb_expow,
		    "\nMy Function return : %d\n When it should return : %d",
		     my_compute_power_it(nb,pow),nb_expow);
}

Test(Power_IT, Test2, .timeout=2)
{
	int nb = 6;
	int pow = 8;
	int nb_expow = 1679616;

	cr_assert_eq(my_compute_power_it(nb,pow),nb_expow,
		    "\nMy Function return : %d\n When it should return : %d",
		     my_compute_power_it(nb,pow),nb_expow);
}

Test(Power_IT, Test3, .timeout=2)
{
	int nb = -6;
	int pow = 8;
	int nb_expow = 1679616;

	cr_assert_eq(my_compute_power_it(nb,pow),nb_expow,
		    "\nMy Function return : %d\n When it should return : %d",
		     my_compute_power_it(nb,pow),nb_expow);
}

Test(Power_IT, Test3b, .timeout=2)
{
	int nb = -6;
	int pow = 7;
	int nb_expow = -279936;

	cr_assert_eq(my_compute_power_it(nb,pow),nb_expow,
		    "\nMy Function return : %d\n When it should return : %d",
		     my_compute_power_it(nb,pow),nb_expow);
}


Test(Power_IT, Test4, .timeout=2)
{
	int nb = 6;
	int pow = -8;
	int nb_expow = 0;

	cr_assert_eq(my_compute_power_it(nb,pow),nb_expow,
		    "\nMy Function return : %d\n When it should return : %d",
		     my_compute_power_it(nb,pow),nb_expow);
}

Test(Power_IT, Test5, .timeout=2)
{
	int nb = 10;
	int pow = 8;
	int nb_expow = 100000000;

	cr_assert_eq(my_compute_power_it(nb,pow),nb_expow,
		    "\nMy Function return : %d\n When it should return : %d",
		     my_compute_power_it(nb,pow),nb_expow);
}

Test(Power_IT, Test6, .timeout=2)
{
	int nb = 8;
	int pow = 12;
	int nb_expow = 68719476736;

	cr_assert_eq(my_compute_power_it(nb,pow),nb_expow,
		    "\nMy Function return : %d\n When it should return : %d",
		     my_compute_power_it(nb,pow),nb_expow);
}

