#include "lists.h"

/**
 * listint_len - prints items in integers
 * @h: list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
