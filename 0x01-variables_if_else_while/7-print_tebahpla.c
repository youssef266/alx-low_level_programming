#include <stdio.h>

/**
 * main - entery point
 *
 * Description: reverse alphabet lowercase litters
 *
 * Return: alwayes 0
*/

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
