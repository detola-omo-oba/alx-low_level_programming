#include "main.h"

/**
 * _strspn - finds length if prefix
 * @s: string to check
 * @accept: substring
 * Return: n bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int con = 0;
	int pre;

	while (*s)
	{
		i = 0;
		pre = con;
		while (*(accept + i) != '\0')
		{
			if (*(accept + i) == *s)
				con++;
			i++;
		}
		if (pre == con)
			break;
		s++;
	}
	return (con);
}
