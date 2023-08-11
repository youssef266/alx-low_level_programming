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

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
