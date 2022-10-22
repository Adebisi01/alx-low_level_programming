#include "lists.h"

/**
 * print_list - prints all element of list_t
 * @h: pointer to list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			i++;
			continue;
		}
		i++;
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
