#include "lists.h"
/**
 * listint_len - print list lenght
 *
 * @h:pointer to list
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
size_t count = 0;
const listint_t *p;
p = h;
while (p != NULL)
{
count++;
p = p->next;
}
return (count);
}
