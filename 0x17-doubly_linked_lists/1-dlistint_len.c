#include "lists.h"
/**
 * dlistint_len - prints num
 * dlistint_t list
 *
 * @h: pointer
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
int  count = 0;
const dlistint_t *p;
if (h == NULL)
return (count);

while (h->prev != NULL)
                h = h->prev;
p = h;
while (p != NULL)
{
if (h != NULL)
count += 1;
p = p->next;
}

return (count);
}
