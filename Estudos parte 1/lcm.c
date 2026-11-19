//Assignment name  : lcm
//Expected files   : lcm.c
//Allowed functions:

//Write a function who takes two unsigned int as parameters and returns the
//computed LCM of those parameters.

//LCM (Lowest Common Multiple) of two non-zero integers is the smallest postive
//integer divisible by the both integers.

//A LCM can be calculated in two ways:

//- You can calculate every multiples of each integers until you have a common
//multiple other than 0

//- You can use the HCF (Highest Common Factor) of these two integers and
//calculate as follows:

//	LCM(x, y) = | x * y | / HCF(x, y)

//  | x * y | means "Absolute value of the product of x by y"

//If at least one integer is null, LCM is equal to 0.

//Your function must be prototyped as follows:

//  unsigned int    lcm(unsigned int a, unsigned int b);

#include <stdio.h>

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	temp;
	unsigned int a1 = a;
	unsigned int b1 = b;

	if ( a == 0 || b == 0)
		return (0);
	while (b1 != 0)
	{
		temp = a1 % b1;
		a1 = b1;
		b1 = temp;
	}
	return (a / a1 * b);
}
int	main(void)
{
	printf("lcm(4, 6)             = %u (esperado 12)\n", lcm(4, 6));
	printf("lcm(7, 13)            = %u (esperado 91)\n", lcm(7, 13));
	printf("lcm(12, 18)           = %u (esperado 36)\n", lcm(12, 18));
	printf("lcm(0, 5)             = %u (esperado 0)\n", lcm(0, 5));
	printf("lcm(5, 0)             = %u (esperado 0)\n", lcm(5, 0));
	printf("lcm(0, 0)             = %u (esperado 0)\n", lcm(0, 0));
	printf("lcm(1, 1)             = %u (esperado 1)\n", lcm(1, 1));
	printf("lcm(100000, 100000)   = %u (esperado 100000)\n",
		lcm(100000, 100000));
	return (0);
}
