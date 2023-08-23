#include "main.h"
#include <ctype.h>

/**
 * is_separator - that make the separators
 * @c: inputs of letters
 *
 * Return: 0 or 1
*/

int is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; separators[i] != '\0'; i++)
	{
		if (separators[i] == c)
		{
			return (1);
		}
	}
	return (0);
}

/**
 * *cap_string - function that capitalizes all words of a string.
 * @str: input from main file
 *
 * Return: @str
*/


char *cap_string(char *str)
{
	int capitalize_next = 1;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (is_separator(str[i]))
		{
			capitalize_next = 1;

		} else if (capitalize_next && islower(str[i]))
		{
			str[i] = toupper((unsigned char)(str[i]));
			capitalize_next = 0;
		} else
		{
			capitalize_next = 0;
		}
	}

	return (str);
}
