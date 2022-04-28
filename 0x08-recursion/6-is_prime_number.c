#include "main.h"

int prime_checker(int n, int prevCheck);
int _find_sqrt(int prev, int find);
int _sqrt_recursiion(int n);
/**
 * is_prime_number - checks if pn
 * @n: int to check
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_checker(n, _sqrt_recursion(n)));
}
/**
 * prime_checker - checks if n is prime
 * @n: int to use
 * @prevCheck: previous value
 * Return: 1
 */
int prime_checker(int n, int prevCheck)
{
	if (n == prevCheck)
		return (-1);
	if (prevCheck < 2)
		return (1);
	if (n % prevCheck == 0)
		return (0);
	return (prime_checker(n, prevCheck - 1));
}
/**
 * _sqrt_recursion - finds sq
 * @n: int to find
 * Return: sroot
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
 * @find: constant int
 * Return: sr of find
 */
int _find_sqrt(int prev, int find)
{
	if (prev > find)
		return (-1);
	if (prev * prev == find)
		return (prev);
	return (_find_sqrt(prev + 1, find));
}
