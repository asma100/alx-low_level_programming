#include "main.h"
/**
 * print_times_table - Prints the times table,
 *
 * @n: The value of the times table to be printed.
 */
void print_times_table (int n)
{
	int a, s, m;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (s = 0; s <= n; s++)
			{
				m = s * a;
				if (s == 0)
				{
					_putchar(m + '0');
				}
				else if (m < 10 && s != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(m + '0');
				} else if (m >= 10 && m < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((m / 10) + '0');
					_putchar((m % 10) + '0');
				} else if (m >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((m / 100) + '0');
					_putchar(((m / 10) % 10) + '0');
					_putchar((m % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}

