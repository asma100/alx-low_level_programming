#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @index:index of the node
 * @head:pointer to list
 * Return:listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *p;
unsigned int i;
p = head;
for (i = 0; i < index; i++)
p = p->next;
if (p != NULL)
{
return (p);
}
else
{
return (NULL);
}
}
