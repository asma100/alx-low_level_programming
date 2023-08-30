/**
 * _sqrt_recursion2 - recurses to find the natural
 * square root of a number
 *
 * @n: number to calculate the square root of
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


/**
 * _sqrt_recursion - calculates the natural square root of a number
 *
 * @n: number to calculate the square root of
 *
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion2(n, 0));
}

