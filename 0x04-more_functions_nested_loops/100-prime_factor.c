#include <stdio.h>
/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
long num = 612852475143;
long factor = 2;
while (num > 1)
{
if (num % factor == 0)
{
num /= factor;
}
else
{
factor++;
}
}
printf("%ld\n", factor);
return (0);
}
