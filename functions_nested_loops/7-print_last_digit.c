#include "main.h"
/**
 * print_last_digit - check the code
 *
 * @n : last digit
 *
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int digit;

	digit = n % 10;

	if (n > 0)
	{
		_putchar(digit + '0');
		return (digit);
	}

	else if (n < 0)
	{
		_putchar(-digit + '0');
		return (-digit);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
