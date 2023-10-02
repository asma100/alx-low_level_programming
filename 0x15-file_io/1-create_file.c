#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* create_file -  creates a file.
* @filename: filename
* @text_content: is a NULL terminated string
* Return: 1 or -1
*/
int create_file(const char *filename, char *text_content)
{
ssize_t wn;
mode_t m = 0600;
int fd;
if (filename == NULL)
return (-1);
fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, m);
if (fd < 0)
{
perror("open");
return (-1);
}
if (text_content != NULL)
{
wn = write(fd, text_content, _strlen(text_content));
if (wn < 0)
{
perror("write");
close(fd);
return (-1);
}
}
else
{
create_file(filename, NULL);
}
close(fd);
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
