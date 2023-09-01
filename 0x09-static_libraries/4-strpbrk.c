#include "main.h"
#include <string.h>

/**
 * *_strpbrk - function locates the first occurrence in the string
 * @s: string
 * @accept: string is match
 *
 * Return: a pointer to the byte in s that matches one of
 * the bytes in accept, or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (strchr(accept, *s))
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
