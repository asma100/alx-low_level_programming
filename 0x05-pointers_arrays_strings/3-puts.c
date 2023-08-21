#include "main.h" 
 /**
 * _puts - prints a string, followed by a new line
 * @str: The string we want toprint
 *
 */
void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str++);
}
putchar('\n');
}
