#include "main.h"
#include <string.h>
/**
 * *_strdup - a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter.
 *
 * @str: string
 *
 * Return: Returns NULL if str = NULL
*/

char *_strdup(char *str)
{
	char *duplicate;
	int i, r = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
		i++;

	duplicate = malloc(sizeof(char) * (i + 1));

	if (duplicate == 0)
	{
		return (NULL);
	}
	for (r = 0; str[r]; r++)
		duplicate[r] = str[r];
	return (duplicate);
}
