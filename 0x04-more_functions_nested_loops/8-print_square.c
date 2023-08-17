#include "main.h"

/**
 * print_square - fuction to print square
 * @size: input of size
 *
 * Return: 0
*/

void print_square(int size)
{
	int row, colum;

	if (size <= 0)
		_putchar('\n');
	for (row = 1; row <= size; row++)
	{
		for (colum = 1; colum <= size; colum++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
