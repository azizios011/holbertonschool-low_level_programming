#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creating an array
 * @c: array of chars
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(size * sizeof(char));
	{
		if (arr == NULL)
		{
			return (NULL);
		}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
	}
}
