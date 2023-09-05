#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function returns a pointer to a new string
 * @str: new string
 * Return: pointer to new string, NULL if fail
 *
 */
char *_strdup(char *str)
{
int i;
char *m;
int l;
l = _strlen(str);
m = malloc(sizeof(char) * l);
if (m == NULL)
{
return (NULL);
}
i = 0;
while (i < '\0')
{
m[i] = *(str++);
i++;
}
return (m);
}

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
