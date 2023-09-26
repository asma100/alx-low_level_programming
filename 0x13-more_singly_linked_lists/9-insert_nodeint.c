#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @idx:the given position
 * @head:pointer to list
 * @n:the new value
 *Return:void
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *p;
listint_t *new;
listint_t *temp = NULL;
unsigned int i;
if (head == NULL)
{
return (NULL);
}
p = *head;
if (idx == 0)
{
new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = p;
*head = new;
return (new);
}
for (i = 0; i < idx && p != NULL; i++)
{
if (i == idx - 1)
{
temp = p;
}
p = p->next;
}
if (i == idx && temp != NULL)
{
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = p;
temp->next = new;
return (new);
}
return (NULL);
}
