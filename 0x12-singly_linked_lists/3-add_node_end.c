#include "lists.h"

/**
 * add_node_end - adds node at the end
 * @head: pointer to head of list
 * @str: string to be added
 * Return: NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = NULL, *temp = NULL;
	int len = 0;

	temp = *head;
	if (temp)
	{
		while (temp->next)
		{
			temp = temp->next;
		}
	}
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	while (str[len])
		len++;
	new_node->len = len;
	if (str)
	{
		new_node->str = strdup(str);
		if (!new_node->str)
		{
			free(new_node);
			return (NULL);
		}
	}
	else
		new_node->str = NULL;
	if (temp)
		temp->next = new_node;
	else
		*head = new_node;
	return (new_node);
}
