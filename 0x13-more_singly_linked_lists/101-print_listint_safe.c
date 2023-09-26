#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list safely
 * @head: pointer to the head of the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *t = head, *h = head;
size_t count = 0, i;
while (h && h->next)
{
t = t->next;
h = h->next->next;
if (t == h)
{
t = head;
for (i = 0; t != h; i++)
{
t = t->next;
h = h->next;
}
count += i + 1;
break;
}
count++;
}
t = head;
for (i = 0; i < count; i++)
{
printf("[%p] %d\n", (void *)t, t->n);
t = t->next;
}
if (h && h->next)
printf("-> [%p] %d\n", (void *)h, h->n);
return (count);
}
