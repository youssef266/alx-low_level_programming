#include "main.h"

/**
 * clear_bit - a function that sets the value of a given bit to 0
 * @n: pointer for typ int
 * @index: var of the index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	/*~ is an operator */
	*n = (~(1UL << index) & *n);
	return (1);
}

