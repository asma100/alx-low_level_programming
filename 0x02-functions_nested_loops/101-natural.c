#include <stdio.h>
void  multiples_sum(void);
/**
 * 
 * multiples_sum - prints mulriples sum .
 * Return: Always 0.
 */
int main(void)
{
multiples_sum();
return (0);
}

void  multiples_sum(void)
{
int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}

	printf("%d\n", sum);
}