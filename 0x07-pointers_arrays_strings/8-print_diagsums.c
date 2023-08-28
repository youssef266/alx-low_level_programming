#include "main.h"

/**
 * print_diagsums - a function that prints the sum of the two
 *		diagonals of a square matrix of integers
 * @a: array of type int
 * @size: size of array (square)
*/

void print_diagsums(int *a, int size)
{
	int mainDiagonalSum = 0;
	int secondaryDiagonalSum = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		mainDiagonalSum += *(a + i * size + i);
		secondaryDiagonalSum += *(a + i * size + (size - 1 - i));
	}

	printf("%d,", mainDiagonalSum);
	printf("%d\n", secondaryDiagonalSum);
}
