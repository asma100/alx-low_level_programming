#include "lists.h"
/**
 * add_dnodeint_end - add nodeint
 * dlistint_t list
 * @n: int
 * @head: pointer
 * Return: number of nodes
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new;
if (*head == NULL)
{
*head = malloc(sizeof(dlistint_t));
if (*head == NULL)
{
dprintf(2, "Error: Can't malloc\n");
return (NULL);
}
(*head)->n = n;
(*head)->prev = NULL;
(*head)->next = NULL;
}
else
{
new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
dprintf(2, "Error: Can't malloc\n");
return (NULL);
}
new->n = n;
(*head)->next = new;
new->next = NULL;
new->prev = *head;
*head = new;
}
return (*head);
}
