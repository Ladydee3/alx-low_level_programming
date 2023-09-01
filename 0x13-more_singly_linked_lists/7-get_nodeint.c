#include "lists.h"

/**
 * get_nodeint_at_index - the return of some index in linked list
 * @head: head in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node we searching for, or 0
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num = 0;
	listint_t *tmp = head;

	while (tmp && num < index)
	{
	tmp = tmp->next;
	num++;
	}

	return (tmp ? tmp : 0);
}
