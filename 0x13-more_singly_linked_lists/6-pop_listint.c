#include "lists.h"

/**
 * pop_listint - erase the head od alinked list
 * @head: pointer to the head in the linked list
 *
 * Return: the data inside the element that was deleted
 * or NULL if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	if (!head || !*head)
	return (0);

	i = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (i);
}
