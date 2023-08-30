#include "main.h"
#include <stdio.h>

/**
 * is_prime_helper - function to help
 * @n: int
 * @divisor: number to be compared
 *
 * Return: 1 or 0
*/

int is_prime_helper(int n, int divisor)
{
	if (divisor <= 1)
	{
		return (1);
	}

	if (n % divisor == 0)
	{
		return (0);
	}
	return (is_prime_helper(n, divisor - 1));
}

/**
 * is_prime_number - a function that returns 1 if the input
 * integer is a prime number, otherwise return 0.
 * @n: int
 *
 * Return: 1 or 0
*/
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (is_prime_helper(n, n - 1));
}
