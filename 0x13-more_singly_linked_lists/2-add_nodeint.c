#include "lists.h"

/**
 * add_nodeint - adds a new node
 * @head: pointer to address of head
 * @n: integer for new node
 * Return: NULL or address
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
