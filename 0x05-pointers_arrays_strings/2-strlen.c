#include "main.h"

/**
 * _strlen -  a function that returns the length of a string.
 *
 * @s: string pram input
 *
 * Return: string length
*/

int _strlen(char *s)
{
	int str;

	for (str = 0; *s != '\0'; s++)
		++str;
	return (str);
}
