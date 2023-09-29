#include "main.h"
/**
 * get_endianness -checks the endianness.
 *
 * Return: void
 */
int get_endianness(void)
{
unsigned int test = 1;
char *firstb;
firstb = (char *) &test;
if (*firstb == 1)
{
return (0);
}
else
{
return (1);
}
}
