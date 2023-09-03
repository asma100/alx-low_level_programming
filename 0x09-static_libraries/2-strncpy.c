#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;
int j;
i = 0;
j = 0;
while (*(src + j) != '\0' && j < n)
{
*(dest + i) = *(src + j);
j++;
i++;
}
while (j < n)
{
dest[j] = '\0';
j++;
}
return (dest);
}
