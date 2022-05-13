#include "function_pointers.h"

/**
 * print_name: prints a name
 * @name: name to print
 * @f: function to print name
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *name))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
