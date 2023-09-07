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
	char *ptr2;
	char *ptr1;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr2 = malloc(new_size);
	if (!ptr2)
		return (NULL);

	ptr1 = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			ptr2[i] = ptr2[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			ptr2[i] = ptr1[i];
	}

	free(ptr);
	return (ptr2);
}
