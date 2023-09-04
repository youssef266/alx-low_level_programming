#include "main.h"
#include <string.h>
/**
 * *str_concat - a function that concatenates two strings.
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer
*/

char *str_concat(char *s1, char *s2)
{
	size_t len_s1 = strlen(s1);
	size_t len_s2 = strlen(s2);
	size_t total_length = len_s1 + len_s2;
	char *result = (char *)malloc(total_length + 1);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (result == NULL)
	{
		return (NULL);
	}
	strcpy(result, s1);
	strcat(result, s2);

	return (result);
}
