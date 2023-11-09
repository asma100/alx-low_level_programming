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
unsigned int count = 0;
dlistint_t *new;
dlistint_t *p;
dlistint_t *head = *h;
if (head == NULL && idx > 0)
return (NULL);
while (head != NULL && head->prev != NULL)
head = head->prev;
p = head;
while (p != NULL)
{
if (count == idx)
{        
new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
dprintf(2, "Error: Can't malloc\n");
return (NULL);
}
new->n = n;
if (idx == 0)
{
new->next = head;
new->prev = NULL;
if (head != NULL)
head->prev = new;
*h = new;
}
else
{
new->next = p;
new->prev = p->prev;
if (p->prev != NULL)
p->prev->next = new;
p->prev = new;
}
return (new);
}
count += 1;
p = p->next;
head = head->next;
}
if (idx == count)
{
return add_dnodeint_end(h, n);
}
return (NULL);
}
