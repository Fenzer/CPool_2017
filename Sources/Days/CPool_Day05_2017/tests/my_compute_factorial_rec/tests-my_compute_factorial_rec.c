/*
** EPITECH PROJECT, 2017
** test-my_compute_factorial_rec.c
** File description:
** Test the return the factorial of an int passed as an argument
** passed by a recursive algorithm 
*/

#include <criterion/criterion.h>

int my_compute_factorial_rec(int nb);

void setup(void) {
    puts(">=|TEST SUIT of  'my_compute_factorial_rec']=<");
}

void teardown(void) {
    puts("Done");
}

TestSuite(Rec_fac, .init = setup, .fini = teardown);

int i = -2;

Test(Rec_Fac, Test0, .timeout = 2)
{
	i++;
	if (i < 0 || i >=13)
		cr_assert(my_compute_factorial_rec(i) == 0, "with i = %d", i);
 	else if (i == 0 || i == 1)
		cr_expect(my_compute_factorial_rec(i) == 1);
	else if (i == 2)
		cr_expect(my_compute_factorial_rec(i) == i);			
	else if (i == 3)
		cr_expect(my_compute_factorial_rec(i) == 6);			
	else if (i == 4)
		cr_expect(my_compute_factorial_rec(i) == 24);			
	else if (i == 5)
		cr_expect(my_compute_factorial_rec(i) == 120);			
	else if (i == 6)
		cr_expect(my_compute_factorial_rec(i) == 720);			
	else if (i == 7)
		cr_expect(my_compute_factorial_rec(i) == 5040);			
	else if (i == 8)
		cr_expect(my_compute_factorial_rec(i) == 40320);			
	else if (i == 9)
		cr_expect(my_compute_factorial_rec(i) == 362880);			
	else if (i == 10)
		cr_expect(my_compute_factorial_rec(i) == 3628800);
}

Test(Rec_Fac, Test1, .timeout = 2)
{
	i++;
	if (i < 0 || i >=13)
		cr_expect(my_compute_factorial_rec(i) == 0 );
	else if (i == 0 || i == 1)
		cr_expect(my_compute_factorial_rec(i) == 1);
	else if (i == 2)
		cr_expect(my_compute_factorial_rec(i) == i);			
	else if (i == 3)
		cr_expect(my_compute_factorial_rec(i) == 6);			
	else if (i == 4)
		cr_expect(my_compute_factorial_rec(i) == 24);			
	else if (i == 5)
		cr_expect(my_compute_factorial_rec(i) == 120);			
	else if (i == 6)
		cr_expect(my_compute_factorial_rec(i) == 720);			
	else if (i == 7)
		cr_expect(my_compute_factorial_rec(i) == 5040);			
	else if (i == 8)
		cr_expect(my_compute_factorial_rec(i) == 40320);			
	else if (i == 9)
		cr_expect(my_compute_factorial_rec(i) == 362880);			
	else if (i == 10)
		cr_expect(my_compute_factorial_rec(i) == 3628800);
}

Test(Rec_Fac, Test2, .timeout = 2)
{
	i++;
	if (i < 0 || i >=13)
		cr_expect(my_compute_factorial_rec(i) == 0 );
	else if (i == 0 || i == 1)
		cr_expect(my_compute_factorial_rec(i) == 1);
	else if (i == 2)
		cr_expect(my_compute_factorial_rec(i) == i);			
	else if (i == 3)
		cr_expect(my_compute_factorial_rec(i) == 6);			
	else if (i == 4)
		cr_expect(my_compute_factorial_rec(i) == 24);			
	else if (i == 5)
		cr_expect(my_compute_factorial_rec(i) == 120);			
	else if (i == 6)
		cr_expect(my_compute_factorial_rec(i) == 720);			
	else if (i == 7)
		cr_expect(my_compute_factorial_rec(i) == 5040);			
	else if (i == 8)
		cr_expect(my_compute_factorial_rec(i) == 40320);			
	else if (i == 9)
		cr_expect(my_compute_factorial_rec(i) == 362880);			
	else if (i == 10)
		cr_expect(my_compute_factorial_rec(i) == 3628800);
}

Test(Rec_Fac, Test3, .timeout = 2)
{
	i++;
	if (i < 0 || i >=13)
		cr_expect(my_compute_factorial_rec(i) == 0 );
	else if (i == 0 || i == 1)
		cr_expect(my_compute_factorial_rec(i) == 1);
	else if (i == 2)
		cr_expect(my_compute_factorial_rec(i) == i);			
	else if (i == 3)
		cr_expect(my_compute_factorial_rec(i) == 6);			
	else if (i == 4)
		cr_expect(my_compute_factorial_rec(i) == 24);			
	else if (i == 5)
		cr_expect(my_compute_factorial_rec(i) == 120);			
	else if (i == 6)
		cr_expect(my_compute_factorial_rec(i) == 720);			
	else if (i == 7)
		cr_expect(my_compute_factorial_rec(i) == 5040);			
	else if (i == 8)
		cr_expect(my_compute_factorial_rec(i) == 40320);			
	else if (i == 9)
		cr_expect(my_compute_factorial_rec(i) == 362880);			
	else if (i == 10)
		cr_expect(my_compute_factorial_rec(i) == 3628800);
}

