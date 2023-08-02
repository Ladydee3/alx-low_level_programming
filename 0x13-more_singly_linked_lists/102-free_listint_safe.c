#include "lists.h"

/**
 * main - main point
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t looped_listint_len1(const listint_t *head)
{
    const listint_t *slow, *fast;
    size_t node_count = 0;

    if (head == NULL)
        return (0);

    slow = head;
    fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            do
            {
                node_count++;
                slow = slow->next;
            } while (slow != fast);

            return (node_count);
        }
    }

    return (0);
}

/**
 * free_listint_safe - Frees a listint_t list safely.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t free_listint_safe(listint_t **head)
{
    size_t node_count = 0;
    listint_t *current, *next;

    if (head == NULL || *head == NULL)
        return (0);

    node_count = looped_listint_len(*head);

    current = *head;

    while (node_count > 0)
    {
        next = current->next;
        free(current);
        current = next;
        node_count--;
    }

    *head = NULL;
    return (node_count);
}

