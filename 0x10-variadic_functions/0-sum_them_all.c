#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum of all its paramters.
 * @coun: The number of paramters
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: the sum of all parameters.
 */

int sum_them_all(const unsigned int coun, ...)
{
va_list args;
int sum = 0;
unsigned int i;
va_start(args, coun);
for (i = 0; i < coun; i++)
{
sum += va_arg(args, int);
}
va_end(args);
return (sum);
}
