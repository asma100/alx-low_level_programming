#include "lists.h"
/**
 * print_list - print number of nodes
 *
 * @h:pointer to list
 * Return: number
 */


size_t list_len(const list_t *h)
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
