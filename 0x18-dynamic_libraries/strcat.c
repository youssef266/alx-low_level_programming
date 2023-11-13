#include "main.h"

/**
 * *_strcat - a function that concatenates two strings
 *
 * @dest: input param for string
 * @src: input param for string
 *
 * Return: @dest with the result string
*/

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		a++;
	for (i = 0; src[i] != '\0'; i++)
		b++;

	for (i = 0; i <= b; i++)
		dest[a + i] = src[i];
	return (dest);
}
