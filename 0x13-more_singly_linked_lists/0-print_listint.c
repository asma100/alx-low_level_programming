#include "lists.h"
/**
 * print_listint - print list nodes
 *
 * @h:pointer to list
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
size_t count = 0;
const listint_t *p;
p = h;
while (p != NULL)
{
count++;
printf("%d\n", p->n);
p = p->next;
}
return (count);
}
