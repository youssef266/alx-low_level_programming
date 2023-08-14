#include "main.h"

/**
 * main - entery point
 *
 * Description: print _putchar using putchar prototype
 *
 * Return: always 0
*/

int main(void)
{
	char put[] = "_putchar";
	int a;

	for (a = 0; a < 8; a++)
		_putchar(put[a]);
	_putchar('\n');

	return (0);
}
