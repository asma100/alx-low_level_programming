#include <stdio.h>

/**
 * main -  prints the sum of the even-valued terms
 *
 * Return: Always 0 
 */
int main(void)
{
	int i;
	unsigned long int a, b, x, sum;

	a = 1;
	b = 2;
	sum = 0;

	for (i = 1; i <= 20; ++i)
	{
		if (a < 4000000 && (a % 2) == 0)
		{
			sum = sum + a;
		}
		x = a + b;
		a = b;
		b = x;
	}

	printf("%lu\n", sum);

	return (0);
}
