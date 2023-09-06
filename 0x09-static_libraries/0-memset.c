#include "main.h"
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
