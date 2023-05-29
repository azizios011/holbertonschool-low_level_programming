#include "search_algos.h"

/**
 * print_array - Prints the elements of the array within the specified range.
 * @array: Pointer to the first element of the array.
 * @start: Starting index.
 * @end: Ending index.
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i != end)
			printf(", ");
	}
	printf("\n");
}
