#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
char first = 'a';
char end = 'z';
char alpha = first;
while (alpha <= end)
{
if (alpha != 'e' && alpha != 'q')
putchar(alpha);
alpha++;
}
putchar('\n');
return (0);
}
