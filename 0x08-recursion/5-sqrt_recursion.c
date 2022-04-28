#include "main.h"

int _find_sqrt(int prev, int find);
/**
 * _sqrt_recursion - finds square root
 * @n: int to find sr
 * Return: sqroot
 */

int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (_find_sqrt(1, n));
}
/**
 * _find_sqrt - finds sr
 * @prev: previous result
 * @find: constant int to find
 * Return: square rootto find
 */

int _find_sqrt(int prev, int find)
{
	if (prev > find)
		return (-1);
	if (prev * prev == find)
		return (prev);
	return (_find_sqrt(prev + 1, find));
}
