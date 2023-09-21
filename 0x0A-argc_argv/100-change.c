#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: input int
 * @argv: input char
 *
 * Return: 0
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	int cents = atoi(argv[1]);
	int coins = 0;
	int coin_values[] = {25, 10, 5, 2, 1};
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		while (cents >= coin_values[i])
		{
			cents -= coin_values[i];
			coins++;
		}
	}
	printf("%d\n", coins);

	return (0);
}
