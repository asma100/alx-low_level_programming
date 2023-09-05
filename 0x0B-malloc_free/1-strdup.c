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
if (str == NULL)
{
return (NULL);
}
l = _strlen(str);
m = malloc(sizeof(char) * (l + 1));
if (m == NULL)
{
return (NULL);
}
i = 0;
while (str[i])
{
m[i] = str[i];
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
