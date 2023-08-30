#include "main.h"
/**
 *  factorial - the length of a string
 * @n: a integer as input
 * Return: returns the factorial of a given number.
 */
int factorial(int n)
{
if (n == 0 || n == 1)
return (1);
else if (n < 0)
return (-1);
else
return (n * factorial(n - 1));
}
