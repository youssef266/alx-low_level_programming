#include "main.h"
#include <string.h>

/**
 * infinite_add - a function that adds two numbers.
 * @n1: first number
 * @n2: secound number
 * @r: result
 * @size_r: result lenght
 *
 * Return: sum
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int max_len = len1 > len2 ? len1 : len2;
	int i, j, k;

	if (max_len + 1 > size_r)
	{
		return (0);
	}

	r[max_len + 1] = '\0';

	for (i = len1 - 1, j = len2 - 1, k = max_len; k >= 0; i--, j--, k--)
	{
		int digit1 = (i >= 0) ? n1[i] - '0' : 0;
		int digit2 = (j >= 0) ? n2[j] - '0' : 0;

		int sum = digit1 + digit2 + carry;

		carry = sum / 10;
		r[k] = (sum % 10) + '0';
	}

	if (carry > 0)
	{

		if (max_len + 2 > size_r)
		{
			return (0);
		}
		memmove(r + 1, r, max_len + 1);
		r[0] = carry + '0';
	}

	return (r);
}
