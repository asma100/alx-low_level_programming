#include "lists.h"
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *p = h;
size_t count = 0;

while (p != NULL)
{
if (p->n)
printf("%d \n", p->n);
else
printf("[0] (nil)\n");
count += 1;
p = p->next;
}

return (count);
}
