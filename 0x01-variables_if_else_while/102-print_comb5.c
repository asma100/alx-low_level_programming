#include <stdio.h>

/**                                                                                                                                                
 * main - Prints different combinations of two digits.
 *
 * Return:0.
 */
int main(void)
{
int i,j,k,m;

for (i = 0; i <= 9; i++)
{
for (j = 0 ; j <= i; j++)
{
for (k = j; k <= j; k++)
{
for (m = k+1 ; m <= k; m++)
{
putchar(i + '0');
putchar(j + '0');
putchar(' ');
putchar(k + '0');
putchar(m + '0');
if (i != 9 || j != 9 || k != 9|| m != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');

return (0);
}
