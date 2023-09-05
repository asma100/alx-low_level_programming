#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 * @size: size of array
 * @c: char
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *m;
m = malloc((size) * sizeof(char));
if (size == 0 || m == NULL)
return (NULL);
i = 0;
while (i < size)
{
m[i] = c;
i++;
}
return (m);
}
