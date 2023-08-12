#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all possible combinations of two digits
 *
 * Return: always 0
*/

int main(void)
{
	int a = '0';
	int b = '0';

	while (a <= '8')
	{
		while (b <= '8')
		{
			if (!(a > b) || a == b)
			{
				putchar(a);
				putchar(b);
				if (a == '8' && b == '8')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			b++;
		}
		b = '0';
		a++;
	}
return (0);
}
