#include "main.h"

int check_palindrome_recursive(char *start, char *end);
int _strlen_recursion(char *s);
/**
 * is_palindrome - checks if palindrome
 * @s: string to check
 * Return: 1 if palindrome
 */
int is_palindrome(char *s)
{
	char *end;
	int sLength;

	if (!*s)
		return (1);
	sLength = _strlen_recursion(s);
	end = (s + (sLength - 1));
	return (check_palindrome_recursive(s, end));
}
/**
 * check_palindrome_recursive - checks
 * @start: start point
 * @end: last point
 * Return: 1 if palindrome
 */
int check_palindrome_recursive(char *start, char *end)
{
	if (*start != *end)
		return (0);
	if (start > end)
		return (1);
	return (check_palindrome_recursive(start + 1, end - 1));
}
/**
 * _strlen_recursion -gets strlen of s via recursive algorithm
 * @s: string
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
