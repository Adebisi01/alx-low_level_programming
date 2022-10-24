#include "lists.h"
/**
 * free_listint -  free node space
 * @head: beggining
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (head != NULL)
	{
		temp = head;

		free(temp);
		head = head->next;
	}
}
