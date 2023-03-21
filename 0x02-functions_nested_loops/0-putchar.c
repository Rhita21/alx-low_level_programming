#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: This program uses the _putchar function to write the
 * string "_putchar" to standard output, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
 write(1, "_putchar\n", 9);
 return (0);
}

