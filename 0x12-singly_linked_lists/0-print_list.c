#include "lists.h"
/**
 * print_list - print list nodes
 *@list_t:the list
 * @h:pointer to list
 * Return: size_t
 */


size_t print_list(const list_t *h){
int count = 0;

const list_t *p = h;
while (p != NULL)
{
count++;
if (p->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d]%s\n", p->len, p->str);
p = p->next;
}
return count;
}
