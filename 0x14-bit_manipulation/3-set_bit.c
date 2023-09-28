#include "main.h"

/**
 * set_bit -a function that sets a val of a bit to 1
 * at a given index
 * @n: a pointer of type n
 * @index: a var for the index of unsigned int
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

