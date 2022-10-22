#include "lists.h"

/**
 * free_list - frees malloc memory
 * @head: pointer to list
 */
void free_list(list_t *head)
{
	free(head->str);
	free(head->len);
	free(head->next);
}
