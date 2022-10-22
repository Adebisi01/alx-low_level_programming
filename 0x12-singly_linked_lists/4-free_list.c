#include "lists.h"

/**
 * free_list - frees malloc memory
 * @head: pointer to list
 */
void free_list(list_t *head)
{
	list_t *temp;
	temp = head;
	while (head != NULL)
	{
		head = head->next;

		free(temp->str);
		free(temp);
	}
}
