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
int i = 0;
while (argv[i])
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
