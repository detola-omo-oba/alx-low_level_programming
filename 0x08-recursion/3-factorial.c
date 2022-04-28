#include "main.h"
/**
 * factorial - returns factorial
 * @n: int parameter to return
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
