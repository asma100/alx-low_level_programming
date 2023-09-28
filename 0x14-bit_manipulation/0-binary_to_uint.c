#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 * @b:binary num
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int n = 0;
unsigned int i;
unsigned int len = _strlen(b);
for (i = 0; i < len; i++)
{
if (b[i] == '1')
{
n += 1 << (len - i - 1);
}
else if (b[i] != '0')
{
return (0);
}
}
return (n);
}
/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen ( const  char *s)
{
int cou = 0;
while (*s != '\0')
{
s++;
cou++;
}
return (cou);
}
