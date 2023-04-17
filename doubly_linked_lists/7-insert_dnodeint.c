#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Pointer to the head of the list
 * @idx: Index where the new node should be added (starting from 0)
 * @n: Value to be stored in the new node
 *
 * Return: Address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *h;
	unsigned int i;
	/* Special case: inserting at the beginning of the list */
	if (idx == 0)
		return (add_dnodeint(h, n));
	/* Traverse the list until we reach the position or the end */
	for (i = 0; i < idx - 1 && temp != NULL; i++)
		temp = temp->next;
	/* If we reached the end before the position, return NULL */
	if (temp == NULL)
		return (NULL);
	/* Create the new node and link it to the list */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = temp;
	new_node->next = temp->next;
	if (temp->next != NULL)
	{
		temp->next->prev = new_node;
		temp->next = new_node;
	}
	return (new_node);
}
