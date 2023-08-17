#include <stdio.h>

/**
 * _sqrt - finds the square root
 *
 * @x: input number
 *
 * Return: square root of x
 */

double _sqrt(double x)
{
	float sqrt, tmp;

	sqrt = x / 2;
	tmp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (x / tmp + tmp) / 2;
	}
	return (sqrt);
}

/**
 * largest_prime_factor - finds and prints the largest
 *			prime number
 *
 * @num: number pram
*/

void largest_prime_factor(long int num)
{
	int prmnum, largest;

	while (num % 2 == 0)
		num = num / 2;
	for (prmnum = 3; prmnum <= _sqrt(num); prmnum += 2)
	{
		while (num % prmnum == 0)
		{
			num = num / prmnum;
			largest = prmnum;
		}
	}

	if (num > 2)
		largest = num;
	printf("%d\n", largest);
}

/**
 * main - entery point
 *
 * Return: 0
*/

int main(void)
{
	largest_prime_factor(612852475143);

	return (0);
}
