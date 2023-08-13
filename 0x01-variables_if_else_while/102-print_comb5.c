#include <stdio.h>

/**
 * main - entery point
 *
 * DEscription: prints all possible combinations of two two-digit numbers
 *
 * Return: alwyes 0
*/

int main(void)
{
	int a = 0, b;

	while (a <= 99)
	{
		a = b;

		while (b <= 99)
		{
			if (b != a)
			{
				putchar((a / 10) + 48);
				putchar((a % 10) + 48);
				putchar(' ');
				putchar((b / 10) + 48);
				putchar((a % 10) + 48);

				if (a != 98 || b != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
