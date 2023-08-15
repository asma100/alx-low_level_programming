#include "main.h"
/**
 *_abs - Computes the absolute value of an integer
 *@c:  computed number 
 *Return: Absolute value or 0
 */
 
int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
	{
		last = last * -1;
	}

	_putchar(last + '0');

	return (last);
}
