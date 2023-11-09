#include "lists.h"
/**
 * free_dlistint - free nodeint
 *
 *
 * @head: pointer
 * Return: none
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;
while (head != NULL)
{
temp = head;
head = head->next;
free(temp);
}
}
