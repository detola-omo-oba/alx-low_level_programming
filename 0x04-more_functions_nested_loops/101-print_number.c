#include <stdio.h>
#include "main.h"

/**
 * print_number - prints int with putchar
 * @n: takes number, hello
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int m;

	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}

	else
	{
		m = n;
	}

	if (n / 10 != 0)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}
