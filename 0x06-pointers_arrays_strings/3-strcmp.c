#include "main.h"
/**
 * _strcmp - compare string values
 * @s1: input value
 * @s2: input value
 *
 * Return: s1[i] - s2[i]
 */

int _strcmp(char *s1, char *s2)
{
int i;
int j;
i = 0;
j = 0;
while ((s1[i] && s2[j]) != '\0')
{
if (i == j)
{
return (0);
}
else
{
return (s1[i] - s2[j]);
}

i++;
j++;
}
}
