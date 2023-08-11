#include <stdio.h>

/**
 * main - entery point
 *
 * Description: print all single numbers from 0 , 10 by putchar function
 *
 * Return: always 0
*/

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
