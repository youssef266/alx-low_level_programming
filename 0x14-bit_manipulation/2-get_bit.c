#include "main.h"

/**
 * get_bit - a function that return the val of a bit
 * @n: var for the number
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_v;

	if (index > 63)
		return (-1);

	bit_v = (n >> index) & 1;

	return (bit_v);
}

