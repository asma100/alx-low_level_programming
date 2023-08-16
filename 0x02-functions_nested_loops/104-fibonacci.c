#include <stdio.h>
/**
 * main - Prints first 98 Fibonacci numbers.
 *
 *
 * Return: Always 0.
 */
int main(void)
{
        int i;
        unsigned long a = 0, b = 1, sum;

        for (i = 0; i < 98; i++)
        {
                sum = a + b;
                printf("%lu", sum);
                a = b;
                b = sum;
                if (i == 49)
                        printf("\n");
                else
                        printf(", ");
        }

        return (0);
}
