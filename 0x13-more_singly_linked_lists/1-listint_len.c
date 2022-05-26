#include "lists.h"

/**
 * listint_len - returns no of elements
 * @h: pointer to head of the list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
