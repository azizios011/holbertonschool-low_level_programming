#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node - check the code
 * @head : double pointer
 * @str : string
 * Return: Always 0.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (!head || !str)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(list_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
