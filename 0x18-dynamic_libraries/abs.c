#include "main.h"

/**
 * _abs - function to find the absolute value of a number
 *
 * @n: fuction parameter
 *
 * Return: -n or n
*/

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else if (n >= 0)
	{
		return (n);
	}

	return (0);
}
