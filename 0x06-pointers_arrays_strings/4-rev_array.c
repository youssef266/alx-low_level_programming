#include "main.h"

/**
 * reverse_array - a function that reverses the
 *		content of an array of integers.
 * @a: input integer
 * @n: number of elements of the array
 *
 * Return: 0
*/

void reverse_array(int *a, int n)
{
	int left = 0;
	int right = n - 1;

	while (left < right)
	{
		int temp = a[left];

		a[left] = a[right];
		a[right] = temp;

		left++;
		right--;
	}
}
