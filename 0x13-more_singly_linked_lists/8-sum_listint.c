#include "lists.h"

/**
 * sum_listint - measure the sum of all the data i linked list
 * @head: hed note in the linked list
 *
 * Return: outcome sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp)
	{
	sum += tmp->n;
	tmp = tmp->next;
	}
	return (sum);
}
