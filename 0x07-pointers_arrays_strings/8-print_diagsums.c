#include "main.h"

/**
 * print_diagsums - a function that prints the sum of the two
 *		diagonals of a square matrix of integers
 * @a: array of type int
 * @size: size of array (square)
*/

void print_diagsums(int *a, int size)
{
	int i, mainDiagonalSum = 0, secondaryDiagonalSum = 0;

	for (i = 0; i < size; i++)
	{
		mainDiagonalSum += a[i];
		secondaryDiagonalSum += a[size - i - 1];
		a += size;
	}

	printf("%d, ", mainDiagonalSum);
	printf("%d\n", secondaryDiagonalSum);
}
