#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: a string
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
int x = 0;
if (*s == '\0')
return (0);
if (*s != '\0')
{
x++;
x =  x + _strlen_recursion(s + 1);
}
return (x);
}
