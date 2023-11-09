#include "lists.h"
/**
 * get_dnodeint_at_index - get dnodeint at index
 *
 * @index: int
 * @head: pointer
 * Return: value 
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int count = 0;
const dlistint_t *p;
if (head == NULL)
return (NULL);
while (head->prev != NULL)
head = head->prev;
p = head;
while (p != NULL)
{
if (count == index)
return ((dlistint_t *)head);
count += 1;
p = p->next;
head = head->next;
}
return (NULL);
}
