#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes of its own main function
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 *
 * Return: 0 on success, exit with status code on failure
 */
int main(int argc, char *argv[])
{
int num_bytes, i;
char *main_addr;
if (argc != 2)
{
printf("Error\n");
return (1);
}
num_bytes = atoi(argv[1]);
if (num_bytes < 0)
{
printf("Error\n");
return (2);
}
main_addr = (char *)main;
for (i = 0; i < num_bytes; i++)
{
printf("%02x", *(main_addr + i) & 0xff);
}
printf("\n");
return (0);
}
