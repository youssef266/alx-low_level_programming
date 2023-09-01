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
	int cents = atoi(argv[1]);
	int coins_25 = 0, coins_10 = 0, coins_5 = 0, coins_2 = 0, coins_1 = 0;

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
	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
			coins_25++;
		} else if (cents >= 10)
		{
			cents -= 10;
			coins_10++;
		} else if (cents >= 5)
		{
			cents -= 5;
			coins_5++;
		} else if (cents >= 2)
		{
			cents -= 2;
			coins_2++;
		} else
		{
			cents -= 1;
			coins_1++;
		}
	}

	printf("%d %d %d %d %d\n", coins_25, coins_10, coins_5, coins_2, coins_1);

	return (0);
}
