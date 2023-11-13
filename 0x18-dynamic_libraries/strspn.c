#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: string
 * @accept: bytes
 *
 * Return: unsigned int
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, e;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (e = 0; accept[e] != s[i]; e++)
		{
			if (accept[e] == '\0')
				return (i);
		}
	}
	return (i);
}
