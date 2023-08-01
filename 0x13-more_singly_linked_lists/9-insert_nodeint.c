#include "lists.h"

/**
 * insert_nodeint_at_index - adds a new node i a linked list
 * @head: head node in the list
 * @idx: point where new node is added
 * @n: data to add in the new node
 *
 * Return: pointer to the newbnode or 0
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int num;
	listint_t *new_node;
	listint_t *tmp = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
	return (NULL);

	new_node->n = n;
	new_node->next = 0;

	if (idx == 0)
	{
	new_node->next = *head;
	*head = new_node;
	return (new_node);
	}

	for (num = 0; tmp && num < idx; num++)
	{
	if (num == idx - 1)
	{
	new_node->next = tmp->next;
	tmp->next = new_node;
	return (new_node);
	}
	else
	tmp = tmp->next;
	}

	return (NULL);
}

