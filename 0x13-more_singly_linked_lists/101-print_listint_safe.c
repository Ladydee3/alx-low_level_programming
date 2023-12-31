#include "lists.h"
#include <stdio.h>

size_t looped_len(const listint_t *head);
size_t print_list_safe(const listint_t *head);

/**
 * looped_listint_len - counts unique nodes in looped
 * @head: head of a listint_t to check
 *
 * Return: if the list is  not looped - 0.
 * then - the number of unique node in the list
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
	return (0);

	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
	if (tortoise == hare)
	{
	tortoise = head;
	while (tortoise != hare)
	{
	nodes++;
	tortoise = tortoise->next;
	hare = hare->next;
	}

	tortoise = tortoise->next;
	while (tortoise != hare)
	{
	nodes++;
	tortoise = tortoise->next;
	}
	return (nodes);
	}

	tortoise = tortoise->next;
	hare = (hare->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - it safely prints a lintint_t list
 * @head: head of a lintint_t list
 *
 * Return: number of nodes in a list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);
	if (nodes == 0)
	{
	for (; head != NULL; nodes++)
	{
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
	}
	}
	else
	{
	for (index = 0; index < nodes; index++)
	{
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
	}
	printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
