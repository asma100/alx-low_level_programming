#include "main.h"
/**
 * _strpbrk -  searches a string for any of a set of bytes
 *@s: first string
 *@accept: second string
 *
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	int m = 0;

	while (*s)
	{
		while (accept[m] != '\0')
		{
			if (*s == accept[m])
				return (s);
			m++;
		}
		m = 0;
		s++;
	}
	return ('\0');
}
