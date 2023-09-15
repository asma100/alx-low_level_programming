#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings -prints numbers,
 * @coun: The number of paramters
 * @...: A variable number of paramters to calculate the sum of.
 * @separator: is the string to be printed between numbers
 *
 * Return: the sum of all parameters.
 */


void print_strings(const char *separator, const unsigned int coun, ...)
{
va_list args;
unsigned int i;
char *s;
va_start(args, coun);
for (i = 0; i < coun; i++)
{
s = va_arg(args, char *);
if (s == NULL)
{
printf("(nil)");
}
else
{
printf("%s", s);
}
if (separator != NULL && i != coun - 1)
{
printf("%s", separator);
}
}
va_end(args);
printf("\n");
}
