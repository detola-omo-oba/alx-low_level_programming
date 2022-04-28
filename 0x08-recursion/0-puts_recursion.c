#include "main.h"
/**
 * _puts_recursion - puts a string to recursion
 * @s: string to put
 * Return: Always void
 */

void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
