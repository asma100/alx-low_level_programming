#include "main.h"

/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */

void print_rev(char *s)
{
while (*s != 0)
{

	int l = 0;
	int m;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	s--;
	for (m = l; m > 0; m--)
	{
		putchar(*s);
		s--;
	}

	putchar('\n');
}
}
