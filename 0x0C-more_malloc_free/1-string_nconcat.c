#include "main.h"
11;rgb:0000/0000/0000#include <stdlib.h>
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strcat(char *dest, char *src);
/**
 * string_nconcat - concatenates two strings.
 * @s1: string 1
 * @s2:string 2
 * @n:bytes of s2 to be printed
 * Return: pointer to new string, NULL if fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int s2_len;
char *result;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
s2_len = _strlen(s2);
if (n >= s2_len)
{
n = s2_len;
}
result = (char *) malloc(_strlen(s1) + n + 1);
_strcpy(result, s1);
_strncat(result, s2, n);
_strcat(result, "");
return (result);
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
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int l, i;

	l = 0;

	while (src[l] != '\0')
	{
		l++;
	}

	for (i = 0; i < l; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
/**
 * _strncat - concatenates 2 strings.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * @n: input value
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;
i = 0;
j = 0;
for (i = 0; i < 97; i++)
{
if (*(dest + i) == '\0')
{
while (*(src + j) != '\0' && j < n)
{
*(dest + i) = *(src + j);
j++;
i++;
}
}
}
return (dest);
}
/**
 * _strcat - concatenates 2 strings.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
int i;
int j;
i = 0;
j = 0;
for (i = 0; i < 97; i++)
{
if (*(dest + i) == '\0')
{
while (*(src + j) != '\0')
{
*(dest + i) = *(src + j);
j++;
i++;
}
*(src + j) = '\0';
}
}
return (dest);
}
