
#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @u: output
 *
 * Return: u
 */

char *rot13(char *u)
{
	int i;
	int j;
	char x[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char y[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; u[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (u[i] == x[j])
			{
				u[i] = y[j];
				break;
			}
		}
	}
	return (u);
}
