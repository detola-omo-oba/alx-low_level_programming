#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - reallocates memory
 * @ptr: pointer
 * @old_size: size of ptr
 * @new_size: size of the new
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *temp, *tempP;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (!ptr)
			return (NULL);
		return (ptr);
	}
	if (!new_size && ptr)
	{
		free(ptr);
		return (NULL);
	}
	temp = malloc(new_size);
	tempP = ptr;
	if (old_size > new_size)
		old_size = new_size;
	for (i = 0; i < old_size; i++)
		temp[i] = tempP[i];
	free(ptr);
	return (temp);
}
