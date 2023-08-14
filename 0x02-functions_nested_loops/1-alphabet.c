#include "main.h"

/**
 * print_alphabet - function to print alphabets in lower case
 *
 * description: prints all alphbet using print_alpabet function
 *
 * Return: always 0
*/

void print_alphabet(void)
{
	char e;

	for (e = 'a' ; e <= 'z' ; e++)
		_putchar(e);
	_putchar('\n');
}
