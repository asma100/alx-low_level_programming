#include "lists.h"
/**
 * delete_nodeint_at_index - delete at a given position.
 * @index:the given position
 * @head:pointer to list
 * Return:void
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current, *prev;
unsigned int i;
if (head == NULL || *head == NULL)
return (-1);
if (index == 0)
{
current = *head;
*head = current->next;
free(current);
return (1);
}
prev = *head;
current = prev->next;
for (i = 1; current != NULL && i < index; i++)
{
prev = current;
current = current->next;
}
if (current == NULL)
return (-1);
prev->next = current->next;
free(current);
return (1);
}
