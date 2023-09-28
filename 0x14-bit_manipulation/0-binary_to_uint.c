#include "main.h"
/**
 * binary_to_uint - a function that converts binary to unsigned int
 *
 * @b: a string with binary numbers
 *
 * Return: a convert int if b is null
*/

unsigned int binary_to_uint(const char *b)
{
	int c;
	unsigned int decimal = 0;

	if (b == 0)
		return (0);
	for (c = 0; b[c]; c++)
	{
		if (b[c] < '0' || b[c] > '1')
			return(0);
		decimal = 2 * decimal + (b[c] - '0');
	}
	return (decimal);
}
