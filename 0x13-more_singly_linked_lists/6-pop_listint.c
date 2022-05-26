#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: head of the list
 * Return: deleted node data
 */

int pop_listint(listint_t **head)
{
	listint_t *new;
	int new_n;

	if (!*head)
		return (0);
	new_n = (*head)->n;
	new = (*head)->next;
	free(*head);
	*head = new;
	return (new_n);
}
