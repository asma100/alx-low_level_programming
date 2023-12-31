#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @index:the position
 * @x:unsigned long int
 * Return: int
 */
int get_bit(unsigned long int x, unsigned int index)
{
unsigned long int mask;
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
mask = 1;
mask <<= index;
return ((x & mask) ? 1 : 0);
}
