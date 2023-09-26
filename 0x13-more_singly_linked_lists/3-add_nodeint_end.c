#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the beginning
 * @n:int
 * @head:pointer to list
 * Return: listint_t
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (new == NULL)
{
printf("Error\n");
return (NULL);
}
new->n = n;
new->next = NULL;
if (*head == NULL)
{
*head = new;
}
else
{
listint_t *p = *head;
while (p->next != NULL)
{
p = p->next;
}
p->next = new;
}
return (*head);
}
