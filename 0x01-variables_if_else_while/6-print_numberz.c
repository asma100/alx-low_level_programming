#include <stdio.h>

/**
 * main - Prints 0 from 9,
 *
 *
 * Return: Always 0.
 */
int main(void)
{
  int n;
  for (n = 0; n < 10; n++)
    putchar(n + '0');
  putchar('\n');
  return (0);
}
