#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
int x;
int i = 0;
while (argv[i])
i++;
x = i - 1;
printf("%d\n", x);
return (0);
}
