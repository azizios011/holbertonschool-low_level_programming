#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_create - check the code for
 * @size: is the size of the array
 * Return: Always EXIT_SUCCESS.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ptr;
	unsigned long int i;

	ptr = malloc(sizeof(hash_table_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->size = size;
	ptr->array = malloc(size * sizeof(hash_node_t *));
	if (ptr->array == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr->array[i] = NULL;
	}
	return (ptr);
}
