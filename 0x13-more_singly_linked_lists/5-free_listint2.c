#include "lists.h"
/**
 * free_listint2 - frees a listint_t
 *
 * @head:pointer to list
 * Return:void
 */

void free_listint2(listint_t **head)
{
listint_t *moving, *t;
moving = *head;
while (moving != NULL)
{
t = moving->next;
free(moving);
moving = t;
}
*head = NULL;
}
