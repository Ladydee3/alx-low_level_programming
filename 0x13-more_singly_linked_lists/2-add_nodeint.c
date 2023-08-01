#include "lists.h"

/**
 * add_nodeint - make a new node  the head of linked list
 * @head: pointer to the head node
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, 0 if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	return (0);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
