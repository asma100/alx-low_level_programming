#include "main.h"
/**
 * print_times_table - Prints the times table of the input,
 *                     starting with 0.
 * @n: The value of the times table to be printed.
 */
void print_times_table (int n)
{

if (0 <= n && n <= 15){

int num, mult, prod;
for (num = 0; num <= n; num++)
{
_putchar('0');
for (mult = 1; mult <= n; mult++)
{
_putchar(',');
_putchar(' ');
prod = num * mult;
if (prod <= n)
_putchar(' ');
else
_putchar((prod / 10) + '0');
_putchar((prod % 10) + '0');
}
_putchar('\n');
}
}
}
