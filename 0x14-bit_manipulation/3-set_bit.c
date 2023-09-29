#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @index:the position
 * @n:unsigned long int
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask = 1;
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
mask <<= index;
*n |= mask;
return (1);
}
