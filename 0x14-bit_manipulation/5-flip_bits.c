#include "main.h"

/**
 * flip_bits - a function that returns the number of bites
 * it need to flip to get from one number to another
 * @n: var for the first number
 * @m: var for the second number
 *
 * Return: number of bits that is changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int b, counter = 0;
	unsigned long int c;
	unsigned long int exclusive_num = n ^ m;

	for (b = 63; b >= 0; b--)
	{
		c = exclusive_num >> b;
		if (c & 1)
			counter++;
	}

	return (counter);
}

