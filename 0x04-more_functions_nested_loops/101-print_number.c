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
	unsigned int n;

	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}

	else
	{
		m = n;
	}

	if (m / 10 != 0)
		print_number(m / 10);
	_putchar((n % 10) + '0');
}
