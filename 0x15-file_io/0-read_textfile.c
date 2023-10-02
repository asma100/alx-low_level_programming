#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* read_textfile - reads a text file and prints it
* @filename: filename
* @letters:number of letters it should read and print
* Return: the actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{

ssize_t nr, nw;
int fd;
char *c;
fd = open(filename, O_RDONLY);
if (fd < 0)
{
return (0);
perror("open");
exit(1);
}
c = malloc(letters);
if (c == NULL)
{
perror("malloc");
exit(1);
return (0);
}
nr = read(fd, c, letters);
if (nr < 0)
{
perror("read");
exit(1);
return (0);
}
if (c == NULL)
return (0);
nw = write(STDOUT_FILENO, c, nr);
free(c);
close(fd);
return (nw);
}
