#include "main.h"
/**
 * _strcat - concatenates 2 strings.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
int i;
int j;
i = 0;
j = 0;
for (i = 0; i < 97; i++)
{
if (*(dest + i) == '\0')
{
while (*(src + j) != '\0')
{
*(dest + i) = *(src + j);
j++;
i++;
}
*(src + j) = '\0';
}
}
return (dest);
}
