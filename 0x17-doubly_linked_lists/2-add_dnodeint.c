#include "lists.h"
/**
 * add_dnodeint - add nodeint
 * dlistint_t list
 * @n: int 
 * @head: pointer
 * Return: number of nodes
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;
if (*head == NULL)
{
*head = malloc(sizeof(dlistint_t));
if (*head == NULL)
{
dprintf(2, "Error: Can't malloc\n");
return NULL;
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
return NULL; 
}
new->n = n;
(*head)->prev = new;
new->next = *head;
new->prev = NULL;
*head = new;
}
return *head;
}
