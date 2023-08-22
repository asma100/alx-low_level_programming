#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
int cou = 0;
while (*s != '\0')
{
s++;
cou++;
}
return (cou);
}
