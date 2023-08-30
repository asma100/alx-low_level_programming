#include "main.h"


/**
 * _sqrt_recursion - natural square root of a number
 * @n: number of input
 *
 * Return:square root
 */
 /**
 * _sqrt_recursion2 - help find natural square root of a number
 * 
 * @n: number to calculate the sqaure root of
 * @m: iterator
 *
 * Return: the resulting square root
 */
 int _sqrt_recursion2(int n, int m)
{
	if (m * m > n)
		return (-1);
	if (m * m == n)
		return (m);
	return (_sqrt_recursion2(n, m + 1));
}
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion2(n, 0));
}
