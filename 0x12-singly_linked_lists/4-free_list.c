#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees linked list
 * @head: list_t list to be freed
 *Return : void
 */
void free_list(list_t *head)
{
list_t *current, *temp;
current = head;
while (current != NULL)
{
temp = current->next;
free(current->str);
free(current);
current = temp;
}
}
