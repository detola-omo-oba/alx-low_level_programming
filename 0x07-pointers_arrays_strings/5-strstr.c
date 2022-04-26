#include "main.h"

/**
 * _strstr - function that locates substring
 * @haystack: string to search
 * @needle: substring to find
 * Return: pointer to start
 */

char *_strstr(char *haystack, char *needle)
{
	char *occur, *temp;

	if (!*needle)
		return (haystack);
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			occur = haystack;
			temp = needle;
			while (*temp)
			{
				if (*haystack++ != *temp++)
				{
					haystack = occur;
					break;
				}
			}
			if (occur != haystack)
				return (occur);
		}
		haystack++;
	}
	return (0);
}
