#include "main.h"

/**
 * _strpbrk - search string for set of bytes
 * @s: string to check
 * @accept: substring
 * Return: pointer to first occurence
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		i = 0;
		while (*(accept + i) != '\0')
		{
			if (*(accept + i) == *s)
				return (s);
			i++;
		}
		s++;
	}
	return (0);
}
