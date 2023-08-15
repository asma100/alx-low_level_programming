#include "main.h"

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
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

