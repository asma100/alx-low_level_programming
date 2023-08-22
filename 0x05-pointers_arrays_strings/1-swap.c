#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: integer to swap
 * @b: integer to swap
 */

void swap_int(int *a, int *b)
{
int m = *a;
int n = *b;
*a = n;
*b = m;
}
