#include "lists.h"
/**
 * pop_listint - removes adn get node
 * @head: head of node
 * Return: value of node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int temp2;

	if ((*head) == NULL)
		return (0);
	temp = (*head);
	temp2 = temp->n;
	(*head) = (*head)->next;
	free(temp);
	return (temp2);
}
