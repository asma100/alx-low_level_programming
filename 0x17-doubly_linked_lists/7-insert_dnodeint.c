#include "lists.h"

/**
 * insert_dnodeint_at_index - get dnodeint at index
 * @n: int
 * @idx: int
 * @h: pointer
 * Return: value
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *temp = *h;
unsigned int i = 0;
if (temp == NULL && idx > 0)
return (NULL);
while (temp != NULL && temp->prev != NULL)
temp = temp->prev;
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
if (idx == 0)
{
new_node->next = temp;
new_node->prev = NULL;
if (temp != NULL)
temp->prev = new_node;
*h = new_node;
return (new_node);
}
for (i = 0; i < idx - 1; i++)
{
if (temp == NULL)
{
free(new_node);
return (NULL);
}
temp = temp->next;
}
if (temp->next == NULL)
{
free(new_node);
return (add_dnodeint_end(h, n));
}
new_node->next = temp->next;
new_node->prev = temp;
temp->next->prev = new_node;
temp->next = new_node;
return (new_node);
}
