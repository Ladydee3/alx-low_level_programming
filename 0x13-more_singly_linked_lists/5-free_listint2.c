#include "lists.h"

/**
 * free_listint2 - free a liked list
 * @head: pointer to the listint_t to be free
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == 0)
	return;

	while (*head)
	{
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	}
	*head = 0;
}
