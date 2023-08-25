#include "main.h"
/**
 * leet - change vowels to numbers.
 * @u: analized string.
 *
 * Return: String with all vowels changed.
 */
char *leet(char *u)
{
	char x[] = "aeotlAEOTL";
	char y[] = "4307143071";
	int i = 0;
	int j;

	while (u[i] != '\0')
	{
		for (j = 0; j <= 9; j++)
		{
			if (u[i] == x[j])
			{
				u[i] = y[j];
			}
		}
		i++;
	}
	return (u);
}
