#include "main.h"
/**
 * _strchr -  locates a character in a string.
 * @s: String
 * @c: character
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
int j;

for (j = 0; s[j] >= '\0'; j++)
{
if (s[j] == c)
return (&s[j]);
}
return (0);
}
