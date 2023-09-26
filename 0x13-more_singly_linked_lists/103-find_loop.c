#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the head of the list
 *
 * Return: address of the node where the loop starts, or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *tortoise, *hare;
if (head == NULL)
return (NULL);
tortoise = hare = head;
while (hare != NULL && hare->next != NULL)
{
tortoise = tortoise->next;
hare = hare->next->next;
if (tortoise == hare)
break;
}
if (hare == NULL || hare->next == NULL)
return (NULL);
tortoise = head;
while (tortoise != hare)
{
tortoise = tortoise->next;
hare = hare->next;
}
return (tortoise);
}
