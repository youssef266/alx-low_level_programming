#include "main.h"

/**
 * print_line - function that prints lines
 *
 * @n: input parameter
 *
 * Return: 0
*/

void print_line(int n)
{
	int char_lenth;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (char_lenth = 1; char_lenth <= n; char_lenth++)
			_putchar('_');
		_putchar('\n');
	}
}
