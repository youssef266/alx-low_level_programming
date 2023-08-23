#include "main.h"

/**
 * *rot13 - a function that encodes a string using rot13.
 * @str: input str
 *
 * Return: encoded str
*/

char *rot13(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		char c = *ptr;

		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			char base = (c >= 'a' && c <= 'z') ? 'a' : 'A';

			*ptr = ((c - base + 13) % 26) + base;
		}

		ptr++;
	}

	return (str);
}
