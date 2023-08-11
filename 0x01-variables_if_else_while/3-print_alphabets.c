#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all alphabet in lowercase and uppercase
 *
 * Return: alwayes 0
*/

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (i = 'A' ; i <= 'Z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
