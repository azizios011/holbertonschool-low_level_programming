#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end - check the code
 * @n: varaible
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
	{
		return (NULL);
	}
	new_node->next = strdup(n);
	if (!new_node->n)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		dlistint_t *current = *head;

		while (current->next)
		{
		current = current->next;
		}
		current->next = new_node;
	}
	return (new_node);
}
