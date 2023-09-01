#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: input int
 * @argv: input char
 *
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		printf("Error\n");
		return (1);
	}

	int result = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", result);

	return (0);
}
