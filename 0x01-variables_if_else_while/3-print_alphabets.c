#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase and uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char c;

/* print lowercase alphabet */
for (c = 'a'; c <= 'z'; c++)
putchar(c);

/* print uppercase alphabet */
for (c = 'A'; c <= 'Z'; c++)
putchar(c);

/* print newline */
putchar('\n');

return (0);
}
