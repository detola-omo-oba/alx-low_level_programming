#include "lists.h"

/**
 * add_node - adds a new node
 * @head: pointer to the head
 * @str: string to be added
 * Return: returns the address
 */

list_t *add_node(list_t **head, const char *str)
{
	char *mun;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	mun = strdup(str);
	if (mun == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;

	new->str = mun;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);

}
