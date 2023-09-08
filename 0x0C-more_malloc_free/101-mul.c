#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

 



int _strlen(char *s);
int multiply(int num1, int num2);
int _isdigit(int c);
int _atoi(char *s);
/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int num1, num2, result, i;
char *num1_str;
char *num2_str;
if (argc != 3)
{
printf("Error\n");
return (98);
}
num1_str = argv[1];
num2_str = argv[2];
for ( i = 0; i < _strlen(num1_str); i++)
{
if (!_isdigit(num1_str[i]))
{
printf("Error\n");
return (98);
}
}
for ( i = 0; i < _strlen(num2_str); i++)
{
if (!_isdigit(num2_str[i]))
{
printf("Error\n");
return (98);
}
}
num1 = _atoi(num1_str);
num2 = _atoi(num2_str);
result = multiply(num1, num2);
printf("%d\n", result);
return (0);
}
/**
 * multiply - multiplies two positive numbers
 * @num1:first num
 * @num2 sc num
 * 
 * Return :int
 */
int multiply(int num1, int num2) {
    return num1 * num2;
}


/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
int cou = 0;
while (*s != '\0')
{
s++;
cou++;
}
return (cou);
}


/**
 * _isdigit - check if char is digit
 * @c: is the int to be checked
 * Return: 1 if int is digit, otherwise 0.
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
return (0);
}

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int i, d, n, ln, f, digit;

	i = 0;
	d = 0;
	n = 0;
	ln = 0;
	f = 0;
	digit = 0;

	while (s[ln] != '\0')
		ln++;

	while (i < ln && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}
