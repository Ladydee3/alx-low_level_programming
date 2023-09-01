#include "lists.h"

/**
 * add_nodeint_end - make a node at the end of  linked list
 * @head: head of the first element in the list
 * @n: data to include in the new element
 *
 * Return: pointer to the new new node, or 0 if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	return (0);

	new_node->n = n;
	new_node->next = 0;

	if (*head == 0)
	{
	*head = new_node;
	return (new_node);
	}

	while (temp->next)
	temp = temp->next;

	temp->next = new_node;

	return (new_node);
}
