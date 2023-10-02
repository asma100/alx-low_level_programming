#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* append_text_to_file -   appends text at the end of a file.
* @filename: filename
* @text_content: is a NULL terminated string
* Return: 1 or -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
int  op, wn;
if (filename == NULL)
return (-1);
op = open(filename, O_WRONLY | O_APPEND | O_EXCL);
if (op < 0)
{
perror("open");
return (-1);
}
if (text_content != NULL)
{
wn = write(op, text_content, _strlen(text_content));
if (wn < 0)
{
perror("write");
close(op);
return (-1);
}
}
close(op);
return (1);
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
