#include <unistd.h>

/**
 * _putchar - to print a character
 * @parameter c: character to be printed
 *
 * Return: written character
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
