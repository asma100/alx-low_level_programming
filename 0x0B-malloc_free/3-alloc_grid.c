#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers.
 * @width: width input
 * @height: height input
 * Return: pointer to new string, NULL if fail
 */
int **alloc_grid(int width, int height)
{
int **p;
int i, j;
if (width <= 0 || height <= 0)
return (NULL);
p = malloc(sizeof(int *) * height);
if (p == NULL)
return (NULL);
i = 0;
while (i < height)
{
p[i] = malloc(sizeof(int) * width);
if (p[i] == NULL)
{
/* free previously allocated memory */
while (i > 0)
{
i--;
free(p[i]);
}
free(p);
return (NULL);
}
j = 0;
while (j < width)
{
p[i][j] = 0;
j++;
}
i++;
}
return (p);
}
