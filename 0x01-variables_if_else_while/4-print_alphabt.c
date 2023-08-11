#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all alphabet in lowercase exept q , e
 *
 * Return: always 0
*/

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
