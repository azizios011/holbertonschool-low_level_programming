#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - pchrck the code.
 * @min : var.
 * @max : var.
 *
 * Return: Nothing.
 */
int *array_range(int min, int max)
{
	int i = 0;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	while (i <= max - min)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
