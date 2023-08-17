#include "main.h"

/**
 * print_diagonal - function that prints diagonal
 *
 * @n: input parm
 *
 * Return: 0
*/

void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (a = 1; a <= n; a++)
		{
			for (b = 1; b <= a; b++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
