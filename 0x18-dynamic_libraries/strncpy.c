#include "main.h"

/**
 * *_strncpy - a function that copies a string
 * @dest: pointer to dest input
 * @src: pointer to src input
 * @n: bytes of @src
 *
 * Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0' ; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
