#include "main.h"

/**
 * _isalpha - checks if character is letter
 *
 * @c: takes input from other functions.
 *
 * Return: 1 or 0
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
