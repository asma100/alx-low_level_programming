#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: string 1
 * @s2:string 2
 * Return: pointer to new string, NULL if fail
 */
char *str_concat(char *s1, char *s2)
{
int i = 0;
int j = 0;
char *m;
int l1, l2;
if (s1 == NULL && s2 == NULL)
return (NULL);
if (s1 != NULL)
l1 = _strlen(s1);
if (s2 != NULL)
l2 = _strlen(s2);
m = malloc(sizeof(char) * (l1 + l2 + 1));
if (m == NULL)
return (NULL);
if (s1 == NULL && s2 != NULL)
while (s2[i])
{
m[i] = s2[i];
i++;
}
else if (s1 != NULL && s2 == NULL)
{
while (s1[j])
{
m[i] = s1[i];
i++;
}
}
else
{
while (s1[j])
{
m[i] = s1[j];
i++;
j++;
}
j = 0;
while (s2[j])
{
m[i] = s2[j];
i++;
j++;
}
}
m[i] = '\0';
return (m);
}
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
