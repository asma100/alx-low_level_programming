#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @u: upper output
 *
 * Return: u
 */


char *string_toupper(char *u)
{
int i;
i = 0;
while (u[i] != '\0')
{
if (u[i] >= 'a' && u[i] <= 'z')
u[i] = u[i] - 32;
i++;
}
return (u);
}
