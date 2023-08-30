#include "main.h"
#include <stdbool.h>
/**
 * wildcmp_helper - function that helps
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 or 0
*/

bool wildcmp_helper(char *s1, char *s2)
{

	if (*s1 == '\0' && *s2 == '\0')
	{
		return (false);
	}

	if (*s1 == *s2 || *s2 == '*')
	{
		return (wildcmp_helper(s1 + 1, s2 + 1));
	}
	if (*s2 == '*')
	{
		return (wildcmp_helper(s1 + 1, s2) || wildcmp_helper(s1, s2 + 1));
	}

	return (true);
}

/**
 * wildcmp - a function that compares two strings and returns 1
 * if the strings can be considered identical, otherwise return 0.
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 or 0
*/

int wildcmp(char *s1, char *s2)
{
	return (wildcmp_helper(s1, s2) ? 1 : 0);
}
