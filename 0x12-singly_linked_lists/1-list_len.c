#include "lists.h"

/**
 * list_len - list len of linked elements
 * @h: pointer to list
 * Return: size of list
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h->next != NULL)
	{
		i++;
	}
	return (i);
}
