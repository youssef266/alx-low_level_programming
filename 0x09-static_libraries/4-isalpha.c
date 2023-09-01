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
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
