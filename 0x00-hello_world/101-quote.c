#include <unistd.h>
/**
 *main-print
 *Return:1
 */
int main(void)
{
char *task101 = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(STDERR_FILENO, task101, 50);
return 1;
}
