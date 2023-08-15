#include "main.h"

/**
 * print_sign - print + if n is greater than zero
 *		0 if n egual zero or less than.
 *
 * @n: takes integer type input for function.
 *
 * Return: 1 if +, 0 if 0 or -1
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
