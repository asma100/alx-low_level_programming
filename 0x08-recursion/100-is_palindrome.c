#include "main.h"

int pal(char *s, int i, int le);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * pal - checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @le: length of the string
 *
 * Return: 1 if palindrome1, 0 if not
 */
int pal(char *s, int i, int le)
{
	if (*(s + i) != *(s + le - 1))
		return (0);
	if (i >= le)
		return (1);
	return (pal(s, i + 1, le - 1));
}
