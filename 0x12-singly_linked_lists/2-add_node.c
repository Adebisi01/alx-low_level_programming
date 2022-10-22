#include "lists.h"

/**
 * add_node - add node at the beginning of linked list
 * @head: head of linked list
 * @str: string of linked list
 * Return: pointer to first node;
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->next = *head;
	new->str = strdup(str);
	new->len = strlen(new->str);
	(*head) = new;
	return (*head);
}

