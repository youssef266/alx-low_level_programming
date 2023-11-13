#include "main.h"

/**
 * *_memcpy - a function that copies memory area
 *
 * @dest: pointer to the memory area
 * @src: pointer to the memory area
 * @n: lenght of src to be copied
 *
 * Return: @dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
