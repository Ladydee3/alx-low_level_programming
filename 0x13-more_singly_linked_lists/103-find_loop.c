#include "lists.h"

/**
 * find_listint_loop - Find and remove a loop in a linked list (if any).
 * @head: Pointer to the head of the linked list.
 *
 * Return: If there is no loop, return NULL.
 *         If a loop is found, return a pointer to the loop
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow, *fast;

if (head == NULL || head->next == NULL)
return (NULL);

slow = head;
fast = head;

while (fast != NULL && fast->next != NULL)
{
slow = slow->next;
fast = fast->next->next;

if (slow == fast)
{
slow = head;
while (slow != fast)
{
slow = slow->next;
fast = fast->next;
}


while (fast->next != slow)
{
fast = fast->next;
}


fast->next = NULL;

return (slow);
}
}

return (NULL);
}

