#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_palindrome_helper - function that help
 * @s: char string
 * @start: start
 * @end: end
 *
 * Return: 0 or 1
*/

int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}

	if (s[start] != s[end])
	{
		return (0);
	}
	return (is_palindrome_helper(s, start + 1, end - 1));
}
/**
 * is_palindrome - a function that returns 1 if a string
 * is a palindrome and 0 if not.
 * @s: string
 *
 * Return: length
*/
int is_palindrome(char *s)
{
	int length = strlen(s);

	if (length == 0)
	{
		return (1);
	}

	return (is_palindrome_helper(s, 0, length - 1));
}
