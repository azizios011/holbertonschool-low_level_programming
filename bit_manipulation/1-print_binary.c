#include "main.h"
#include <stdio.h>

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to print in binary
 * Return: Always 0.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;

	/* Check if n is zero */
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	/* Find the highest bit that is set */
	while ((mask << 1) <= n)
		mask <<= 1;

	/* Print the binary digits */
	while (mask != 0)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');
		mask >>= 1;
	}
}
