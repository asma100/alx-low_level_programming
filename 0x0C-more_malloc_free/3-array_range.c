#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum  values
 * @max: maximum  values
 *
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
int i;
int *ptr;


if  (min > max)
{
return (NULL);
}
ptr = malloc((max - min + 1) * sizeof(int));
if (ptr == NULL)
{
return (NULL);
}
for (i = min; i <= max; i++)
ptr[i - min] = i;
return (ptr);
}
