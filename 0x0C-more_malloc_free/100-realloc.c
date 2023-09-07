#include <stdlib.h>
#include "main.h"
char *_memcpy(char *dest, char *src, unsigned int n);
/**
 * *_realloc - reallocates a memory block
 * @ptr: pointer
 * @old_size:old size
 * @new_size: new size
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr = malloc(new_size);
if (ptr == NULL)
{
return (malloc(new_size));
}
if (new_size == 0)
{
free(ptr);
return (NULL);
}
if (new_size == old_size)
{
return (ptr);
}

if (new_ptr == NULL)
{
return (NULL);
}
_memcpy(new_ptr, ptr, old_size < new_size ? old_size : new_size);
free(ptr);
return (new_ptr);
}
/**
 *_memcpy -  copies memory area
 *@dest:  stored here
 *@src: copied here
 *@n: number of bytes
 *
 *Return:dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int j = 0;
while (j < n)
{
dest[j] = src[j];
j++;
}
return (dest);
}
