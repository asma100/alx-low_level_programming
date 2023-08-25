#include "main.h"
/**
 * cap_string - change lowercase to uppercase if needed
 * @u: upper output
 *
 * Return: u
 */


char *cap_string(char *u)
{
int i;
i = 0;
while (u[i] != '\0')
{
while (!(u[i] >= 'a' && u[i] <= 'z'))
i++;
if (u[i - 1] == ' ' || u[i - 1] == '\t' ||
u[i - 1] == '\n' || u[i - 1] == ',' ||
u[i - 1] == ';' || u[i - 1] == '.' ||
u[i - 1] == '!' || u[i - 1] == '?' ||
u[i - 1] == '"' || u[i - 1] == '(' ||
u[i - 1] == ')' || u[i - 1] == '{' ||
u[i - 1] == '}' || i == 0)
u[i] = u[i] - 32;
i++;
}
return (u);
}
