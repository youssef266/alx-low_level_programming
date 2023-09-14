#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - a function that returns the sum
 * of all its parameters.
 *
 * @n: the paramters passed
 * @...: the variable calculate the sum
 *
 * Return: if n == 0 , 0
 *	else - the sum of parameters
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list ad;
	unsigned int b, sum = 0;

	va_start(ad, n);

	for (b = 0; b < n; b++)
		sum += va_arg(ad, int);

	va_end(ad);

	return (sum);

}
