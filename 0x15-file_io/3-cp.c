#include <sys/types.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>

/**
 * copy_file - copies the contents of one file to another
 * @src_file: the source file
 * @dst_file: the destination file
 *
 * Return: 0 on success, or a positive error code on failure
 */
int copy_file(int src_file, int dst_file)
{
char buf[1024];
ssize_t nr, nw;
while ((nr = read(src_file, buf, sizeof(buf))) > 0)
{
nw = write(dst_file, buf, nr);
if (nw < 0) {
dprintf(STDERR_FILENO, "Error: Can't write to file %d\n", dst_file);
return (99);
}
}

return (0);
}

/**
 * main - copies one file to another
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int fd_src, fd_dst;
struct stat st;
int copy_result;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
return (97);
}
if (stat(argv[2], &st) == 0)
{
if (truncate(argv[2], 0) < 0)
{
dprintf(STDERR_FILENO, "Error: Can't truncate file %s\n", argv[2]);
return (99);
}
    
}

fd_src = open(argv[1], O_RDONLY);
if (fd_src < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
return (98);
}
fd_dst = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0666);
if (fd_dst < 0)
{
dprintf(STDERR_FILENO, "Error: Can't create file %s\n", argv[2]);
return (99);
}
copy_result = copy_file(fd_src, fd_dst);
if (copy_result != 0)
{
return copy_result;
 }

 if (close(fd_src) < 0)
 {
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_src);
return (100);
}
if (close(fd_dst) < 0)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_dst);
return (100);
}
return (0);
}
