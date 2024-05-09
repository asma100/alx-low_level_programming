#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * binary_search -  search
 * @array:array
 * @size:size
 * @value: value
 *
 * Return: index , -1
 */

int binary_search(int *array, size_t size, int value)
{
size_t low;
size_t high;
size_t c;
if (array == NULL || size == 0)
{
return (-1);
}
low = 0;
high = size - 1;
while (low <= high)
{
c = low + (high - low) / 2;
if (array[c] == value)
{
return (c);
}
else if (array[c] < value)
{
low = c + 1;
}
else
{
high = c - 1;
}
}
return (-1);
}
