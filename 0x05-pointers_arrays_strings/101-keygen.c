#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8

/**
 * generate_password - function that generate password
 *
 * @password: input param
 *
 * Return: 0
*/

void generate_password(char *password)
{
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFG";
	int charset_length = sizeof(charset) - 1;
	int i;

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		int index = rand() % charset_length;

		password[i] = charset[index];
	}

	password[PASSWORD_LENGTH] = '\0';
}

/**
 * main - entery point
 *
 * Return: 0
*/

int main(void)
{
	srand(time(NULL));

	char password[PASSWORD_LENGTH + 1];

	generate_password(password);

	printf("Generated Password: %s\n", password);

	return (0);
}
