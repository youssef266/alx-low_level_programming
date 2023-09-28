#include "main.h"
/**
 * print_binary - a function that prints the binary representation of a number.
 *
 * @n: the number to print
 *
 * Return: void
*/
void print_binary(unsigned long int n)
{
	int b, counter = 0;
	unsigned long int c;

	if (n == 0)
		_putchar('0');
	for (b = 63; b >= 0; b--)
	{
		c = n >> b;
		if (c & 1)
		{
			_putchar('1');
			counter++;
		}else if (counter)
		{
			_putchar('0');
		}

	}
}
