#include "lists.h"
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *p = h;
size_t count = 0;
if (h == NULL)
return (count);
while (p != NULL)
{
if (h != NULL)
printf("%d \n", p->n);
count += 1;
p = p->next;
}

return (count);
}
