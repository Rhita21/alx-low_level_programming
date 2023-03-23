#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 *
 * @n: The number to extract the last digit from.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
int last_digit;

/* Compute the absolute value of n */
if (n < 0)
n = -n;

/* Extract the last digit of n */
last_digit = n % 10;

/* Print the last digit of n */
_putchar('0' + last_digit);

/* Return the value of the last digit */
return (last_digit);
}
