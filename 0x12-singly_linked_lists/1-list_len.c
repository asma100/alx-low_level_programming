#include "lists.h"
#include <stdlib.h>
/**
 * list_len - print number of nodes
 *
 * @h:pointer to list
 * Return: number
 */


size_t list_len(const list_t *h)
{
    size_t count = 0;
    const list_t *current = h;

    while (current != NULL)
    {
        count++;
        current = current->next;
    }

    return count;
}
