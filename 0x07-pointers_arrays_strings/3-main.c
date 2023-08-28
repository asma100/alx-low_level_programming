#include "main.h"
/**
 * _strspn - Returns the number of bytes in the initial segment
 * @s:  consist only of bytes from accept
 * @accept: input
 * Return: number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	int n = 0, m = 0;
	unsigned int x = 0;

	while (s[m] != ' ' && s[m] != '\0')
	{
		while (accept[n] != '\0')
		{
			if (s[m] == accept[n])
				x++;
			n++;
		}
		m++;
		n = 0;
	}
	return (x);
}
    
