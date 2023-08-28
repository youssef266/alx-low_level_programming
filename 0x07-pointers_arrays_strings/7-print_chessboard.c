#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard.
 * @a: rows
 *
 * Return: nothing
*/

void print_chessboard(char (*a)[8])
{
	int i, e;

	for (i = 0; i < 8; i++)
	{
		for (e = 0; e < 8; e++)
		{
			_putchar(a[i][e]);
		}
		_putchar('\n');
	}
}
