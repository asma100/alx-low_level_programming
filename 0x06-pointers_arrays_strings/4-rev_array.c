#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
int j;
int i;
int x;
j = n;
for (i = 0;i < j;i++)
{
j--;
x = a[i];
a[i] = a[j];
a[j] = x;
}
}
