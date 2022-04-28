#include "main.h"
/**
 * _print_rev_recursion - puts a string to reverse
 * @s: string to reverse
 * Return: Always void
 */

void _print_rev_recursion(char *s)
{
	if (!*s)
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
