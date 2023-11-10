#include "lists.h"
11;rgb:0000/0000/0000
/**
 * delete_dnodeint_at_index - get dnodeint at index
 *
 * @index: int
 * @head: pointer
 * Return: value
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current = *head;
unsigned int i;
if (*head == NULL)
return (-1);
while (current != NULL && current->prev != NULL)
current = current->prev;
i = 0;
while (current != NULL)
{
if (i == index)
{
if (i == 0)
{
*head = current->next;
if (current->next != NULL)
current->next->prev = NULL;
}
else
{
current->prev->next = current->next;
if (current->next != NULL)
current->next->prev = current->prev;
}
free(current);
return (1);
}
current = current->next;
i++;
}
return (-1);
}
