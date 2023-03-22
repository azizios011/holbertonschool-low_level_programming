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
	int x = 0;

	while (x < n)
	{
		printf("%d,", a[x]);
		x++;

		if (x != n - 1)

			printf(" ");
	}
	printf("\n");
}
