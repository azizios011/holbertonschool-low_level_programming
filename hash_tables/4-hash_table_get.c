#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_get - check the code
 * @ht: is the hash table you want to look into
 * @key: is the key you are looking for
 * Return: Always EXIT_SUCCESS.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp_node;

	if (!ht || !key || !*key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	temp_node = ht->array[index];

	while (temp_node)
	{
		if (strcmp(temp_node->key, key) == 0)
			return (temp_node->value);
		temp_node = temp_node->next;
	}

	return (NULL);
}
