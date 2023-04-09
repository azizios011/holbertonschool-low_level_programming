#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - check the code
 * @array : an array of integer
 * @size : size of array
 * @cmp : function pointer
 * Return: Always 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)

				return (i);
		}
	}
	return (-1);
}
