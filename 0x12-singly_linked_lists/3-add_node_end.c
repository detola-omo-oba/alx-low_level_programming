#include "lists.h"

/**
 * add_node_end - adds node at the end
 * @head: pointer to head of list
 * @str: string to be added
 * Return: NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *mun;
	int len;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	mun = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = mun;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head =  new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
