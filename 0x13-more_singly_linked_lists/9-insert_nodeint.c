#include "lists.h"

/**
 * _listint_len - returns the number of elements
 * @h: linked list type
 * Return: the number of nodes
 */

size_t _listint_len(const listint_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}

/**
 * insert_nodeint_at_index - inserts a new node
 * @head: pointer to a pointer
 * @idx: index to linked list
 * @n: number to linked list
 * Return: node by index
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *node = *head, *newNode;

	if (!head || idx > _listint_len(*head))
		return (NULL);

	if (!idx)
	{
		newNode = malloc(sizeof(listint_t));
		if (!newNode)
			return (NULL);
		newNode->next = *head;
		newNode->n = n;
		*head = newNode;
		return (newNode);
	}

	while (node)
	{
		if (i == (idx - 1))
		{
			newNode = malloc(sizeof(listint_t));
			if (!newNode)
				return (NULL);

			newNode->n = n;
			newNode->next = node->next;
			node->next = newNode;
			return (newNode);
		}
		node = node->next;
		i++;
	}
	return (NULL);
}
