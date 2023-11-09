#include "lists.h"
/**
 * sum_dlistint - free nodeint
 *
 *
 * @head: pointer
 * Return: int sum
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *temp;
while (head != NULL)
{
sum = sum +(head->n);
head = head->prev;

}
return (sum);
}
