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
m = malloc(sizeof(char) * 6);
if (m == NULL)
{
return (NULL);
}
i = 0;
while (i < 6)
{
m[i] = *(str++);
i++;
}
return (m);
}
