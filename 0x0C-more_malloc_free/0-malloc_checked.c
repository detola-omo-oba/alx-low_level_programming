#include <stdlib.h>
/**
 * malloc_checked - performs a malloc
 * @b: number of bytes
 * Return: pointer to beginning
 */

void *malloc_checked(unsigned int b)
{
	void *ret;

	ret = malloc(b);
	if (ret == NULL)
		exit(98);
	return (ret);
}
