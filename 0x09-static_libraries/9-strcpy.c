#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the stream pointed to by srt
 * @src: A pointer to a char that will be changed
 * @dest: A pointer to a character that will be changed
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{

	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);

}
