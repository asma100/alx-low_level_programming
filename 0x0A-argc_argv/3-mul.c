#include <stdio.h>
int _atoi(char *s);
/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}

else
{
int x, y, z;
y = _atoi(argv[1]);
x = _atoi(argv[2]);
z = y * x;
printf("%d\n", z);
}
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
