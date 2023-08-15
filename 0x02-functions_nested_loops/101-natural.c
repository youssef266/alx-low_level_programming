#include "main.h"

/**
 * main - entery point
 *
 * Description: computes the sum of all the multiples
 *
 * Return: always 0
*/

int main(void)
{
	int sum, num;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum += num;
	}
	printf("%d\n", sum);

	return (0);
}
