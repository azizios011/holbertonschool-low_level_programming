#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - check the code
 * @array : pointer
 * @size : size of the array
 * @action : pointer to a function
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
