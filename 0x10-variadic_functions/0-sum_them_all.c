#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - sums all its parameters
 * @n: first parameter
 * @...: rest of arguments
 * Return: 0 if n is null
 */

int sum_them_all(const unsigned int n, ...)
{

	va_list args;
	int sum = 0;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);
	return (sum);

}
