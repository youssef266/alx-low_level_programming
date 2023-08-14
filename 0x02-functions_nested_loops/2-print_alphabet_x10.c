#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet x10 times
 *
 * Description: print using print_alphabet_x10 and _putchar
 *
 * Return: always 0
*/

void print_alphabet_x10(void)
{
	int b;
	char i;

	for (b = 0 ; b < 10 ; b++)
	{
		for (i = 'a' ; i <= 'z' ; i++)
			_putchar(i);
	}
	_putchar('\n');
}
