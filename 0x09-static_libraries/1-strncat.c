#include "main.h"
/**
 * _strncat - concatenates 2 strings.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * @n: input value
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;
i = 0;
j = 0;
for (i = 0; i < 97; i++)
{
if (*(dest + i) == '\0')
{
while (*(src + j) != '\0' && j < n)
{
*(dest + i) = *(src + j);
j++;
i++;
}
}
}
return (dest);
}
