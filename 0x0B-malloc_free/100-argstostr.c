#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: int input
 * @av: double pointer array
 * Return: new string
 */
char *argstostr(int ac, char **av)
{
int g, h, j = 0, k = 0;
char *str;
if (ac == 0 || av == NULL)
return (NULL);
for (g = 0; g < ac; g++)
{
for (h = 0; av[g][h]; h++)
k++;
}
k = k + ac;
str = malloc(sizeof(char) * k + 1);
if (str == NULL)
return (NULL);
for (g = 0; g < ac; g++)
{
for (h = 0; av[g][h]; h++)
{
str[j] = av[g][h];
j++;
}
if (str[j] == '\0')
{
str[j++] = '\n';
}
}
return (str);
}
