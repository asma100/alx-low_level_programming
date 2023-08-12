#include <stdio.h>

/**
 * main - Prints the alphabet 
 *
 * Return:0
 */
int main(void)
{
char first = 'a';
char end = 'z' ;
char alpha = first ;
char first2 = 'A';
char end2 = 'Z' ;
char alpha2 = first2 ;
 while (alpha <= end)
{      
putchar(alpha);
alpha++;
}
while (alpha2 <= end2)
{
putchar(alpha2);
alpha2++;
}
putchar('\n');
return (0);
}
