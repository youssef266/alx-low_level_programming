#include "main.h"

/**
 * print_number - a function that prints an integer.
 * @n: input patrameter
 *
 * Return: 0
*/

void print_number(int n)
{
	int divisor, temp;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	divisor = 1;
	temp = n;

	while (temp > 9)
	{
		divisor *= 10;
		temp /= 10;
	}

	do {
		_putchar('0' + (n / divisor));
		n %= divisor;
		divisor /= 10;
	} while (divisor != 0);
}
