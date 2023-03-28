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
	int x;

	for (x = 0; x < n - 1; x++)
	{
		printf("%d, ", a[x]);
	}
	if (a[x] == '\0')
	{
		printf("\n");
	}
	printf("%d", a[x]);
	printf("\n");
}
