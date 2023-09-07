#include <stdlib.h>
#include "main.h"
char *_memset(char *s, char b, unsigned int n);
/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of element
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int total_size = nmemb * size;
void *ptr;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
ptr = malloc(total_size);
if (ptr == NULL)
{
return (NULL);
}
_memset(ptr, 0, total_size);
return (ptr);
}
/**
 * _memset - fill memory with a specific value
 * @s: starting address of memory
 * @b: the desired value
 * @n: number of bytes
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
unsigned int j = 0;
while (i < 97 && j < n)
{
s[i] = b;
i++;
j++;
}
return (s);
}
