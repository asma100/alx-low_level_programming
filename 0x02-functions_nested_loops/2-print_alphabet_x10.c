#include "main.h"
/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */
int i;  
for (i=0;i<10;i++)
{
char first = 'a';
char end = 'z';
char alpha = first;
while (alpha <= end)
{
_putchar(alpha);
alpha++;
}
_putchar('\n');
    }
}
