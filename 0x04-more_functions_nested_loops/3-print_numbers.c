#include "main.h"
/**
 * print_numbers - Prints 0 from 9,
 *
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
int n;
for (n = 0; n < 10; n++)
_putchar(n % 10 + '0');
_putchar('\n');
}
