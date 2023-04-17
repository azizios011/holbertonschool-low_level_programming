#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end - check the code
 * @head:  This is a pointer to a pointer to the head node of the list
 * @n: This is the integer value that the new node will store.
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current;

	/* create the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL); /* failed to allocate memory */
	}

	new_node->n = n;
	new_node->next = NULL;

	/* handle the case where the list is empty */
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	/* traverse to the end of the list */
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}

	/* link the new node to the end of the list */
	new_node->prev = current;
	current->next = new_node;

	return (new_node);
}
