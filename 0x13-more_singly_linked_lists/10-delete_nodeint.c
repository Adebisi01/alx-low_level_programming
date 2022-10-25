#include "lists.h"
/**
 * delete_nodeint_at_index - delete index node
 * @head: start
 * @index: index;
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	if ((*head) == NULL)
		return (-1);
	temp = *head;
	for (i = 0; i <= index; i++)
	{
		if (i == index)
		{
			if (temp == NULL)
				return(-1);
			free(temp);
			return (1);
		}
		temp = temp->next;
	}
	return (1);
}

