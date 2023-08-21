#include "main.h"
#include <string.h>

/**
 * rev_string - a function that reverses a string.
 * @s: string pram input
 *
 * Return: 0
*/

void rev_string(char *s)
{
	int length = strlen(s);
	int i;

	for (i = 0; i < length / 2; i++)
	{
		char temp = s[i];

		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
}
