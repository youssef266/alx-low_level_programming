#include "main.h"

/**
 * *leet - a function that encodes a string into 1337.
 * @str: input str
 *
 * Return: the string that encoded
*/

char *leet(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		char c = *ptr;
		char leet_char = c;

		if (c == 'a' || c == 'A')
		{
			leet_char = '4';
		} else if (c == 'e' || c == 'E')
		{
			leet_char = '3';
		} else if (c == 'o' || c == 'O')
		{
			leet_char = '0';
		} else if (c == 't' || c == 'T')
		{
			leet_char = '7';
		} else if (c == 'l' || c == 'L')
		{
			leet_char = '1';
		}

		*ptr = leet_char;
		ptr++;
	}

	return (str);
}
