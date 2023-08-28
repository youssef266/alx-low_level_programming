#include "main.h"

/**
 * *_strstr - a function that locates a substring.
 * @haystack: string
 * @needle: substring
 *
 * Return: a pointer to the beginning of the located substring,
 *	or NULL if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*n && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}
