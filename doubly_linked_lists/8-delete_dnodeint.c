#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - check the code
 * @head: point to head list
 * @index: index of the list
 * Return: Always 0
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *prev;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	while (i < index)
	{
		prev = temp;
		temp = temp->next;
		if (temp == NULL)
			return (-1);
		i++;
	}
	prev->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = prev;
	free(temp);
	return (1);
}
