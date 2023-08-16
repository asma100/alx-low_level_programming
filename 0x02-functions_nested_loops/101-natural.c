#include <stdio.h>
void  multiples_sum(void);
/**
 * main - check the code
 *multiples_sum : sum numbers
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
