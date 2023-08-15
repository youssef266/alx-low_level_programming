#include "main.h"

/**
 * print_last_digit - print last digit of a number.
 *
 * @n: takes number input
 *
 * Return: LastDigit
*/

int print_last_digit(int n)
{
	int LastDigit;

	if (n < 0)
		LastDigit = -1 * (n % 10);
	else
		LastDigit = n % 10;

	_putchar(LastDigit + '0');
	return (LastDigit);
}
