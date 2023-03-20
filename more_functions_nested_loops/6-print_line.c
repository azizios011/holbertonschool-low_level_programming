#include "main.h"
/**
 * print_line - check the code
 *
 * @n: check the code.
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	int x = 0;

	while (x < n)
	{
		x++;
		_putchar(95);
	}
	_putchar('\n');
}
