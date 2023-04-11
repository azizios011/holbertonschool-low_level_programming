#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - check the code
 * @h : pointer
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;
	const list_t *current_node = h;

	while (current_node != NULL)
	{
		if (current_node->str != NULL)
		{
			printf("%s\n", current_node->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		node_count++;
		current_node = current_node->next;
	}
	return (node_count);
}
