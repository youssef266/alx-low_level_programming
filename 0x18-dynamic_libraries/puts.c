#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line
 *
 * @s: string pram to print
 *
 * Return: 0
*/

void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s + 0);
		s++;
	}
	_putchar('\n');
}
