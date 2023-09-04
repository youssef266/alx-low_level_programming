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

	if (str == NULL)
	{
		return (NULL);
	}
	if (duplicate == NULL)
	{
		return (NULL);
	}
	fprintf(stderr, "failed to allocate memory\n");
	strcpy(duplicate, str);
	return (duplicate);
}
