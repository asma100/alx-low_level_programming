#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list.
 *
 * @head:pointer to list
 * Return: listint_t
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *p1, *p2, *p3;
if (head == NULL || *head == NULL)
return (NULL);
p1 = *head;
p2 = p1->next;
p1->next = NULL;
while (p2 != NULL)
{
p3 = p2->next;
p2->next = p1;
p1 = p2;
p2 = p3;
}
*head = p1;
return (*head);
}
