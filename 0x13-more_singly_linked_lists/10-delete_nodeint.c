#include "lists.h"

/**
 * delete_nodeint_at_index - erase a node in a linked list
 * @head: pointerto the head element in a list
 * @index: index of the node tp erase
 *
 * Return: 1(Success), or -1 (fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *current = NULL;
	unsigned int num = 0;

	if (*head == NULL)
	return (-1);

	if (index == 0)
	{
	*head = (*head)->next;
	free(tmp);
	return (1);
	}

	while (num < index - 1)
	{
	if (!tmp || !(tmp->next))
	return (-1);
	tmp = tmp->next;
	num++;
	}

	current = tmp->next;
	tmp->next = current->next;
	free(current);

	return (1);
}
