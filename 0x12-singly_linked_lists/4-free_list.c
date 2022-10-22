#include "lists.h"

/**
 * free_list - frees malloc memory
 * @head: pointer to list
 */
void free_list(list_t *head)
{
	list_t *temp = head;

	while (head != NULL)
	{
		temp = head;

		free(temp->str);
		free(temp);
		head = head->next;
	}
}
