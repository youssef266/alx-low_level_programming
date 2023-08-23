#include "main.h"
#include <ctype.h>

/**
 * *string_toupper - function that changes all lowercase
 *		letters of a string to uppercase.
 * @str: input of letters
 *
 * Return: str
*/

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		*ptr = toupper((unsigned char)(*ptr));
		ptr++;
	}

	return (str);
}
