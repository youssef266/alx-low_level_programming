#include "main.h"

/**
 * _atoi - converts a string to an integer
 *
 * @s: string input param
 *
 * Return: converted integer from string
*/

int _atoi(char *s)
{
	unsigned int number = 0;
	int i = 1;

	do {
		if (*s == '-')
			i *= -1;
		else if (*s >= '0' && *s <= '9')
			number = (number * 10) + (*s - '0');
		else if (number > 0)
			break;
	} while (*s++);

	return (number * i);
}
