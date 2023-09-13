#include "function_pointers.h"

/**
 * print_name -  a function that prints a name.
 *
 * @name: the string with the name
 * @f: pointer to function
 *
 * Return: nothing
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == 0 || f == 0)
		return;
	f(name);
}
