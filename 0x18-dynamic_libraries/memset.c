#include "main.h"

/**
 * *_memset - a function that fills memory with a constant byte
 *
 * @s: pointer to put the constant
 * @b: the constant byte
 * @n: the bytes used
 *
 * Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
