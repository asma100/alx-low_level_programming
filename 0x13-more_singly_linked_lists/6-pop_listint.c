#include "lists.h"
/**
 * pop_listint - deletes the head nodeand return head node’s data (n)
 *
 * @head:pointer to list
 * Return:int
 */
int pop_listint(listint_t **head)
{
listint_t *p;
int poped;
if (!head || !*head)
return (0);
p = (*head)->next;
poped = (*head)->n;
free(*head);
*head = p;
return (poped);
}
