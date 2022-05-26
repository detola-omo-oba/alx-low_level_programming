#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the head
 * Return: void
 */

void free_listint2(listint_t **head)
{
	if (!head)
		return;

	if (*head)
	{
		free_listint2(&(*head)->next);
		free(*head);
		*head = NULL;
	}
}
