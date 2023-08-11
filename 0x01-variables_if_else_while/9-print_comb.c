#include <stdio.h>

/**
 * main - entery point
 *
 * Description: print all possible combinations of single-digit numbers
 *
 * Return: alwayes 0
*/

int main(void)
{
	int i;

	for (i = 1; i < 10; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	return (0);
}
