#include "function_pointers.h"

/**
 * int_index - gets the index of an array
 * @array: array to search through
 * @size: size of array
 * @cmp: comparison function
 * Return: integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
