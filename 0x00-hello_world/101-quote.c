#include <unistd.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */

int main(void)
{
char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(STDERR_FILENO, str, 59);
return (1);
}
