#include "main.h"

/**
 * main - print _putchar
 * is written by mbah
 * Return: 0
 */

void print_alphabet(void)
{
char first = 'a';
char end = 'z' ;
char alpha = first ;
while(alpha <= end)
{
_putchar(alpha);
alpha++;
}
_putchar('\n');
}
