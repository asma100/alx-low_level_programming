#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 *
 * Return: 0 on success, exit with status code on failure
 */
int main(int argc, char *argv[])
{
int n1, n2, x;
int (*op_func)(int, int);
if (argc != 4)
{
printf("Error\n");
return (98);
}
n1 = atoi(argv[1]);
n2 = atoi(argv[3]);
op_func = get_op_func(argv[2]);
if (!op_func || argv[2][1] != '\0')
{
printf("Error\n");
return (99);
}
if ((argv[2][0] == '/' || argv[2][0] == '%') && n2 == 0)
{
printf("Error\n");
return (100);
}
x = op_func(n1, n2);
printf("%d\n", x);
return (0);
}
