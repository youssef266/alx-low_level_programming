#include "main.h"

/**
 * get_endianness - a function that checks the endianness.
 * Return: 0 for the big endian, 1 for the little endian.
 */
int get_endianness(void)
{
	unsigned int b = 1;
	char *d = (char *) &b;

	return (*d);
}