Test(Rec_Fac, Test4, .timeout = 2)
{
	i++;
	if (i < 0 || i >=13)
		cr_expect(my_compute_factorial_rec(i) == 0 );
	else if (i == 0 || i == 1)
		cr_expect(my_compute_factorial_rec(i) == 1);
	else if (i == 2)
		cr_expect(my_compute_factorial_rec(i) == i);			
	else if (i == 3)
		cr_expect(my_compute_factorial_rec(i) == 6);			
	else if (i == 4)
		cr_expect(my_compute_factorial_rec(i) == 24);			
	else if (i == 5)
		cr_expect(my_compute_factorial_rec(i) == 120);			
	else if (i == 6)
		cr_expect(my_compute_factorial_rec(i) == 720);			
	else if (i == 7)
		cr_expect(my_compute_factorial_rec(i) == 5040);			
	else if (i == 8)
		cr_expect(my_compute_factorial_rec(i) == 40320);			
	else if (i == 9)
		cr_expect(my_compute_factorial_rec(i) == 362880);			
	else if (i == 10)
		cr_expect(my_compute_factorial_rec(i) == 3628800);
}

Test(Rec_Fac, Test5, .timeout = 2)
{
	i++;
	if (i < 0 || i >=13)
		cr_expect(my_compute_factorial_rec(i) == 0 );
	else if (i == 0 || i == 1)
		cr_expect(my_compute_factorial_rec(i) == 1);
	else if (i == 2)
		cr_expect(my_compute_factorial_rec(i) == i);			
	else if (i == 3)
		cr_expect(my_compute_factorial_rec(i) == 6);			
	else if (i == 4)
		cr_expect(my_compute_factorial_rec(i) == 24);			
	else if (i == 5)
		cr_expect(my_compute_factorial_rec(i) == 120);			
	else if (i == 6)
		cr_expect(my_compute_factorial_rec(i) == 720);			
	else if (i == 7)
		cr_expect(my_compute_factorial_rec(i) == 5040);			
	else if (i == 8)
		cr_expect(my_compute_factorial_rec(i) == 40320);			
	else if (i == 9)
		cr_expect(my_compute_factorial_rec(i) == 362880);			
	else if (i == 10)
		cr_expect(my_compute_factorial_rec(i) == 3628800);
}

Test(Rec_Fac, Test6, .timeout = 2)
{
	i++;
	if (i < 0 || i >=13)
		cr_expect(my_compute_factorial_rec(i) == 0 );
	else if (i == 0 || i == 1)
		cr_expect(my_compute_factorial_rec(i) == 1);
	else if (i == 2)
		cr_expect(my_compute_factorial_rec(i) == i);			
	else if (i == 3)
		cr_expect(my_compute_factorial_rec(i) == 6);			
	else if (i == 4)
		cr_expect(my_compute_factorial_rec(i) == 24);			
	else if (i == 5)
		cr_expect(my_compute_factorial_rec(i) == 120);			
	else if (i == 6)
		cr_expect(my_compute_factorial_rec(i) == 720);			
	else if (i == 7)
		cr_expect(my_compute_factorial_rec(i) == 5040);			
	else if (i == 8)
		cr_expect(my_compute_factorial_rec(i) == 40320);			
	else if (i == 9)
		cr_expect(my_compute_factorial_rec(i) == 362880);			
	else if (i == 10)
		cr_expect(my_compute_factorial_rec(i) == 3628800);
}

Test(Rec_Fac, Test7, .timeout = 2)
{
	i++;
	if (i < 0 || i >=13)
		cr_expect(my_compute_factorial_rec(i) == 0 );
	else if (i == 0 || i == 1)
		cr_expect(my_compute_factorial_rec(i) == 1);
	else if (i == 2)
		cr_expect(my_compute_factorial_rec(i) == i);			
	else if (i == 3)
		cr_expect(my_compute_factorial_rec(i) == 6);			
	else if (i == 4)
		cr_expect(my_compute_factorial_rec(i) == 24);			
	else if (i == 5)
		cr_expect(my_compute_factorial_rec(i) == 120);			
	else if (i == 6)
		cr_expect(my_compute_factorial_rec(i) == 720);			
	else if (i == 7)
		cr_expect(my_compute_factorial_rec(i) == 5040);			
	else if (i == 8)
		cr_expect(my_compute_factorial_rec(i) == 40320);			
	else if (i == 9)
		cr_expect(my_compute_factorial_rec(i) == 362880);			
	else if (i == 10)
		cr_expect(my_compute_factorial_rec(i) == 3628800);
}
