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
	char *duplicate = (char *)malloc(strlen(str) + 1);
	int i = 0, size = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	if (duplicate == NULL)
	{
		return (NULL);
	} else
	{
		for (; i < size; i++)
			duplicate[i] = str[i];
	}
	strcpy(duplicate, str);
	return (duplicate);
}
