#include <stdio.h>

/**
 * main - entery point
 *
 * Description: prints all the numbers of base 16 in lowercase
 *
 * Return: alweys 0
*/

int main(void)
{
	int i;
	char k;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (k = 'a' ; k <= 'f' ; k++)
		putchar(k);
	putchar('\n');
	return (0);
}
