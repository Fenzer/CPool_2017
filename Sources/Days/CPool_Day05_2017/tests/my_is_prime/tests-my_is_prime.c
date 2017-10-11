/*
** EPITECH PROJECT, 2017
** tests-my_is_prime.c
** File description:
** Criterion tests for  my_is_prime.c
*/

#include <criterion/criterion.h>
#define INT_MAX 2147483647

int my_is_prime(int nb);

TestSuite(Primet, .timeout=2);

Test(Primet, Primet0)
{
	int i = 2;
	int Primei = 1;

	cr_assert_eq(my_is_prime(i), Primei,
		     "\n Our Function returned : %d\nWhen it should return %d",
		     my_is_prime(i), Primei);
}

Test(Primet, Primetneg)
{
	int i = -2;
	int Primei = 0;

	cr_assert_eq(my_is_prime(i), Primei,
		     "\n Our Function returned : %d\nWhen it should return %d",
		     my_is_prime(i), Primei);
}

Test(Primet, Primet01)
{
	int i = 2;
	int Primei = 1;

	cr_assert_eq(my_is_prime(i), Primei,
		     "\n Our Function returned : %d\nWhen it should return %d",
		     my_is_prime(i), Primei);
}

Test(Primet, Primet1)
{
	int i = 4;
	int Primei = 0;

	cr_assert_eq(my_is_prime(i), Primei,
		     "\n Our Function returned : %d\nWhen it should return %d",
		     my_is_prime(i), Primei);
}

Test(Primet, Primet2)
{
	int i = 4848 * 4848;
	int Primei = 0;

	cr_assert_eq(my_is_prime(i), Primei,
		     "\n Our Function returned : %d\nWhen it should return %d",
		     my_is_prime(i), Primei);
}

Test(Primet, Primet3)
{
	int i = 31;
	int Primei = 1;

	cr_assert_eq(my_is_prime(i), Primei,
		     "\n Our Function returned : %d\nWhen it should return %d",
		     my_is_prime(i), Primei);
}

Test(Primet, Primet4)
{
	int i = 127;
	int Primei = 1;

	cr_assert_eq(my_is_prime(i), Primei,
		     "\n Our Function returned : %d\nWhen it should return %d",
		     my_is_prime(i), Primei);
}

Test(Primet, Primet5)
{
	int i = 524287;
	int Primei = 1;

	cr_assert_eq(my_is_prime(i), Primei,
		     "\n Our Function returned : %d\nWhen it should return %d",
		     my_is_prime(i), Primei);
}

Test(Primet, Primet11)
{
	int i = 39;
	int Primei = 0;

	cr_assert_eq(my_is_prime(i), Primei,
		     "\n Our Function returned : %d\nWhen it should return %d",
		     my_is_prime(i), Primei);
}

Test(Primet, Primet41)
{
	int i = 128;
	int Primei = 0;

	cr_assert_eq(my_is_prime(i), Primei,
		     "\n Our Function returned : %d\nWhen it should return %d",
		     my_is_prime(i), Primei);
}

Test(Primet, Primet51)
{
	int i = 524289;
	int Primei = 0;

	cr_assert_eq(my_is_prime(i), Primei,
		     "\n Our Function returned : %d\nWhen it should return %d",
		     my_is_prime(i), Primei);
}

Test(Primet, PrimetMax)
{
	int i = INT_MAX - 1;
	int sqri = 0;

	cr_assert_eq(my_is_prime(i), sqri,
		     "\n Our Function returned : %d\nWhen it should return %d",
		     my_is_prime(i), sqri);
}

/*
** EPITECH PROJECT, 2017
** my_find_prime_sup.c
** File description:
** Return the first prime number greater or equal to the int passed as an argument


#include <criterion/criterion.h>

int my_find_next_prime(int nb);

TestSuite(FindPrimeSup, .timeout = 2);

Test(FindPrimeSup, Test1) {
	int i = 1;
	
	cr_assert(my_find_next_prime(i) == 3,
		  "Test for i = %d return %d instead of 3", i, my_find_next_prime(i));
}

Test(FindPrimeSup, Test2) {
	int i = 2;
	
	cr_assert(my_find_next_prime(i) == 3,
		  "Test for i = %d return %d instead of 3", i, my_find_next_prime(i));
}

Test(FindPrimeSup, Test3) {
	int i = 3;
	
	cr_assert(my_find_next_prime(1) == 3,
		  "Test for i = %d return %d instead of 3", i, my_find_next_prime(i));
}

Test(FindPrimeSup, Test4) {
	int i = 4;
	
	cr_assert(my_find_next_prime(1) == 5,
		  "Test for i = %d return %d instead of 3", i, my_find_next_prime(i));
}
*/ 
