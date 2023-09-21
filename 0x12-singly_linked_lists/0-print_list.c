#include "lists.h"
/**
 * print_list - print list nodes
 *
 * @h:pointer to list
 * Return: size_t
 */


size_t print_list(const list_t *h)
{
int count = 0;
while (h != NULL)
{
count++;
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d]%s\n", h->len, h->str);
h = h->next;
}
return (count);
}
