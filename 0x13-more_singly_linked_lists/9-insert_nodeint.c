#include "lists.h"
/**
 * insert_nodeint_at_index - insert a new node at index
 * @head: start
 * @idx: index
 * @n: n
 * Return: pointer to new node;
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp;
	unsigned int i = 2;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = (*head);
		(*head) = new;
		return (new);
	}
	temp = *head;
	for (i = 2; i <= idx; i++)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
