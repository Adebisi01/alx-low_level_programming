#include "lists.h"
/**
 * get_nodeint_at_index - get nth node
 * @head: beginning
 * @index: nth
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	while (head != NULL)

		if (i == index)
		{
			if (head == NULL)
				return (NULL);
			temp = head;
		}
		i++;
		head = head->next;
	}
	return (temp);
}
