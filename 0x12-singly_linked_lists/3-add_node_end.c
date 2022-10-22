#include "lists.h"

/**
 * add_node_end - add node at the end of linked list
 * @head: head of linked list
 *
 * @str: string of linked list
 * Return: pointer to first node;
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->str = strdup(str);
	new->len = strlen(new->str);
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (last->next != NULL)
		last = last->next;
	(last->next) = new;
	return (new);
}
