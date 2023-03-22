#include "main.h"
#include <stdio.h>
/**
 * print_array - check the code for
 *
 * @n : array.
 * @a : array.
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	 n = 0;

	while (n < 5)
	{
		printf("%d ,", a[n]);
		n++;
	}
	putchar('\n');
}
