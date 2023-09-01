#include <stdio.h>
/**
 * main - entry point
 * @argc: input int
 * @argv: input char
 *
 * Return: 0
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

