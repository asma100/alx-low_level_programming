#include "main.h"



/**
 * print_alphabet - print all alphabet in lowercase
 */



void print_alphabet(void)
{
char first = 'a';
char end = 'z';
char alpha = first;
while ( alpha <= end )
{
_putchar(alpha);
alpha++;
}
_putchar('\n');
}
