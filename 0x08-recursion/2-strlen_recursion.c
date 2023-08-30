#include "main.h"
/**
 *  _strlen_recursion - the length of a string
 * @s: a string
 * Return : length
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
