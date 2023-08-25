#include "main.h"

/**
 * print_number - print numbers chars
 * @u: output
 * Return: 0
 */

void print_number(int u)
{
	unsigned int nu;

	nu = u;

	if (u < 0)
	{
		_putchar('-');
		nu = -u;
	}

	if (nu / 10 != 0)
	{
		print_number(nu / 10);
	}
	_putchar((nu % 10) + '0');
}
