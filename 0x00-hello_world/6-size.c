#include <stdio.h>

/**
 *main :Prints the sizeof
 *Return: 0
 *
 */
int main(void)
{
char a;
int s;
long int m;
long long int e;
float l;
printf("Size of a char: %d byte(s)\n", sizeof(a));
printf("Size of an int: %d byte(s)\n", sizeof(s));
printf("Size of a long int: %d byte(s)\n", sizeof(m));
printf("Size of a long long int: %d byte(s)\n", sizeof(e));
printf("Size of a float: %d byte(s)\n", sizeof(l));
return (0);
}
